/**
 * @file Hexpat grammar for tree-sitter
 * @author NathanSnail
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const identifier = /[a-zA-Z_][\w]*/;

module.exports = grammar({
	name: "hexpat",
	extras: $ => [
		/\s/,
		$.multiline_comment,
		$.line_comment,
	],
	rules: {
		source_file: $ => repeat($.statement),

		using: $ => seq(
			$.keyword_using,
			$.type_identifier,
			$.token_eq,
			$.arraylike_type,
			$.token_semi
		),

		assignment: $ => seq($.identifier, $.token_eq, $.expr),

		generic_decl: $ => seq(
			$.token_lgeneric,
			sep1($.generic_decl_param, $.token_comma),
			$.token_rgeneric
		),

		generic_decl_param: $ => choice(
			field("generic_name", $.type_identifier),
			seq($.keyword_auto, $.identifier)
		),

		generic: $ => seq(
			$.token_lgeneric,
			sep1($.generic_param, $.token_comma),
			$.token_rgeneric
		),

		generic_param: $ => choice(
			$.arraylike_type,
			$.expr
		),

		type: $ => seq(
			optional($.endianness),
			$.type_identifier,
			optional($.generic)
		),

		arraylike_type: $ => seq($.type, repeat($.type_suffix)),

		padding: $ => seq(
			$.keyword_padding,
			$.token_lbracket,
			$.expr,
			$.token_rbracket,
			$.token_semi
		),

		specialised_field: $ => seq(
			field("field_name", $.identifier),
			optional($.type_suffix)
		),

		type_field: $ => seq(
			$.type,
			sep1($.specialised_field, $.token_comma),
			$.token_semi
		),

		maybe_type_field: $ => choice($.padding, $.type_field),

		type_suffix: $ => seq(
			$.token_lbracket,
			$.expr,
			$.token_rbracket
		),

		struct_def: $ => seq(
			$.keyword_struct,
			$.type_identifier,
			optional($.generic_decl),
			$.token_lbrace,
			repeat($.maybe_type_field),
			$.token_rbrace
		),

		bitfield_type: $ => choice($.signedness, $.type),

		bitfield_type_field: $ => seq(
			optional($.bitfield_type),
			$.type_identifier,
			":",
			$.integer,
			$.token_semi
		),

		bitfield_field: $ => choice(
			$.bitfield_type_field,
			$.type_field
		),

		bitfield_def: $ => seq(
			$.keyword_bitfield,
			$.identifier,
			optional($.generic_decl),
			$.token_rbrace,
			repeat($.bitfield_type_field),
			$.token_rbrace
		),

		type_def: $ => seq(
			choice($.struct_def, $.bitfield_def),
			$.token_semi
		),

		sum: $ => prec.left(1, seq($.expr, field("operator", $.token_add), $.expr)),
		sub: $ => prec.left(1, seq($.expr, field("operator", $.token_sub), $.expr)),
		mul: $ => prec.left(2, seq($.expr, field("operator", $.token_mul), $.expr)),
		div: $ => prec.left(2, seq($.expr, field("operator", $.token_div), $.expr)),
		expr: $ => choice($.expr_leaf, $.sub, $.sum, $.mul, $.div),
		expr_leaf: $ => prec(1, choice($.number, $.identifier)),
		statement: $ => choice($.assignment, $.type_def, $.using),

		endianness: $ => choice("le", "be"),
		signedness: $ => prec(1, choice("signed", "unsigned")),

		number: $ => /\d+(\.\d*)?/,
		integer: $ => /\d+/,
		type_identifier: $ => prec(1, identifier),
		identifier: $ => identifier,
		multiline_comment: $ => seq(
			'/*',
			/[^*]*/, // todo: make this work with comments like /* * */
			'*/',
		),
		line_comment: $ => /\/\/.*\n/,

		token_lbrace: $ => "{",
		token_rbrace: $ => "}",
		token_lgeneric: $ => "<",
		token_rgeneric: $ => ">",
		token_lbracket: $ => "[",
		token_rbracket: $ => "]",
		token_comma: $ => ",",
		token_semi: $ => ";",
		token_eq: $ => "=",
		token_add: $ => "+",
		token_sub: $ => "-",
		token_mul: $ => "*",
		token_div: $ => "/",
		keyword_using: $ => "using",
		keyword_padding: $ => "padding",
		keyword_bitfield: $ => "bitfield",
		keyword_struct: $ => "struct",
		keyword_auto: $ => "auto",
	}
});

function sep(el, joiner) {
	return optional(sep1(el, joiner))
}

function sep1(el, joiner) {
	return seq(el, repeat(seq(joiner, el)))
}

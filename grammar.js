/**
 * @file Hexpat grammar for tree-sitter
 * @author NathanSnail
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const identifier = /[a-zA-Z_][\w]*/;

export default grammar({
	name: "hexpat",
	extras: ($) => [/\s/, $.multiline_comment, $.line_comment],
	rules: {
		source_file: ($) => repeat($.statement),

		using: ($) =>
			seq(
				$.keyword_using,
				$.type_identifier,
				$.token_eq,
				$.arraylike_type,
				$.token_semi,
			),

		assignment: ($) => seq($.identifier, $.token_eq, $.expr),

		generic_decl: ($) =>
			seq(
				$.token_lgeneric,
				sep($.generic_decl_param, $.token_comma),
				$.token_rgeneric,
			),

		generic_decl_param: ($) =>
			choice(
				field("generic_name", $.type_identifier),
				seq($.keyword_auto, $.identifier),
			),

		generic: ($) =>
			seq(
				$.token_lgeneric,
				sep($.generic_param, $.token_comma),
				$.token_rgeneric,
			),

		generic_param: ($) => choice($.arraylike_type, $.expr),

		type: ($) =>
			seq(
				optional($.endianness),
				$.type_identifier,
				optional($.generic),
			),

		arraylike_type: ($) => seq($.type, repeat($.type_suffix)),

		padding: ($) =>
			seq(
				$.keyword_padding,
				$.token_lbracket,
				$.expr,
				$.token_rbracket,
				$.token_semi,
			),

		specialised_field: ($) =>
			seq(
				field("field_name", $.identifier),
				optional($.type_suffix),
			),

		type_field: ($) =>
			seq(
				$.type,
				sep($.specialised_field, $.token_comma),
				$.token_semi,
			),

		maybe_type_field: ($) => choice($.padding, $.type_field),

		enum_field: ($) => seq($.type_identifier, $.token_eq, $.expr_leaf),

		type_suffix: ($) => seq($.token_lbracket, $.expr, $.token_rbracket),

		struct_def: ($) =>
			seq(
				$.keyword_struct,
				$.type_identifier,
				optional($.generic_decl),
				$.token_lbrace,
				repeat($.maybe_type_field),
				$.token_rbrace,
			),

		enum_def: ($) =>
			seq(
				$.keyword_enum,
				$.type_identifier,
				$.token_colon,
				$.type,
				$.token_lbrace,
				optional(
					seq(
						repeat(seq($.enum_field, $.token_comma)),
						$.enum_field,
					),
				),
				$.token_rbrace,
			),

		bitfield_type: ($) => choice($.signedness, $.type),

		bitfield_type_field: ($) =>
			seq(
				optional($.bitfield_type),
				$.type_identifier,
				$.token_colon,
				$.integer,
				$.token_semi,
			),

		bitfield_field: ($) => choice($.bitfield_type_field, $.type_field),

		bitfield_def: ($) =>
			seq(
				$.keyword_bitfield,
				$.identifier,
				optional($.generic_decl),
				$.token_rbrace,
				repeat($.bitfield_type_field),
				$.token_rbrace,
			),

		type_def: ($) =>
			seq(
				choice($.struct_def, $.bitfield_def, $.enum_def),
				$.token_semi,
			),

		sum: ($) =>
			prec.left(
				1,
				seq($.expr, field("operator", $.token_add), $.expr),
			),
		sub: ($) =>
			prec.left(
				1,
				seq($.expr, field("operator", $.token_sub), $.expr),
			),
		mul: ($) =>
			prec.left(
				2,
				seq($.expr, field("operator", $.token_mul), $.expr),
			),
		div: ($) =>
			prec.left(
				2,
				seq($.expr, field("operator", $.token_div), $.expr),
			),
		expr: ($) => choice($.expr_leaf, $.sub, $.sum, $.mul, $.div),
		expr_leaf: ($) => prec(1, choice($.number, $.identifier)),
		statement: ($) => choice($.assignment, $.type_def, $.using),

		endianness: (_) => choice("le", "be"),
		signedness: (_) => prec(1, choice("signed", "unsigned")),

		float: (_) => /\d+\.\d+/,
		dec_integer: (_) => /\d+/,
		hex_integer: (_) => /0x[0-9A-F]+/,
		integer: ($) => choice($.dec_integer, $.hex_integer),

		number: ($) => choice($.integer, $.float),
		type_identifier: (_) => prec(1, identifier),
		identifier: (_) => identifier,
		multiline_comment: (_) =>
			seq(
				"/*",
				/[^*]*/, // todo: make this work with comments like /* * */
				"*/",
			),
		line_comment: (_) => /\/\/.*\n/,

		token_lbrace: (_) => "{",
		token_rbrace: (_) => "}",
		token_lgeneric: (_) => "<",
		token_rgeneric: (_) => ">",
		token_lbracket: (_) => "[",
		token_rbracket: (_) => "]",
		token_comma: (_) => ",",
		token_semi: (_) => ";",
		token_colon: (_) => ":",
		token_eq: (_) => "=",
		token_add: (_) => "+",
		token_sub: (_) => "-",
		token_mul: (_) => "*",
		token_div: (_) => "/",
		keyword_using: (_) => "using",
		keyword_padding: (_) => "padding",
		keyword_bitfield: (_) => "bitfield",
		keyword_struct: (_) => "struct",
		keyword_enum: (_) => "enum",
		keyword_auto: (_) => "auto",
	},
});

/**
 * @param {RuleOrLiteral} el
 * @param {RuleOrLiteral} joiner
 */
function sep(el, joiner) {
	return seq(el, repeat(seq(joiner, el)));
}

module.exports = grammar({
	name: "hexpat",
	extras: $ => [
		/\s/,
		$.multiline_comment,
		$.line_comment,
	],
	rules: {
		source_file: $ => repeat($.statement),

		using: $ => seq($.keyword_using, $.identifier, "=", $.arraylike_type, ";"),
		assignment: $ => seq($.identifier, "=", $.expr),
		generic_decl: $ => seq("<", sep1($.generic_decl_param, ","), ">"),
		generic_decl_param: $ => choice($.identifier, seq("auto", $.identifier)),
		generic: $ => seq("<", sep1($.generic_param, ","), ">"),
		generic_param: $ => choice($.expr, $.arraylike_type),
		type: $ => seq(optional($.endianness), $.type_identifier, optional($.generic)),
		arraylike_type: $ => seq($.type, repeat($.type_suffix)),
		padding: $ => seq($.keyword_padding, "[", $.expr, "]", ";"),
		specialised_field: $ => seq(field("field_name", $.identifier), optional($.type_suffix)),
		type_field: $ => seq($.type, sep1($.specialised_field, ","), ";"),
		maybe_type_field: $ => choice($.padding, $.type_field),
		type_suffix: $ => seq("[", $.expr, "]"),
		struct_def: $ => seq($.keyword_struct, field("struct_name", $.identifier), optional($.generic_decl), "{", repeat($.maybe_type_field), "}"),
		signedness: $ => prec(1, choice("signed", "unsigned")),
		bitfield_type: $ => choice($.signedness, $.type),
		bitfield_type_field: $ => seq(optional($.bitfield_type), $.identifier, ":", $.integer, ";"),
		bitfield_field: $ => choice($.bitfield_type_field, $.type_field),
		bitfield_def: $ => seq($.keyword_bitfield, $.identifier, optional($.generic_decl), "{", repeat($.bitfield_type_field), "}"),
		type_def: $ => seq(choice($.struct_def, $.bitfield_def), ";"),
		expr_leaf: $ => prec(1, choice($.number, $.identifier)),
		sub: $ => prec.left(1, seq($.expr, "-", $.expr)),
		sum: $ => prec.left(1, seq($.expr, "+", $.expr)),
		mul: $ => prec.left(2, seq($.expr, "*", $.expr)),
		div: $ => prec.left(2, seq($.expr, "/", $.expr)),
		expr: $ => choice($.expr_leaf, $.sub, $.sum, $.mul, $.div),
		statement: $ => choice($.assignment, $.type_def, $.using),
		endianness: $ => choice("le", "be"),
		number: $ => /\d+(\.\d*)?/,
		integer: $ => /\d+/,
		type_identifier: $ => $.identifier,
		identifier: $ => /[a-zA-Z][\w-]*/,
		multiline_comment: $ => /\/\*[.\n]*\*\//,
		line_comment: $ => /\/\/.*\n/,

		keyword_using: $ => "using",
		keyword_padding: $ => "padding",
		keyword_bitfield: $ => "bitfield",
		keyword_struct: $ => "struct",
	}
});

function sep(el, joiner) {
	return optional(sep1(el, joiner))
}

function sep1(el, joiner) {
	return seq(el, repeat(seq(joiner, el)))
}

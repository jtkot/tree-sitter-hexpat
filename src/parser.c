#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_using = 1,
  anon_sym_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_LT = 4,
  anon_sym_COMMA = 5,
  anon_sym_GT = 6,
  anon_sym_auto = 7,
  anon_sym_padding = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_struct = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_signed = 14,
  anon_sym_unsigned = 15,
  anon_sym_COLON = 16,
  anon_sym_bitfield = 17,
  anon_sym_DASH = 18,
  anon_sym_PLUS = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_le = 22,
  anon_sym_be = 23,
  sym_number = 24,
  sym_integer = 25,
  sym_identifier = 26,
  sym_multiline_comment = 27,
  sym_line_comment = 28,
  sym_source_file = 29,
  sym_using = 30,
  sym_assignment = 31,
  sym_generic_decl = 32,
  sym_generic_decl_param = 33,
  sym_generic = 34,
  sym_generic_param = 35,
  sym_type = 36,
  sym_arraylike_type = 37,
  sym_padding = 38,
  sym_specialised_field = 39,
  sym_type_field = 40,
  sym_maybe_type_field = 41,
  sym_type_suffix = 42,
  sym_struct_def = 43,
  sym_signedness = 44,
  sym_bitfield_type = 45,
  sym_bitfield_type_field = 46,
  sym_bitfield_def = 47,
  sym_type_def = 48,
  sym_expr_leaf = 49,
  sym_sub = 50,
  sym_sum = 51,
  sym_mul = 52,
  sym_div = 53,
  sym_expr = 54,
  sym_statement = 55,
  sym_endianness = 56,
  sym_type_identifier = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_generic_decl_repeat1 = 59,
  aux_sym_generic_repeat1 = 60,
  aux_sym_arraylike_type_repeat1 = 61,
  aux_sym_type_field_repeat1 = 62,
  aux_sym_struct_def_repeat1 = 63,
  aux_sym_bitfield_def_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_using] = "using",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_auto] = "auto",
  [anon_sym_padding] = "padding",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_COLON] = ":",
  [anon_sym_bitfield] = "bitfield",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_le] = "le",
  [anon_sym_be] = "be",
  [sym_number] = "number",
  [sym_integer] = "integer",
  [sym_identifier] = "identifier",
  [sym_multiline_comment] = "multiline_comment",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym_using] = "using",
  [sym_assignment] = "assignment",
  [sym_generic_decl] = "generic_decl",
  [sym_generic_decl_param] = "generic_decl_param",
  [sym_generic] = "generic",
  [sym_generic_param] = "generic_param",
  [sym_type] = "type",
  [sym_arraylike_type] = "arraylike_type",
  [sym_padding] = "padding",
  [sym_specialised_field] = "specialised_field",
  [sym_type_field] = "type_field",
  [sym_maybe_type_field] = "maybe_type_field",
  [sym_type_suffix] = "type_suffix",
  [sym_struct_def] = "struct_def",
  [sym_signedness] = "signedness",
  [sym_bitfield_type] = "bitfield_type",
  [sym_bitfield_type_field] = "bitfield_type_field",
  [sym_bitfield_def] = "bitfield_def",
  [sym_type_def] = "type_def",
  [sym_expr_leaf] = "expr_leaf",
  [sym_sub] = "sub",
  [sym_sum] = "sum",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_expr] = "expr",
  [sym_statement] = "statement",
  [sym_endianness] = "endianness",
  [sym_type_identifier] = "type_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_generic_decl_repeat1] = "generic_decl_repeat1",
  [aux_sym_generic_repeat1] = "generic_repeat1",
  [aux_sym_arraylike_type_repeat1] = "arraylike_type_repeat1",
  [aux_sym_type_field_repeat1] = "type_field_repeat1",
  [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
  [aux_sym_bitfield_def_repeat1] = "bitfield_def_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_padding] = anon_sym_padding,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_bitfield] = anon_sym_bitfield,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_le] = anon_sym_le,
  [anon_sym_be] = anon_sym_be,
  [sym_number] = sym_number,
  [sym_integer] = sym_integer,
  [sym_identifier] = sym_identifier,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym_using] = sym_using,
  [sym_assignment] = sym_assignment,
  [sym_generic_decl] = sym_generic_decl,
  [sym_generic_decl_param] = sym_generic_decl_param,
  [sym_generic] = sym_generic,
  [sym_generic_param] = sym_generic_param,
  [sym_type] = sym_type,
  [sym_arraylike_type] = sym_arraylike_type,
  [sym_padding] = sym_padding,
  [sym_specialised_field] = sym_specialised_field,
  [sym_type_field] = sym_type_field,
  [sym_maybe_type_field] = sym_maybe_type_field,
  [sym_type_suffix] = sym_type_suffix,
  [sym_struct_def] = sym_struct_def,
  [sym_signedness] = sym_signedness,
  [sym_bitfield_type] = sym_bitfield_type,
  [sym_bitfield_type_field] = sym_bitfield_type_field,
  [sym_bitfield_def] = sym_bitfield_def,
  [sym_type_def] = sym_type_def,
  [sym_expr_leaf] = sym_expr_leaf,
  [sym_sub] = sym_sub,
  [sym_sum] = sym_sum,
  [sym_mul] = sym_mul,
  [sym_div] = sym_div,
  [sym_expr] = sym_expr,
  [sym_statement] = sym_statement,
  [sym_endianness] = sym_endianness,
  [sym_type_identifier] = sym_type_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_generic_decl_repeat1] = aux_sym_generic_decl_repeat1,
  [aux_sym_generic_repeat1] = aux_sym_generic_repeat1,
  [aux_sym_arraylike_type_repeat1] = aux_sym_arraylike_type_repeat1,
  [aux_sym_type_field_repeat1] = aux_sym_type_field_repeat1,
  [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
  [aux_sym_bitfield_def_repeat1] = aux_sym_bitfield_def_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_padding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitfield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_le] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_be] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_decl_param] = {
    .visible = true,
    .named = true,
  },
  [sym_generic] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_arraylike_type] = {
    .visible = true,
    .named = true,
  },
  [sym_padding] = {
    .visible = true,
    .named = true,
  },
  [sym_specialised_field] = {
    .visible = true,
    .named = true,
  },
  [sym_type_field] = {
    .visible = true,
    .named = true,
  },
  [sym_maybe_type_field] = {
    .visible = true,
    .named = true,
  },
  [sym_type_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_def] = {
    .visible = true,
    .named = true,
  },
  [sym_signedness] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_type_field] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_def] = {
    .visible = true,
    .named = true,
  },
  [sym_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_leaf] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_mul] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_endianness] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arraylike_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bitfield_def_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '.') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_padding);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_bitfield);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_le);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_be);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_multiline_comment);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_padding] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_bitfield] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_le] = ACTIONS(1),
    [anon_sym_be] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(97),
    [sym_using] = STATE(50),
    [sym_assignment] = STATE(50),
    [sym_struct_def] = STATE(98),
    [sym_bitfield_def] = STATE(98),
    [sym_type_def] = STATE(50),
    [sym_statement] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_bitfield] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type_identifier,
    STATE(34), 1,
      sym_type,
    STATE(35), 1,
      sym_expr,
    STATE(70), 1,
      sym_generic_param,
    STATE(73), 1,
      sym_endianness,
    STATE(79), 1,
      sym_arraylike_type,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [40] = 11,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type_identifier,
    STATE(34), 1,
      sym_type,
    STATE(35), 1,
      sym_expr,
    STATE(67), 1,
      sym_generic_param,
    STATE(73), 1,
      sym_endianness,
    STATE(79), 1,
      sym_arraylike_type,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [80] = 10,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type_identifier,
    STATE(73), 1,
      sym_endianness,
    STATE(85), 1,
      sym_bitfield_type,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(26), 2,
      anon_sym_le,
      anon_sym_be,
    STATE(4), 2,
      sym_bitfield_type_field,
      aux_sym_bitfield_def_repeat1,
    STATE(80), 2,
      sym_type,
      sym_signedness,
  [116] = 10,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type_identifier,
    STATE(73), 1,
      sym_endianness,
    STATE(85), 1,
      sym_bitfield_type,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    ACTIONS(34), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(6), 2,
      sym_bitfield_type_field,
      aux_sym_bitfield_def_repeat1,
    STATE(80), 2,
      sym_type,
      sym_signedness,
  [152] = 10,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_type_identifier,
    STATE(73), 1,
      sym_endianness,
    STATE(85), 1,
      sym_bitfield_type,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    ACTIONS(34), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(4), 2,
      sym_bitfield_type_field,
      aux_sym_bitfield_def_repeat1,
    STATE(80), 2,
      sym_type,
      sym_signedness,
  [188] = 10,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_type_identifier,
    STATE(73), 1,
      sym_endianness,
    STATE(85), 1,
      sym_bitfield_type,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    ACTIONS(34), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(8), 2,
      sym_bitfield_type_field,
      aux_sym_bitfield_def_repeat1,
    STATE(80), 2,
      sym_type,
      sym_signedness,
  [224] = 10,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_type_identifier,
    STATE(73), 1,
      sym_endianness,
    STATE(85), 1,
      sym_bitfield_type,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    ACTIONS(34), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(4), 2,
      sym_bitfield_type_field,
      aux_sym_bitfield_def_repeat1,
    STATE(80), 2,
      sym_type,
      sym_signedness,
  [260] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(44), 5,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(42), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [281] = 9,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_bitfield,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(98), 2,
      sym_struct_def,
      sym_bitfield_def,
    STATE(50), 3,
      sym_using,
      sym_assignment,
      sym_type_def,
  [314] = 10,
    ACTIONS(48), 1,
      anon_sym_padding,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type_identifier,
    STATE(72), 1,
      sym_type,
    STATE(73), 1,
      sym_endianness,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    STATE(12), 2,
      sym_maybe_type_field,
      aux_sym_struct_def_repeat1,
    STATE(42), 2,
      sym_padding,
      sym_type_field,
  [349] = 10,
    ACTIONS(54), 1,
      anon_sym_padding,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type_identifier,
    STATE(72), 1,
      sym_type,
    STATE(73), 1,
      sym_endianness,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(59), 2,
      anon_sym_le,
      anon_sym_be,
    STATE(12), 2,
      sym_maybe_type_field,
      aux_sym_struct_def_repeat1,
    STATE(42), 2,
      sym_padding,
      sym_type_field,
  [384] = 10,
    ACTIONS(48), 1,
      anon_sym_padding,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_type_identifier,
    STATE(72), 1,
      sym_type,
    STATE(73), 1,
      sym_endianness,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    STATE(12), 2,
      sym_maybe_type_field,
      aux_sym_struct_def_repeat1,
    STATE(42), 2,
      sym_padding,
      sym_type_field,
  [419] = 10,
    ACTIONS(48), 1,
      anon_sym_padding,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_type_identifier,
    STATE(72), 1,
      sym_type,
    STATE(73), 1,
      sym_endianness,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    STATE(11), 2,
      sym_maybe_type_field,
      aux_sym_struct_def_repeat1,
    STATE(42), 2,
      sym_padding,
      sym_type_field,
  [454] = 9,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_using,
    ACTIONS(72), 1,
      anon_sym_struct,
    ACTIONS(75), 1,
      anon_sym_bitfield,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(98), 2,
      sym_struct_def,
      sym_bitfield_def,
    STATE(50), 3,
      sym_using,
      sym_assignment,
      sym_type_def,
  [487] = 5,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(83), 4,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      sym_identifier,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
  [512] = 5,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      sym_identifier,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
  [537] = 10,
    ACTIONS(48), 1,
      anon_sym_padding,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_type_identifier,
    STATE(72), 1,
      sym_type,
    STATE(73), 1,
      sym_endianness,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
    STATE(13), 2,
      sym_maybe_type_field,
      aux_sym_struct_def_repeat1,
    STATE(42), 2,
      sym_padding,
      sym_type_field,
  [572] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(97), 5,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [593] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(101), 5,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [614] = 3,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(105), 5,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [635] = 7,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(109), 4,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      sym_identifier,
  [661] = 4,
    STATE(48), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_identifier,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [680] = 4,
    STATE(17), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_identifier,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [699] = 4,
    STATE(19), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_identifier,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [718] = 4,
    STATE(9), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_identifier,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [737] = 4,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_LBRACK,
    ACTIONS(99), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [756] = 4,
    STATE(16), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_identifier,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [775] = 4,
    STATE(44), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_identifier,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [794] = 4,
    STATE(22), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_identifier,
    STATE(21), 5,
      sym_expr_leaf,
      sym_sub,
      sym_sum,
      sym_mul,
      sym_div,
  [813] = 4,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(46), 1,
      sym_generic,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(117), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [831] = 7,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type_identifier,
    STATE(34), 1,
      sym_type,
    STATE(73), 1,
      sym_endianness,
    STATE(90), 1,
      sym_arraylike_type,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_le,
      anon_sym_be,
  [855] = 4,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(49), 1,
      sym_generic,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(121), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [873] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    STATE(37), 2,
      sym_type_suffix,
      aux_sym_arraylike_type_repeat1,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
  [890] = 6,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [911] = 3,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(131), 5,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_le,
      anon_sym_be,
      sym_identifier,
  [926] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    STATE(40), 2,
      sym_type_suffix,
      aux_sym_arraylike_type_repeat1,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
  [943] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(115), 6,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [956] = 3,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(137), 5,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_le,
      anon_sym_be,
      sym_identifier,
  [971] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    STATE(40), 2,
      sym_type_suffix,
      aux_sym_arraylike_type_repeat1,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
  [988] = 3,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(144), 4,
      anon_sym_padding,
      anon_sym_le,
      anon_sym_be,
      sym_identifier,
  [1002] = 3,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(148), 4,
      anon_sym_padding,
      anon_sym_le,
      anon_sym_be,
      sym_identifier,
  [1016] = 3,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(152), 4,
      anon_sym_padding,
      anon_sym_le,
      anon_sym_be,
      sym_identifier,
  [1030] = 6,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1050] = 3,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(158), 4,
      anon_sym_padding,
      anon_sym_le,
      anon_sym_be,
      sym_identifier,
  [1064] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(162), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1076] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(164), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1088] = 6,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1108] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(117), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1120] = 3,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(170), 4,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      sym_identifier,
  [1134] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(172), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [1146] = 3,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(176), 4,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      sym_identifier,
  [1160] = 3,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(180), 4,
      anon_sym_using,
      anon_sym_struct,
      anon_sym_bitfield,
      sym_identifier,
  [1174] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(182), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
  [1185] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    STATE(75), 1,
      sym_type_suffix,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(184), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1200] = 4,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_type_field_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1214] = 4,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_GT,
    STATE(61), 1,
      aux_sym_generic_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1228] = 4,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_GT,
    STATE(58), 1,
      aux_sym_generic_decl_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1242] = 3,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_LT,
      sym_identifier,
  [1254] = 4,
    ACTIONS(201), 1,
      anon_sym_auto,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(78), 1,
      sym_generic_decl_param,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1268] = 4,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_GT,
    STATE(61), 1,
      aux_sym_generic_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1282] = 4,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_GT,
    STATE(58), 1,
      aux_sym_generic_decl_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1296] = 4,
    ACTIONS(201), 1,
      anon_sym_auto,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(65), 1,
      sym_generic_decl_param,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1310] = 4,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_type_field_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1324] = 4,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_GT,
    STATE(62), 1,
      aux_sym_generic_decl_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1338] = 4,
    ACTIONS(218), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_generic_decl,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1352] = 4,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_GT,
    STATE(57), 1,
      aux_sym_generic_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1366] = 4,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_type_field_repeat1,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1380] = 4,
    ACTIONS(218), 1,
      anon_sym_LT,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_generic_decl,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1394] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1403] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(224), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1412] = 3,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(64), 1,
      sym_specialised_field,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1423] = 3,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(31), 1,
      sym_type_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1434] = 3,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(71), 1,
      sym_specialised_field,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1445] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(235), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1454] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1463] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1472] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1481] = 2,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1490] = 2,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1498] = 2,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1506] = 2,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1514] = 2,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1522] = 2,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1530] = 2,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1538] = 2,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1546] = 2,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1554] = 2,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1562] = 2,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1570] = 2,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1578] = 2,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1586] = 2,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1594] = 2,
    ACTIONS(267), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1602] = 2,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1610] = 2,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1618] = 2,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1626] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1634] = 2,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1642] = 2,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1650] = 2,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1658] = 2,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1666] = 2,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1674] = 2,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1682] = 2,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1690] = 2,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1698] = 2,
    ACTIONS(293), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1706] = 2,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1714] = 2,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
  [1722] = 2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_multiline_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 224,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 349,
  [SMALL_STATE(13)] = 384,
  [SMALL_STATE(14)] = 419,
  [SMALL_STATE(15)] = 454,
  [SMALL_STATE(16)] = 487,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 537,
  [SMALL_STATE(19)] = 572,
  [SMALL_STATE(20)] = 593,
  [SMALL_STATE(21)] = 614,
  [SMALL_STATE(22)] = 635,
  [SMALL_STATE(23)] = 661,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 699,
  [SMALL_STATE(26)] = 718,
  [SMALL_STATE(27)] = 737,
  [SMALL_STATE(28)] = 756,
  [SMALL_STATE(29)] = 775,
  [SMALL_STATE(30)] = 794,
  [SMALL_STATE(31)] = 813,
  [SMALL_STATE(32)] = 831,
  [SMALL_STATE(33)] = 855,
  [SMALL_STATE(34)] = 873,
  [SMALL_STATE(35)] = 890,
  [SMALL_STATE(36)] = 911,
  [SMALL_STATE(37)] = 926,
  [SMALL_STATE(38)] = 943,
  [SMALL_STATE(39)] = 956,
  [SMALL_STATE(40)] = 971,
  [SMALL_STATE(41)] = 988,
  [SMALL_STATE(42)] = 1002,
  [SMALL_STATE(43)] = 1016,
  [SMALL_STATE(44)] = 1030,
  [SMALL_STATE(45)] = 1050,
  [SMALL_STATE(46)] = 1064,
  [SMALL_STATE(47)] = 1076,
  [SMALL_STATE(48)] = 1088,
  [SMALL_STATE(49)] = 1108,
  [SMALL_STATE(50)] = 1120,
  [SMALL_STATE(51)] = 1134,
  [SMALL_STATE(52)] = 1146,
  [SMALL_STATE(53)] = 1160,
  [SMALL_STATE(54)] = 1174,
  [SMALL_STATE(55)] = 1185,
  [SMALL_STATE(56)] = 1200,
  [SMALL_STATE(57)] = 1214,
  [SMALL_STATE(58)] = 1228,
  [SMALL_STATE(59)] = 1242,
  [SMALL_STATE(60)] = 1254,
  [SMALL_STATE(61)] = 1268,
  [SMALL_STATE(62)] = 1282,
  [SMALL_STATE(63)] = 1296,
  [SMALL_STATE(64)] = 1310,
  [SMALL_STATE(65)] = 1324,
  [SMALL_STATE(66)] = 1338,
  [SMALL_STATE(67)] = 1352,
  [SMALL_STATE(68)] = 1366,
  [SMALL_STATE(69)] = 1380,
  [SMALL_STATE(70)] = 1394,
  [SMALL_STATE(71)] = 1403,
  [SMALL_STATE(72)] = 1412,
  [SMALL_STATE(73)] = 1423,
  [SMALL_STATE(74)] = 1434,
  [SMALL_STATE(75)] = 1445,
  [SMALL_STATE(76)] = 1454,
  [SMALL_STATE(77)] = 1463,
  [SMALL_STATE(78)] = 1472,
  [SMALL_STATE(79)] = 1481,
  [SMALL_STATE(80)] = 1490,
  [SMALL_STATE(81)] = 1498,
  [SMALL_STATE(82)] = 1506,
  [SMALL_STATE(83)] = 1514,
  [SMALL_STATE(84)] = 1522,
  [SMALL_STATE(85)] = 1530,
  [SMALL_STATE(86)] = 1538,
  [SMALL_STATE(87)] = 1546,
  [SMALL_STATE(88)] = 1554,
  [SMALL_STATE(89)] = 1562,
  [SMALL_STATE(90)] = 1570,
  [SMALL_STATE(91)] = 1578,
  [SMALL_STATE(92)] = 1586,
  [SMALL_STATE(93)] = 1594,
  [SMALL_STATE(94)] = 1602,
  [SMALL_STATE(95)] = 1610,
  [SMALL_STATE(96)] = 1618,
  [SMALL_STATE(97)] = 1626,
  [SMALL_STATE(98)] = 1634,
  [SMALL_STATE(99)] = 1642,
  [SMALL_STATE(100)] = 1650,
  [SMALL_STATE(101)] = 1658,
  [SMALL_STATE(102)] = 1666,
  [SMALL_STATE(103)] = 1674,
  [SMALL_STATE(104)] = 1682,
  [SMALL_STATE(105)] = 1690,
  [SMALL_STATE(106)] = 1698,
  [SMALL_STATE(107)] = 1706,
  [SMALL_STATE(108)] = 1714,
  [SMALL_STATE(109)] = 1722,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_def_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bitfield_def_repeat1, 2), SHIFT_REPEAT(88),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bitfield_def_repeat1, 2), SHIFT_REPEAT(87),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bitfield_def_repeat1, 2), SHIFT_REPEAT(59),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_def_repeat1, 2), SHIFT_REPEAT(103),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_def_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_def_repeat1, 2), SHIFT_REPEAT(87),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_def_repeat1, 2), SHIFT_REPEAT(38),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_leaf, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_leaf, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arraylike_type, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_param, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type_field, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitfield_type_field, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arraylike_type, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type_field, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitfield_type_field, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arraylike_type_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arraylike_type_repeat1, 2), SHIFT_REPEAT(23),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_field, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_field, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maybe_type_field, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maybe_type_field, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_field, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_field, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_padding, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_def, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specialised_field, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_decl_repeat1, 2), SHIFT_REPEAT(60),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_decl_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_repeat1, 2), SHIFT_REPEAT(2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_field_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_field_repeat1, 2), SHIFT_REPEAT(74),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specialised_field, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_decl_param, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_decl_param, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_def, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_decl, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endianness, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signedness, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_def, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [275] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_def, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_decl, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hexpat(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

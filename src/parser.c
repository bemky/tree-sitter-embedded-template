#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 1
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_code_token1 = 1,
  aux_sym_content_token1 = 2,
  anon_sym_LBRACK_LBRACK = 3,
  anon_sym_RBRACK_RBRACK = 4,
  anon_sym_LBRACK_LBRACK_EQ = 5,
  anon_sym_LBRACK_LBRACK_DASH = 6,
  anon_sym_LBRACK_LBRACK_POUND = 7,
  anon_sym_LBRACK_LBRACKgraphql = 8,
  sym_template = 9,
  sym_code = 10,
  sym_content = 11,
  sym_directive = 12,
  sym_output_directive = 13,
  sym_comment_directive = 14,
  sym_graphql_directive = 15,
  aux_sym_template_repeat1 = 16,
  aux_sym_code_repeat1 = 17,
  aux_sym_content_repeat1 = 18,
  alias_sym_comment = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK_LBRACK_EQ] = "[[=",
  [anon_sym_LBRACK_LBRACK_DASH] = "[[-",
  [anon_sym_LBRACK_LBRACK_POUND] = "[[#",
  [anon_sym_LBRACK_LBRACKgraphql] = "[[graphql",
  [sym_template] = "template",
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [sym_graphql_directive] = "graphql_directive",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK_LBRACK_EQ] = anon_sym_LBRACK_LBRACK_EQ,
  [anon_sym_LBRACK_LBRACK_DASH] = anon_sym_LBRACK_LBRACK_DASH,
  [anon_sym_LBRACK_LBRACK_POUND] = anon_sym_LBRACK_LBRACK_POUND,
  [anon_sym_LBRACK_LBRACKgraphql] = anon_sym_LBRACK_LBRACKgraphql,
  [sym_template] = sym_template,
  [sym_code] = sym_code,
  [sym_content] = sym_content,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment_directive] = sym_comment_directive,
  [sym_graphql_directive] = sym_graphql_directive,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [alias_sym_comment] = alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACKgraphql] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_code, 2,
    sym_code,
    alias_sym_comment,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == ']') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == '[') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == ']') ADVANCE(3);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'q') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACKgraphql);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK_EQ] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK_DASH] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK_POUND] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACKgraphql] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(20),
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_graphql_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACK_LBRACK_EQ] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK_DASH] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK_POUND] = ACTIONS(11),
    [anon_sym_LBRACK_LBRACKgraphql] = ACTIONS(13),
  },
  [2] = {
    [sym_content] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [sym_graphql_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_content_token1] = ACTIONS(17),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(20),
    [anon_sym_LBRACK_LBRACK_EQ] = ACTIONS(23),
    [anon_sym_LBRACK_LBRACK_DASH] = ACTIONS(23),
    [anon_sym_LBRACK_LBRACK_POUND] = ACTIONS(26),
    [anon_sym_LBRACK_LBRACKgraphql] = ACTIONS(29),
  },
  [3] = {
    [sym_content] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [sym_graphql_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACK_LBRACK_EQ] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK_DASH] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK_POUND] = ACTIONS(11),
    [anon_sym_LBRACK_LBRACKgraphql] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(36), 1,
      aux_sym_content_token1,
    ACTIONS(38), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [17] = 4,
    ACTIONS(42), 1,
      aux_sym_content_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [34] = 2,
    ACTIONS(49), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      aux_sym_content_token1,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [46] = 2,
    ACTIONS(53), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      aux_sym_content_token1,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [58] = 2,
    ACTIONS(57), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      aux_sym_content_token1,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [70] = 2,
    ACTIONS(61), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      aux_sym_content_token1,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [82] = 2,
    ACTIONS(65), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      aux_sym_content_token1,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [94] = 2,
    ACTIONS(69), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      aux_sym_content_token1,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [106] = 2,
    ACTIONS(73), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      aux_sym_content_token1,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [118] = 2,
    ACTIONS(77), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      aux_sym_content_token1,
      anon_sym_LBRACK_LBRACK_EQ,
      anon_sym_LBRACK_LBRACK_DASH,
      anon_sym_LBRACK_LBRACK_POUND,
      anon_sym_LBRACK_LBRACKgraphql,
  [130] = 4,
    ACTIONS(79), 1,
      aux_sym_code_token1,
    ACTIONS(81), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(18), 1,
      aux_sym_code_repeat1,
    STATE(24), 1,
      sym_code,
  [143] = 4,
    ACTIONS(79), 1,
      aux_sym_code_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(18), 1,
      aux_sym_code_repeat1,
    STATE(21), 1,
      sym_code,
  [156] = 4,
    ACTIONS(79), 1,
      aux_sym_code_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(18), 1,
      aux_sym_code_repeat1,
    STATE(23), 1,
      sym_code,
  [169] = 4,
    ACTIONS(79), 1,
      aux_sym_code_token1,
    ACTIONS(87), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(18), 1,
      aux_sym_code_repeat1,
    STATE(22), 1,
      sym_code,
  [182] = 3,
    ACTIONS(89), 1,
      aux_sym_code_token1,
    ACTIONS(91), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(19), 1,
      aux_sym_code_repeat1,
  [192] = 3,
    ACTIONS(93), 1,
      aux_sym_code_token1,
    ACTIONS(96), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(19), 1,
      aux_sym_code_repeat1,
  [202] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [206] = 1,
    ACTIONS(100), 1,
      anon_sym_RBRACK_RBRACK,
  [210] = 1,
    ACTIONS(102), 1,
      anon_sym_RBRACK_RBRACK,
  [214] = 1,
    ACTIONS(104), 1,
      anon_sym_RBRACK_RBRACK,
  [218] = 1,
    ACTIONS(106), 1,
      anon_sym_RBRACK_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 46,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 94,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 118,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 143,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 169,
  [SMALL_STATE(18)] = 182,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 206,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 214,
  [SMALL_STATE(24)] = 218,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_directive, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_directive, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_directive, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_directive, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_embedded_template(void) {
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

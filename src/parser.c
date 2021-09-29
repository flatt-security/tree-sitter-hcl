#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 682
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym_numeric_lit_token1 = 7,
  aux_sym_numeric_lit_token2 = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_null_lit = 11,
  anon_sym_COMMA = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_COLON = 15,
  anon_sym_DOT = 16,
  aux_sym_legacy_index_token1 = 17,
  anon_sym_DOT_STAR = 18,
  anon_sym_LBRACK_STAR_RBRACK = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_for = 21,
  anon_sym_in = 22,
  anon_sym_if = 23,
  sym_ellipsis = 24,
  anon_sym_QMARK = 25,
  anon_sym_DASH = 26,
  anon_sym_BANG = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_PERCENT = 30,
  anon_sym_PLUS = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_EQ_EQ = 36,
  anon_sym_BANG_EQ = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_LT_LT = 40,
  anon_sym_LT_LT_DASH = 41,
  sym_strip_marker = 42,
  anon_sym_endfor = 43,
  anon_sym_else = 44,
  anon_sym_endif = 45,
  sym_comment = 46,
  sym__whitespace = 47,
  sym_quoted_template_start = 48,
  sym_quoted_template_end = 49,
  sym__template_literal_chunk = 50,
  sym_template_interpolation_start = 51,
  sym_template_interpolation_end = 52,
  sym_template_directive_start = 53,
  sym_template_directive_end = 54,
  sym_heredoc_identifier = 55,
  sym_config_file = 56,
  sym_body = 57,
  sym_attribute = 58,
  sym_block = 59,
  sym_block_start = 60,
  sym_block_end = 61,
  sym_expression = 62,
  sym__expr_term = 63,
  sym_index_expr_term = 64,
  sym_attr_expr_term = 65,
  sym_splat_expr_term = 66,
  sym_literal_value = 67,
  sym_numeric_lit = 68,
  sym_bool_lit = 69,
  sym_string_lit = 70,
  sym_collection_value = 71,
  sym__comma = 72,
  sym_tuple = 73,
  sym_tuple_start = 74,
  sym_tuple_end = 75,
  sym__tuple_elems = 76,
  sym_object = 77,
  sym_object_start = 78,
  sym_object_end = 79,
  sym__object_elems = 80,
  sym_object_elem = 81,
  sym_index = 82,
  sym_new_index = 83,
  sym_legacy_index = 84,
  sym_get_attr = 85,
  sym_splat = 86,
  sym_attr_splat = 87,
  sym_full_splat = 88,
  sym_for_expr = 89,
  sym_for_tuple_expr = 90,
  sym_for_object_expr = 91,
  sym_for_intro = 92,
  sym_for_cond = 93,
  sym_variable_expr = 94,
  sym_function_call = 95,
  sym__function_call_start = 96,
  sym__function_call_end = 97,
  sym_function_arguments = 98,
  sym_conditional = 99,
  sym_operation = 100,
  sym_unary_operation = 101,
  sym_binary_operation = 102,
  sym_template_expr = 103,
  sym__template = 104,
  sym_quoted_template = 105,
  sym_heredoc_template = 106,
  sym_heredoc_start = 107,
  sym_template_literal = 108,
  sym_template_interpolation = 109,
  sym_template_directive = 110,
  sym_template_for = 111,
  sym_template_for_start = 112,
  sym_template_for_end = 113,
  sym_template_if = 114,
  sym_template_if_branch = 115,
  sym_template_if_intro = 116,
  sym_template_else_branch = 117,
  sym_template_else_intro = 118,
  sym_template_if_end = 119,
  aux_sym_body_repeat1 = 120,
  aux_sym_block_repeat1 = 121,
  aux_sym__tuple_elems_repeat1 = 122,
  aux_sym__object_elems_repeat1 = 123,
  aux_sym_attr_splat_repeat1 = 124,
  aux_sym__template_repeat1 = 125,
  aux_sym_template_literal_repeat1 = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_numeric_lit_token1] = "numeric_lit_token1",
  [aux_sym_numeric_lit_token2] = "numeric_lit_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_lit] = "null_lit",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [aux_sym_legacy_index_token1] = "legacy_index_token1",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [sym_ellipsis] = "ellipsis",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym_strip_marker] = "strip_marker",
  [anon_sym_endfor] = "endfor",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_quoted_template_start] = "quoted_template_start",
  [sym_quoted_template_end] = "quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym_template_interpolation_start] = "template_interpolation_start",
  [sym_template_interpolation_end] = "template_interpolation_end",
  [sym_template_directive_start] = "template_directive_start",
  [sym_template_directive_end] = "template_directive_end",
  [sym_heredoc_identifier] = "heredoc_identifier",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_expression] = "expression",
  [sym__expr_term] = "_expr_term",
  [sym_index_expr_term] = "index_expr_term",
  [sym_attr_expr_term] = "attr_expr_term",
  [sym_splat_expr_term] = "splat_expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym__comma] = "_comma",
  [sym_tuple] = "tuple",
  [sym_tuple_start] = "tuple_start",
  [sym_tuple_end] = "tuple_end",
  [sym__tuple_elems] = "_tuple_elems",
  [sym_object] = "object",
  [sym_object_start] = "object_start",
  [sym_object_end] = "object_end",
  [sym__object_elems] = "_object_elems",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
  [sym_new_index] = "new_index",
  [sym_legacy_index] = "legacy_index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym__function_call_start] = "_function_call_start",
  [sym__function_call_end] = "_function_call_end",
  [sym_function_arguments] = "function_arguments",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym__template] = "_template",
  [sym_quoted_template] = "quoted_template",
  [sym_heredoc_template] = "heredoc_template",
  [sym_heredoc_start] = "heredoc_start",
  [sym_template_literal] = "template_literal",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_directive] = "template_directive",
  [sym_template_for] = "template_for",
  [sym_template_for_start] = "template_for_start",
  [sym_template_for_end] = "template_for_end",
  [sym_template_if] = "template_if",
  [sym_template_if_branch] = "template_if_branch",
  [sym_template_if_intro] = "template_if_intro",
  [sym_template_else_branch] = "template_else_branch",
  [sym_template_else_intro] = "template_else_intro",
  [sym_template_if_end] = "template_if_end",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__tuple_elems_repeat1] = "_tuple_elems_repeat1",
  [aux_sym__object_elems_repeat1] = "_object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym__template_repeat1] = "_template_repeat1",
  [aux_sym_template_literal_repeat1] = "template_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_numeric_lit_token1] = aux_sym_numeric_lit_token1,
  [aux_sym_numeric_lit_token2] = aux_sym_numeric_lit_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_lit] = sym_null_lit,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_legacy_index_token1] = aux_sym_legacy_index_token1,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [sym_ellipsis] = sym_ellipsis,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [sym_strip_marker] = sym_strip_marker,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_quoted_template_start] = sym_quoted_template_start,
  [sym_quoted_template_end] = sym_quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym_template_interpolation_start] = sym_template_interpolation_start,
  [sym_template_interpolation_end] = sym_template_interpolation_end,
  [sym_template_directive_start] = sym_template_directive_start,
  [sym_template_directive_end] = sym_template_directive_end,
  [sym_heredoc_identifier] = sym_heredoc_identifier,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_expression] = sym_expression,
  [sym__expr_term] = sym__expr_term,
  [sym_index_expr_term] = sym_index_expr_term,
  [sym_attr_expr_term] = sym_attr_expr_term,
  [sym_splat_expr_term] = sym_splat_expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym__comma] = sym__comma,
  [sym_tuple] = sym_tuple,
  [sym_tuple_start] = sym_tuple_start,
  [sym_tuple_end] = sym_tuple_end,
  [sym__tuple_elems] = sym__tuple_elems,
  [sym_object] = sym_object,
  [sym_object_start] = sym_object_start,
  [sym_object_end] = sym_object_end,
  [sym__object_elems] = sym__object_elems,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
  [sym_new_index] = sym_new_index,
  [sym_legacy_index] = sym_legacy_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym__function_call_start] = sym__function_call_start,
  [sym__function_call_end] = sym__function_call_end,
  [sym_function_arguments] = sym_function_arguments,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym__template] = sym__template,
  [sym_quoted_template] = sym_quoted_template,
  [sym_heredoc_template] = sym_heredoc_template,
  [sym_heredoc_start] = sym_heredoc_start,
  [sym_template_literal] = sym_template_literal,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_directive] = sym_template_directive,
  [sym_template_for] = sym_template_for,
  [sym_template_for_start] = sym_template_for_start,
  [sym_template_for_end] = sym_template_for_end,
  [sym_template_if] = sym_template_if,
  [sym_template_if_branch] = sym_template_if_branch,
  [sym_template_if_intro] = sym_template_if_intro,
  [sym_template_else_branch] = sym_template_else_branch,
  [sym_template_else_intro] = sym_template_else_intro,
  [sym_template_if_end] = sym_template_if_end,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__tuple_elems_repeat1] = aux_sym__tuple_elems_repeat1,
  [aux_sym__object_elems_repeat1] = aux_sym__object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym__template_repeat1] = aux_sym__template_repeat1,
  [aux_sym_template_literal_repeat1] = aux_sym_template_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_legacy_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_strip_marker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_template_start] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_end] = {
    .visible = true,
    .named = true,
  },
  [sym__template_literal_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_template_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_term] = {
    .visible = false,
    .named = true,
  },
  [sym_index_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_splat_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_end] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_start] = {
    .visible = true,
    .named = true,
  },
  [sym_object_end] = {
    .visible = true,
    .named = true,
  },
  [sym__object_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_new_index] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_full_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tuple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_object_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_call_start] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call_end] = {
    .visible = false,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__template] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_template_else_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_template_else_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_val = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_val, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 42891
    ? (c < 3804
      ? (c < 2616
        ? (c < 1791
          ? (c < 895
            ? (c < 192
              ? (c < 'o'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c >= 'g' && c <= 'm')))
                : (c <= 's' || (c < 181
                  ? (c < 170
                    ? (c >= 'u' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))))
            : (c <= 895 || (c < 1376
              ? (c < 931
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2084
              ? (c < 1994
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2230
                ? (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2208 && c <= 2228)))
                : (c <= 2247 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))))))
        : (c <= 2617 || (c < 3133
          ? (c < 2877
            ? (c < 2749
              ? (c < 2703
                ? (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2749 || (c < 2831
                ? (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2877 || (c < 2974
              ? (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))
              : (c <= 2975 || (c < 3077
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))))))
          : (c <= 3133 || (c < 3450
            ? (c < 3294
              ? (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))
              : (c <= 3294 || (c < 3346
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))))))
            : (c <= 3455 || (c < 3716
              ? (c < 3520
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3762
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))))))))))
      : (c <= 3807 || (c < 7680
        ? (c < 5792
          ? (c < 4688
            ? (c < 4197
              ? (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))
              : (c <= 4198 || (c < 4295
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))))
            : (c <= 4694 || (c < 4808
              ? (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))))))
          : (c <= 5866 || (c < 6656
            ? (c < 6108
              ? (c < 5952
                ? (c < 5902
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))
              : (c <= 6108 || (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))))
            : (c <= 6678 || (c < 7258
              ? (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))
              : (c <= 7293 || (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))))))))
        : (c <= 7957 || (c < 11506
          ? (c < 8319
            ? (c < 8118
              ? (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))
              : (c <= 8124 || (c < 8150
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8305))))))
            : (c <= 8319 || (c < 8490
              ? (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))
              : (c <= 8505 || (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))
                : (c <= 11310 || (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))))))
          : (c <= 11507 || (c < 12443
            ? (c < 11704
              ? (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))
              : (c <= 11710 || (c < 12293
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 12295 || (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))))
            : (c <= 12447 || (c < 42192
              ? (c < 12704
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 70461
      ? (c < 66304
        ? (c < 43888
          ? (c < 43584
            ? (c < 43261
              ? (c < 43020
                ? (c < 43011
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))))
              : (c <= 43262 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))
                : (c <= 43471 || (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))))))
            : (c <= 43586 || (c < 43739
              ? (c < 43697
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))))
          : (c <= 44002 || (c < 65136
            ? (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))))
            : (c <= 65140 || (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))))))
        : (c <= 66335 || (c < 68448
          ? (c < 67647
            ? (c < 66816
              ? (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))
            : (c <= 67669 || (c < 68112
              ? (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))))
              : (c <= 68115 || (c < 68288
                ? (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))
                : (c <= 68295 || (c < 68352
                  ? (c >= 68297 && c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))))
          : (c <= 68466 || (c < 70006
            ? (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69840
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69763 && c <= 69807)))
                : (c <= 69864 || (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))))))
            : (c <= 70006 || (c < 70287
              ? (c < 70144
                ? (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))
              : (c <= 70301 || (c < 70419
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))
                : (c <= 70440 || (c < 70450
                  ? (c >= 70442 && c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))))))))))
      : (c <= 70461 || (c < 113808
        ? (c < 72818
          ? (c < 71948
            ? (c < 71128
              ? (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71086)))))
              : (c <= 71131 || (c < 71424
                ? (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))
                : (c <= 71450 || (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))))))
            : (c <= 71955 || (c < 72203
              ? (c < 72096
                ? (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))
                : (c <= 72103 || (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))))
              : (c <= 72242 || (c < 72384
                ? (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))
                : (c <= 72440 || (c < 72714
                  ? (c >= 72704 && c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 42946
    ? (c < 3904
      ? (c < 2654
        ? (c < 1810
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))))))))
          : (c <= 1839 || (c < 2447
            ? (c < 2112
              ? (c < 2042
                ? (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2365
                ? (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))))
            : (c <= 2448 || (c < 2556
              ? (c < 2493
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))))
              : (c <= 2556 || (c < 2610
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3168
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2984
              ? (c < 2962
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3090
                ? (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))))))
          : (c <= 3169 || (c < 3482
            ? (c < 3313
              ? (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3294
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3314 || (c < 3406
                ? (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))))
            : (c <= 3505 || (c < 3724
              ? (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))
              : (c <= 3747 || (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : (c <= 3807 || c == 3840))))))))))))
      : (c <= 3911 || (c < 7960
        ? (c < 5870
          ? (c < 4698
            ? (c < 4213
              ? (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4304
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))))))
            : (c <= 4701 || (c < 4882
              ? (c < 4792
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))
              : (c <= 4885 || (c < 5121
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))))))
          : (c <= 5880 || (c < 6688
            ? (c < 6176
              ? (c < 5984
                ? (c < 5920
                  ? (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))
              : (c <= 6264 || (c < 6480
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))))
            : (c <= 6740 || (c < 7296
              ? (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6987 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))
              : (c <= 7304 || (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11520
          ? (c < 8336
            ? (c < 8126
              ? (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))
              : (c <= 8126 || (c < 8160
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))))
            : (c <= 8348 || (c < 8508
              ? (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))
              : (c <= 8511 || (c < 11312
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11310)))
                : (c <= 11358 || (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))))))))
          : (c <= 11557 || (c < 12449
            ? (c < 11712
              ? (c < 11648
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))
              : (c <= 11718 || (c < 12321
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c >= 12443 && c <= 12447)))))))
            : (c <= 12538 || (c < 42240
              ? (c < 12784
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 40960
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 40956)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42656
                ? (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42735 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))))))))))))))
    : (c <= 42954 || (c < 70461
      ? (c < 66304
        ? (c < 43888
          ? (c < 43588
            ? (c < 43274
              ? (c < 43072
                ? (c < 43015
                  ? (c < 43011
                    ? (c >= 42997 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43123 || (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))))
              : (c <= 43301 || (c < 43488
                ? (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))
                : (c <= 43492 || (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))))))
            : (c <= 43595 || (c < 43744
              ? (c < 43701
                ? (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))
              : (c <= 43754 || (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))))
          : (c <= 44002 || (c < 65136
            ? (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))))
            : (c <= 65140 || (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))))))
        : (c <= 66335 || (c < 68448
          ? (c < 67647
            ? (c < 66816
              ? (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))
            : (c <= 67669 || (c < 68112
              ? (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))))
              : (c <= 68115 || (c < 68288
                ? (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))
                : (c <= 68295 || (c < 68352
                  ? (c >= 68297 && c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))))
          : (c <= 68466 || (c < 70006
            ? (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69840
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69763 && c <= 69807)))
                : (c <= 69864 || (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))))))
            : (c <= 70006 || (c < 70287
              ? (c < 70144
                ? (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))
              : (c <= 70301 || (c < 70419
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))
                : (c <= 70440 || (c < 70450
                  ? (c >= 70442 && c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))))))))))
      : (c <= 70461 || (c < 113808
        ? (c < 72818
          ? (c < 71948
            ? (c < 71128
              ? (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71086)))))
              : (c <= 71131 || (c < 71424
                ? (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))
                : (c <= 71450 || (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))))))
            : (c <= 71955 || (c < 72203
              ? (c < 72096
                ? (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))
                : (c <= 72103 || (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))))
              : (c <= 72242 || (c < 72384
                ? (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))
                : (c <= 72440 || (c < 72714
                  ? (c >= 72704 && c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'p'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'n')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'f'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'd')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'm'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'k')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 's'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'q')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 't'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'r')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'v'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 't')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2703
        ? (c < 1869
          ? (c < 910
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))))
          : (c <= 1969 || (c < 2524
            ? (c < 2417
              ? (c < 2144
                ? (c < 2045
                  ? (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2045 || (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)))
                : (c <= 2154 || (c < 2259
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2273 || (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))))
              : (c <= 2617 || (c < 2649
                ? (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))
                : (c <= 2652 || (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3114
          ? (c < 2908
            ? (c < 2817
              ? (c < 2759
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))))
              : (c <= 2819 || (c < 2869
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2958
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))
              : (c <= 2986 || (c < 3031
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3342
            ? (c < 3242
              ? (c < 3168
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3133 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))
                : (c <= 3171 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3294
                ? (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))
            : (c <= 3344 || (c < 3507
              ? (c < 3430
                ? (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))
                : (c <= 3439 || (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2703
        ? (c < 1869
          ? (c < 910
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))))
          : (c <= 1969 || (c < 2524
            ? (c < 2417
              ? (c < 2144
                ? (c < 2045
                  ? (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2045 || (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)))
                : (c <= 2154 || (c < 2259
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2273 || (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))))
              : (c <= 2617 || (c < 2649
                ? (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))
                : (c <= 2652 || (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3114
          ? (c < 2908
            ? (c < 2817
              ? (c < 2759
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))))
              : (c <= 2819 || (c < 2869
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2958
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))
              : (c <= 2986 || (c < 3031
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3342
            ? (c < 3242
              ? (c < 3168
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3133 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))
                : (c <= 3171 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3294
                ? (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))
            : (c <= 3344 || (c < 3507
              ? (c < 3430
                ? (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))
                : (c <= 3439 || (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(58);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(58);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(81);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == '|') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 39:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == '[') ADVANCE(74);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(58);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(58);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(58);
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(58);
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(58);
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(58);
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(58);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(58);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(58);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(58);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(58);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(58);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(58);
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(58);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(58);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(58);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(58);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 2},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 1, .external_lex_state = 2},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 1, .external_lex_state = 2},
  [65] = {.lex_state = 1, .external_lex_state = 2},
  [66] = {.lex_state = 1, .external_lex_state = 2},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 1, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 1, .external_lex_state = 2},
  [81] = {.lex_state = 1, .external_lex_state = 2},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 1, .external_lex_state = 2},
  [91] = {.lex_state = 1, .external_lex_state = 2},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 1, .external_lex_state = 2},
  [96] = {.lex_state = 1, .external_lex_state = 2},
  [97] = {.lex_state = 1, .external_lex_state = 2},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 1, .external_lex_state = 2},
  [101] = {.lex_state = 1, .external_lex_state = 2},
  [102] = {.lex_state = 1, .external_lex_state = 2},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 1, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 1, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 1, .external_lex_state = 2},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 1, .external_lex_state = 2},
  [120] = {.lex_state = 1, .external_lex_state = 2},
  [121] = {.lex_state = 1, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 1, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 39},
  [130] = {.lex_state = 39},
  [131] = {.lex_state = 39},
  [132] = {.lex_state = 39},
  [133] = {.lex_state = 39},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 1, .external_lex_state = 2},
  [138] = {.lex_state = 1, .external_lex_state = 2},
  [139] = {.lex_state = 1, .external_lex_state = 2},
  [140] = {.lex_state = 39},
  [141] = {.lex_state = 39},
  [142] = {.lex_state = 1, .external_lex_state = 2},
  [143] = {.lex_state = 1, .external_lex_state = 2},
  [144] = {.lex_state = 1, .external_lex_state = 2},
  [145] = {.lex_state = 1, .external_lex_state = 2},
  [146] = {.lex_state = 1, .external_lex_state = 2},
  [147] = {.lex_state = 1, .external_lex_state = 2},
  [148] = {.lex_state = 1, .external_lex_state = 2},
  [149] = {.lex_state = 1, .external_lex_state = 2},
  [150] = {.lex_state = 1, .external_lex_state = 2},
  [151] = {.lex_state = 1, .external_lex_state = 2},
  [152] = {.lex_state = 1, .external_lex_state = 2},
  [153] = {.lex_state = 1, .external_lex_state = 2},
  [154] = {.lex_state = 1, .external_lex_state = 2},
  [155] = {.lex_state = 1, .external_lex_state = 2},
  [156] = {.lex_state = 1, .external_lex_state = 2},
  [157] = {.lex_state = 1, .external_lex_state = 2},
  [158] = {.lex_state = 1, .external_lex_state = 2},
  [159] = {.lex_state = 1, .external_lex_state = 2},
  [160] = {.lex_state = 1, .external_lex_state = 2},
  [161] = {.lex_state = 1, .external_lex_state = 2},
  [162] = {.lex_state = 39},
  [163] = {.lex_state = 1, .external_lex_state = 2},
  [164] = {.lex_state = 1, .external_lex_state = 2},
  [165] = {.lex_state = 1, .external_lex_state = 2},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 1, .external_lex_state = 2},
  [168] = {.lex_state = 1, .external_lex_state = 2},
  [169] = {.lex_state = 39},
  [170] = {.lex_state = 1, .external_lex_state = 2},
  [171] = {.lex_state = 1, .external_lex_state = 2},
  [172] = {.lex_state = 1, .external_lex_state = 2},
  [173] = {.lex_state = 1, .external_lex_state = 2},
  [174] = {.lex_state = 1, .external_lex_state = 2},
  [175] = {.lex_state = 1, .external_lex_state = 2},
  [176] = {.lex_state = 1, .external_lex_state = 2},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 40},
  [180] = {.lex_state = 40},
  [181] = {.lex_state = 40},
  [182] = {.lex_state = 39},
  [183] = {.lex_state = 40},
  [184] = {.lex_state = 40},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 39},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 40},
  [189] = {.lex_state = 39},
  [190] = {.lex_state = 39},
  [191] = {.lex_state = 39},
  [192] = {.lex_state = 39},
  [193] = {.lex_state = 39},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 40, .external_lex_state = 4},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 39},
  [198] = {.lex_state = 39},
  [199] = {.lex_state = 39},
  [200] = {.lex_state = 40, .external_lex_state = 4},
  [201] = {.lex_state = 39},
  [202] = {.lex_state = 39},
  [203] = {.lex_state = 39},
  [204] = {.lex_state = 40, .external_lex_state = 5},
  [205] = {.lex_state = 40, .external_lex_state = 5},
  [206] = {.lex_state = 40, .external_lex_state = 5},
  [207] = {.lex_state = 40, .external_lex_state = 5},
  [208] = {.lex_state = 40, .external_lex_state = 5},
  [209] = {.lex_state = 40, .external_lex_state = 5},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 39},
  [212] = {.lex_state = 39},
  [213] = {.lex_state = 39},
  [214] = {.lex_state = 39},
  [215] = {.lex_state = 39},
  [216] = {.lex_state = 40, .external_lex_state = 4},
  [217] = {.lex_state = 40, .external_lex_state = 4},
  [218] = {.lex_state = 40, .external_lex_state = 4},
  [219] = {.lex_state = 40, .external_lex_state = 4},
  [220] = {.lex_state = 40, .external_lex_state = 4},
  [221] = {.lex_state = 40, .external_lex_state = 4},
  [222] = {.lex_state = 39},
  [223] = {.lex_state = 39},
  [224] = {.lex_state = 40, .external_lex_state = 5},
  [225] = {.lex_state = 39},
  [226] = {.lex_state = 39},
  [227] = {.lex_state = 40, .external_lex_state = 5},
  [228] = {.lex_state = 39},
  [229] = {.lex_state = 39},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 39},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 39},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 40},
  [237] = {.lex_state = 40},
  [238] = {.lex_state = 40},
  [239] = {.lex_state = 40},
  [240] = {.lex_state = 40},
  [241] = {.lex_state = 40, .external_lex_state = 5},
  [242] = {.lex_state = 40, .external_lex_state = 4},
  [243] = {.lex_state = 40, .external_lex_state = 4},
  [244] = {.lex_state = 40, .external_lex_state = 4},
  [245] = {.lex_state = 40, .external_lex_state = 4},
  [246] = {.lex_state = 40, .external_lex_state = 5},
  [247] = {.lex_state = 40, .external_lex_state = 5},
  [248] = {.lex_state = 40, .external_lex_state = 4},
  [249] = {.lex_state = 40, .external_lex_state = 5},
  [250] = {.lex_state = 40, .external_lex_state = 5},
  [251] = {.lex_state = 40},
  [252] = {.lex_state = 40, .external_lex_state = 5},
  [253] = {.lex_state = 40, .external_lex_state = 4},
  [254] = {.lex_state = 40},
  [255] = {.lex_state = 40},
  [256] = {.lex_state = 40},
  [257] = {.lex_state = 40},
  [258] = {.lex_state = 40},
  [259] = {.lex_state = 40},
  [260] = {.lex_state = 40},
  [261] = {.lex_state = 40},
  [262] = {.lex_state = 40},
  [263] = {.lex_state = 40},
  [264] = {.lex_state = 40},
  [265] = {.lex_state = 40},
  [266] = {.lex_state = 40},
  [267] = {.lex_state = 40},
  [268] = {.lex_state = 40},
  [269] = {.lex_state = 40},
  [270] = {.lex_state = 40},
  [271] = {.lex_state = 40},
  [272] = {.lex_state = 40},
  [273] = {.lex_state = 40},
  [274] = {.lex_state = 40},
  [275] = {.lex_state = 40},
  [276] = {.lex_state = 40},
  [277] = {.lex_state = 40},
  [278] = {.lex_state = 40},
  [279] = {.lex_state = 40},
  [280] = {.lex_state = 40},
  [281] = {.lex_state = 40},
  [282] = {.lex_state = 40},
  [283] = {.lex_state = 40},
  [284] = {.lex_state = 40},
  [285] = {.lex_state = 40},
  [286] = {.lex_state = 40},
  [287] = {.lex_state = 40},
  [288] = {.lex_state = 40, .external_lex_state = 4},
  [289] = {.lex_state = 40, .external_lex_state = 4},
  [290] = {.lex_state = 40, .external_lex_state = 5},
  [291] = {.lex_state = 40, .external_lex_state = 5},
  [292] = {.lex_state = 40, .external_lex_state = 5},
  [293] = {.lex_state = 40, .external_lex_state = 5},
  [294] = {.lex_state = 40, .external_lex_state = 5},
  [295] = {.lex_state = 40, .external_lex_state = 5},
  [296] = {.lex_state = 40, .external_lex_state = 5},
  [297] = {.lex_state = 40, .external_lex_state = 5},
  [298] = {.lex_state = 40, .external_lex_state = 4},
  [299] = {.lex_state = 40, .external_lex_state = 4},
  [300] = {.lex_state = 40, .external_lex_state = 4},
  [301] = {.lex_state = 40, .external_lex_state = 5},
  [302] = {.lex_state = 40, .external_lex_state = 5},
  [303] = {.lex_state = 40, .external_lex_state = 4},
  [304] = {.lex_state = 40, .external_lex_state = 5},
  [305] = {.lex_state = 40, .external_lex_state = 4},
  [306] = {.lex_state = 40, .external_lex_state = 4},
  [307] = {.lex_state = 40, .external_lex_state = 4},
  [308] = {.lex_state = 40, .external_lex_state = 4},
  [309] = {.lex_state = 40, .external_lex_state = 5},
  [310] = {.lex_state = 40, .external_lex_state = 5},
  [311] = {.lex_state = 40, .external_lex_state = 5},
  [312] = {.lex_state = 40, .external_lex_state = 4},
  [313] = {.lex_state = 40, .external_lex_state = 5},
  [314] = {.lex_state = 40, .external_lex_state = 5},
  [315] = {.lex_state = 40, .external_lex_state = 4},
  [316] = {.lex_state = 40, .external_lex_state = 4},
  [317] = {.lex_state = 40, .external_lex_state = 5},
  [318] = {.lex_state = 40, .external_lex_state = 4},
  [319] = {.lex_state = 40, .external_lex_state = 5},
  [320] = {.lex_state = 40, .external_lex_state = 5},
  [321] = {.lex_state = 40, .external_lex_state = 4},
  [322] = {.lex_state = 40, .external_lex_state = 4},
  [323] = {.lex_state = 40, .external_lex_state = 4},
  [324] = {.lex_state = 40, .external_lex_state = 4},
  [325] = {.lex_state = 40, .external_lex_state = 5},
  [326] = {.lex_state = 40, .external_lex_state = 4},
  [327] = {.lex_state = 40, .external_lex_state = 5},
  [328] = {.lex_state = 40, .external_lex_state = 5},
  [329] = {.lex_state = 40, .external_lex_state = 4},
  [330] = {.lex_state = 40, .external_lex_state = 5},
  [331] = {.lex_state = 40, .external_lex_state = 5},
  [332] = {.lex_state = 40, .external_lex_state = 5},
  [333] = {.lex_state = 40, .external_lex_state = 4},
  [334] = {.lex_state = 40, .external_lex_state = 4},
  [335] = {.lex_state = 40, .external_lex_state = 5},
  [336] = {.lex_state = 40, .external_lex_state = 5},
  [337] = {.lex_state = 40, .external_lex_state = 5},
  [338] = {.lex_state = 40, .external_lex_state = 4},
  [339] = {.lex_state = 40, .external_lex_state = 5},
  [340] = {.lex_state = 40, .external_lex_state = 4},
  [341] = {.lex_state = 40, .external_lex_state = 5},
  [342] = {.lex_state = 40, .external_lex_state = 5},
  [343] = {.lex_state = 40, .external_lex_state = 5},
  [344] = {.lex_state = 40, .external_lex_state = 5},
  [345] = {.lex_state = 40, .external_lex_state = 4},
  [346] = {.lex_state = 40, .external_lex_state = 5},
  [347] = {.lex_state = 40, .external_lex_state = 4},
  [348] = {.lex_state = 40, .external_lex_state = 4},
  [349] = {.lex_state = 40, .external_lex_state = 4},
  [350] = {.lex_state = 40, .external_lex_state = 4},
  [351] = {.lex_state = 40, .external_lex_state = 4},
  [352] = {.lex_state = 40, .external_lex_state = 4},
  [353] = {.lex_state = 40, .external_lex_state = 4},
  [354] = {.lex_state = 40, .external_lex_state = 4},
  [355] = {.lex_state = 40, .external_lex_state = 4},
  [356] = {.lex_state = 1, .external_lex_state = 2},
  [357] = {.lex_state = 1, .external_lex_state = 2},
  [358] = {.lex_state = 1, .external_lex_state = 2},
  [359] = {.lex_state = 1, .external_lex_state = 2},
  [360] = {.lex_state = 2, .external_lex_state = 2},
  [361] = {.lex_state = 2, .external_lex_state = 2},
  [362] = {.lex_state = 0, .external_lex_state = 6},
  [363] = {.lex_state = 0, .external_lex_state = 7},
  [364] = {.lex_state = 0, .external_lex_state = 6},
  [365] = {.lex_state = 1, .external_lex_state = 2},
  [366] = {.lex_state = 0, .external_lex_state = 8},
  [367] = {.lex_state = 0, .external_lex_state = 7},
  [368] = {.lex_state = 0, .external_lex_state = 6},
  [369] = {.lex_state = 0, .external_lex_state = 7},
  [370] = {.lex_state = 0, .external_lex_state = 7},
  [371] = {.lex_state = 0, .external_lex_state = 6},
  [372] = {.lex_state = 0, .external_lex_state = 6},
  [373] = {.lex_state = 0, .external_lex_state = 8},
  [374] = {.lex_state = 0, .external_lex_state = 8},
  [375] = {.lex_state = 0, .external_lex_state = 7},
  [376] = {.lex_state = 0, .external_lex_state = 7},
  [377] = {.lex_state = 0, .external_lex_state = 6},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 0, .external_lex_state = 7},
  [380] = {.lex_state = 1, .external_lex_state = 2},
  [381] = {.lex_state = 0, .external_lex_state = 8},
  [382] = {.lex_state = 1, .external_lex_state = 2},
  [383] = {.lex_state = 0, .external_lex_state = 8},
  [384] = {.lex_state = 0, .external_lex_state = 8},
  [385] = {.lex_state = 0, .external_lex_state = 8},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 40},
  [389] = {.lex_state = 40, .external_lex_state = 2},
  [390] = {.lex_state = 40},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 40},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 40, .external_lex_state = 2},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 40},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0, .external_lex_state = 6},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0, .external_lex_state = 7},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 40, .external_lex_state = 2},
  [409] = {.lex_state = 0, .external_lex_state = 7},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0, .external_lex_state = 6},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0, .external_lex_state = 9},
  [416] = {.lex_state = 0, .external_lex_state = 6},
  [417] = {.lex_state = 0, .external_lex_state = 8},
  [418] = {.lex_state = 0, .external_lex_state = 6},
  [419] = {.lex_state = 0, .external_lex_state = 7},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0, .external_lex_state = 7},
  [422] = {.lex_state = 0, .external_lex_state = 8},
  [423] = {.lex_state = 0, .external_lex_state = 7},
  [424] = {.lex_state = 0, .external_lex_state = 6},
  [425] = {.lex_state = 0, .external_lex_state = 6},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0, .external_lex_state = 7},
  [428] = {.lex_state = 0, .external_lex_state = 6},
  [429] = {.lex_state = 0, .external_lex_state = 6},
  [430] = {.lex_state = 0, .external_lex_state = 7},
  [431] = {.lex_state = 0, .external_lex_state = 7},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0, .external_lex_state = 6},
  [436] = {.lex_state = 40},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 0, .external_lex_state = 6},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 40},
  [441] = {.lex_state = 0, .external_lex_state = 6},
  [442] = {.lex_state = 0, .external_lex_state = 7},
  [443] = {.lex_state = 0, .external_lex_state = 7},
  [444] = {.lex_state = 0, .external_lex_state = 7},
  [445] = {.lex_state = 0, .external_lex_state = 6},
  [446] = {.lex_state = 0, .external_lex_state = 6},
  [447] = {.lex_state = 0, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 9},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0, .external_lex_state = 7},
  [451] = {.lex_state = 0, .external_lex_state = 7},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0, .external_lex_state = 7},
  [454] = {.lex_state = 0, .external_lex_state = 7},
  [455] = {.lex_state = 0, .external_lex_state = 7},
  [456] = {.lex_state = 0, .external_lex_state = 7},
  [457] = {.lex_state = 0, .external_lex_state = 6},
  [458] = {.lex_state = 0, .external_lex_state = 6},
  [459] = {.lex_state = 0, .external_lex_state = 6},
  [460] = {.lex_state = 0, .external_lex_state = 9},
  [461] = {.lex_state = 0, .external_lex_state = 6},
  [462] = {.lex_state = 0, .external_lex_state = 6},
  [463] = {.lex_state = 0, .external_lex_state = 6},
  [464] = {.lex_state = 40},
  [465] = {.lex_state = 0, .external_lex_state = 6},
  [466] = {.lex_state = 0, .external_lex_state = 4},
  [467] = {.lex_state = 0, .external_lex_state = 8},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0, .external_lex_state = 5},
  [470] = {.lex_state = 0, .external_lex_state = 5},
  [471] = {.lex_state = 0, .external_lex_state = 4},
  [472] = {.lex_state = 0, .external_lex_state = 4},
  [473] = {.lex_state = 40},
  [474] = {.lex_state = 0, .external_lex_state = 5},
  [475] = {.lex_state = 0, .external_lex_state = 8},
  [476] = {.lex_state = 0, .external_lex_state = 8},
  [477] = {.lex_state = 0, .external_lex_state = 5},
  [478] = {.lex_state = 0, .external_lex_state = 5},
  [479] = {.lex_state = 0, .external_lex_state = 5},
  [480] = {.lex_state = 0, .external_lex_state = 8},
  [481] = {.lex_state = 0, .external_lex_state = 8},
  [482] = {.lex_state = 0, .external_lex_state = 8},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0, .external_lex_state = 8},
  [485] = {.lex_state = 0, .external_lex_state = 8},
  [486] = {.lex_state = 0, .external_lex_state = 8},
  [487] = {.lex_state = 40},
  [488] = {.lex_state = 0, .external_lex_state = 8},
  [489] = {.lex_state = 40},
  [490] = {.lex_state = 0, .external_lex_state = 8},
  [491] = {.lex_state = 0, .external_lex_state = 8},
  [492] = {.lex_state = 0, .external_lex_state = 4},
  [493] = {.lex_state = 0, .external_lex_state = 8},
  [494] = {.lex_state = 0, .external_lex_state = 8},
  [495] = {.lex_state = 0, .external_lex_state = 8},
  [496] = {.lex_state = 0, .external_lex_state = 8},
  [497] = {.lex_state = 0, .external_lex_state = 4},
  [498] = {.lex_state = 0, .external_lex_state = 10},
  [499] = {.lex_state = 0, .external_lex_state = 8},
  [500] = {.lex_state = 0, .external_lex_state = 8},
  [501] = {.lex_state = 0, .external_lex_state = 5},
  [502] = {.lex_state = 0, .external_lex_state = 4},
  [503] = {.lex_state = 0, .external_lex_state = 8},
  [504] = {.lex_state = 0, .external_lex_state = 5},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 40},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0, .external_lex_state = 4},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0, .external_lex_state = 8},
  [513] = {.lex_state = 40},
  [514] = {.lex_state = 0, .external_lex_state = 10},
  [515] = {.lex_state = 0, .external_lex_state = 8},
  [516] = {.lex_state = 40, .external_lex_state = 2},
  [517] = {.lex_state = 0, .external_lex_state = 8},
  [518] = {.lex_state = 0, .external_lex_state = 8},
  [519] = {.lex_state = 0, .external_lex_state = 11},
  [520] = {.lex_state = 0, .external_lex_state = 4},
  [521] = {.lex_state = 0, .external_lex_state = 8},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0, .external_lex_state = 8},
  [524] = {.lex_state = 0, .external_lex_state = 8},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0, .external_lex_state = 9},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0, .external_lex_state = 9},
  [530] = {.lex_state = 0, .external_lex_state = 9},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 2},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 40},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 2},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 2},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 40},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 40},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 2},
  [567] = {.lex_state = 2},
  [568] = {.lex_state = 0, .external_lex_state = 9},
  [569] = {.lex_state = 0, .external_lex_state = 9},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0, .external_lex_state = 4},
  [573] = {.lex_state = 0, .external_lex_state = 4},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0, .external_lex_state = 4},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0, .external_lex_state = 4},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0, .external_lex_state = 4},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0, .external_lex_state = 4},
  [584] = {.lex_state = 0, .external_lex_state = 4},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 40},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0, .external_lex_state = 4},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0, .external_lex_state = 4},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 40},
  [599] = {.lex_state = 0, .external_lex_state = 4},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0, .external_lex_state = 9},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 40},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0, .external_lex_state = 4},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0, .external_lex_state = 4},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0, .external_lex_state = 4},
  [617] = {.lex_state = 0, .external_lex_state = 4},
  [618] = {.lex_state = 0, .external_lex_state = 4},
  [619] = {.lex_state = 0, .external_lex_state = 4},
  [620] = {.lex_state = 0, .external_lex_state = 4},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0, .external_lex_state = 4},
  [623] = {.lex_state = 0, .external_lex_state = 4},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0, .external_lex_state = 5},
  [626] = {.lex_state = 0, .external_lex_state = 12},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0, .external_lex_state = 4},
  [629] = {.lex_state = 0, .external_lex_state = 5},
  [630] = {.lex_state = 0, .external_lex_state = 13},
  [631] = {.lex_state = 0, .external_lex_state = 9},
  [632] = {.lex_state = 0, .external_lex_state = 12},
  [633] = {.lex_state = 0, .external_lex_state = 12},
  [634] = {.lex_state = 40},
  [635] = {.lex_state = 0, .external_lex_state = 13},
  [636] = {.lex_state = 0, .external_lex_state = 5},
  [637] = {.lex_state = 0, .external_lex_state = 4},
  [638] = {.lex_state = 0, .external_lex_state = 5},
  [639] = {.lex_state = 0, .external_lex_state = 12},
  [640] = {.lex_state = 40},
  [641] = {.lex_state = 0, .external_lex_state = 4},
  [642] = {.lex_state = 0, .external_lex_state = 4},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0, .external_lex_state = 12},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0, .external_lex_state = 4},
  [647] = {.lex_state = 0, .external_lex_state = 5},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0, .external_lex_state = 4},
  [650] = {.lex_state = 40},
  [651] = {.lex_state = 0, .external_lex_state = 13},
  [652] = {.lex_state = 0, .external_lex_state = 13},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0, .external_lex_state = 5},
  [655] = {.lex_state = 0, .external_lex_state = 13},
  [656] = {.lex_state = 40},
  [657] = {.lex_state = 0, .external_lex_state = 4},
  [658] = {.lex_state = 0, .external_lex_state = 4},
  [659] = {.lex_state = 0, .external_lex_state = 12},
  [660] = {.lex_state = 0, .external_lex_state = 13},
  [661] = {.lex_state = 0, .external_lex_state = 4},
  [662] = {.lex_state = 0, .external_lex_state = 13},
  [663] = {.lex_state = 0, .external_lex_state = 4},
  [664] = {.lex_state = 0, .external_lex_state = 13},
  [665] = {.lex_state = 40},
  [666] = {.lex_state = 0, .external_lex_state = 4},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0, .external_lex_state = 13},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0, .external_lex_state = 4},
  [672] = {.lex_state = 0, .external_lex_state = 4},
  [673] = {.lex_state = 0, .external_lex_state = 4},
  [674] = {.lex_state = 0, .external_lex_state = 13},
  [675] = {.lex_state = 40},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0, .external_lex_state = 13},
  [678] = {.lex_state = 0, .external_lex_state = 4},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0, .external_lex_state = 9},
};

enum {
  ts_external_token_quoted_template_start = 0,
  ts_external_token_quoted_template_end = 1,
  ts_external_token__template_literal_chunk = 2,
  ts_external_token_template_interpolation_start = 3,
  ts_external_token_template_interpolation_end = 4,
  ts_external_token_template_directive_start = 5,
  ts_external_token_template_directive_end = 6,
  ts_external_token_heredoc_identifier = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_quoted_template_start] = sym_quoted_template_start,
  [ts_external_token_quoted_template_end] = sym_quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token_template_interpolation_start] = sym_template_interpolation_start,
  [ts_external_token_template_interpolation_end] = sym_template_interpolation_end,
  [ts_external_token_template_directive_start] = sym_template_directive_start,
  [ts_external_token_template_directive_end] = sym_template_directive_end,
  [ts_external_token_heredoc_identifier] = sym_heredoc_identifier,
};

static const bool ts_external_scanner_states[14][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_interpolation_end] = true,
    [ts_external_token_template_directive_start] = true,
    [ts_external_token_template_directive_end] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [2] = {
    [ts_external_token_quoted_template_start] = true,
  },
  [3] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_template_interpolation_end] = true,
  },
  [4] = {
    [ts_external_token_template_directive_end] = true,
  },
  [5] = {
    [ts_external_token_template_interpolation_end] = true,
  },
  [6] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
  },
  [7] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [8] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
  },
  [9] = {
    [ts_external_token_template_directive_start] = true,
  },
  [10] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [11] = {
    [ts_external_token__template_literal_chunk] = true,
  },
  [12] = {
    [ts_external_token_quoted_template_end] = true,
  },
  [13] = {
    [ts_external_token_heredoc_identifier] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_numeric_lit_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_legacy_index_token1] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH] = ACTIONS(1),
    [sym_strip_marker] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_quoted_template_start] = ACTIONS(1),
    [sym_quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym_template_interpolation_start] = ACTIONS(1),
    [sym_template_interpolation_end] = ACTIONS(1),
    [sym_template_directive_start] = ACTIONS(1),
    [sym_template_directive_end] = ACTIONS(1),
    [sym_heredoc_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(680),
    [sym_body] = STATE(679),
    [sym_attribute] = STATE(400),
    [sym_block] = STATE(400),
    [sym_object] = STATE(679),
    [sym_object_start] = STATE(15),
    [aux_sym_body_repeat1] = STATE(400),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(13), 1,
      sym_tuple_start,
    STATE(77), 1,
      sym_for_intro,
    STATE(337), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(541), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [110] = 30,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(13), 1,
      sym_tuple_start,
    STATE(78), 1,
      sym_for_intro,
    STATE(144), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(554), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [220] = 30,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(13), 1,
      sym_tuple_start,
    STATE(42), 1,
      sym_for_intro,
    STATE(305), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(547), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [330] = 30,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(13), 1,
      sym_tuple_start,
    STATE(40), 1,
      sym_for_intro,
    STATE(178), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(557), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [440] = 30,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(13), 1,
      sym_tuple_start,
    STATE(76), 1,
      sym_for_intro,
    STATE(267), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(588), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [550] = 29,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(54), 1,
      sym_for_intro,
    STATE(275), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(550), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [657] = 29,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(39), 1,
      sym_for_intro,
    STATE(353), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(534), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [764] = 28,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(67), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(73), 1,
      sym_null_lit,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LT_LT,
    ACTIONS(88), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(91), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(30), 1,
      sym__comma,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(9), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [869] = 28,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(28), 1,
      sym__comma,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(9), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [974] = 28,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(27), 1,
      sym__comma,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1079] = 29,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(41), 1,
      sym_for_intro,
    STATE(164), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(609), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1186] = 29,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(80), 1,
      sym_for_intro,
    STATE(234), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(543), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1293] = 29,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(48), 1,
      sym_for_intro,
    STATE(319), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(532), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1400] = 28,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(13), 1,
      sym_tuple_start,
    STATE(178), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(557), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1504] = 27,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(280), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(391), 1,
      sym_expression,
    STATE(528), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1605] = 27,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(197), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(391), 1,
      sym_expression,
    STATE(604), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1706] = 27,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(391), 1,
      sym_expression,
    STATE(536), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1807] = 27,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(313), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(391), 1,
      sym_expression,
    STATE(527), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1908] = 27,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(391), 1,
      sym_expression,
    STATE(614), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2009] = 26,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_strip_marker,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    ACTIONS(136), 1,
      sym_template_interpolation_end,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(474), 1,
      sym_expression,
    STATE(501), 1,
      sym_conditional,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2107] = 26,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    ACTIONS(138), 1,
      sym_strip_marker,
    ACTIONS(140), 1,
      sym_template_interpolation_end,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(477), 1,
      sym_expression,
    STATE(501), 1,
      sym_conditional,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2205] = 26,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    ACTIONS(142), 1,
      sym_strip_marker,
    ACTIONS(144), 1,
      sym_template_interpolation_end,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(479), 1,
      sym_expression,
    STATE(501), 1,
      sym_conditional,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2303] = 26,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    ACTIONS(146), 1,
      sym_strip_marker,
    ACTIONS(148), 1,
      sym_template_interpolation_end,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(501), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2401] = 26,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    ACTIONS(150), 1,
      sym_strip_marker,
    ACTIONS(152), 1,
      sym_template_interpolation_end,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(478), 1,
      sym_expression,
    STATE(501), 1,
      sym_conditional,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2499] = 26,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    ACTIONS(154), 1,
      sym_strip_marker,
    ACTIONS(156), 1,
      sym_template_interpolation_end,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(470), 1,
      sym_expression,
    STATE(501), 1,
      sym_conditional,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2597] = 26,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(359), 1,
      sym_object_elem,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2695] = 26,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(359), 1,
      sym_object_elem,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2793] = 25,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2888] = 25,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(359), 1,
      sym_object_elem,
    STATE(387), 1,
      sym_conditional,
    STATE(507), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2983] = 25,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3078] = 25,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3173] = 25,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3268] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(395), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3360] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(394), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3452] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(472), 1,
      sym_expression,
    STATE(497), 1,
      sym_conditional,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3544] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(562), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3636] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(398), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3728] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(413), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3820] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(567), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3912] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(405), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4004] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(535), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4096] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(571), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4188] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(399), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4280] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4372] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(469), 1,
      sym_expression,
    STATE(501), 1,
      sym_conditional,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4464] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(497), 1,
      sym_conditional,
    STATE(520), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4556] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(401), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4648] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(597), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4740] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(605), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4832] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4924] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(397), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5016] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(606), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5108] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(411), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5200] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(497), 1,
      sym_conditional,
    STATE(502), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5292] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(471), 1,
      sym_expression,
    STATE(497), 1,
      sym_conditional,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5384] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(570), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5476] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(356), 1,
      sym_conditional,
    STATE(358), 1,
      sym_expression,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(100), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5568] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(555), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5660] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(558), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5752] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(564), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5844] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(522), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5936] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(436), 1,
      sym_conditional,
    STATE(464), 1,
      sym_expression,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(185), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6028] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(533), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6120] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(386), 1,
      sym_expression,
    STATE(387), 1,
      sym_conditional,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6212] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(608), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6304] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(492), 1,
      sym_expression,
    STATE(497), 1,
      sym_conditional,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6396] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(356), 1,
      sym_conditional,
    STATE(357), 1,
      sym_expression,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(100), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6488] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(592), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6580] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(591), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6672] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(587), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6764] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(436), 1,
      sym_conditional,
    STATE(440), 1,
      sym_expression,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(185), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6856] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(582), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6948] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(466), 1,
      sym_expression,
    STATE(497), 1,
      sym_conditional,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7040] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(580), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7132] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(566), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7224] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(556), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7316] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(548), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7408] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(497), 1,
      sym_conditional,
    STATE(510), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7500] = 24,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(410), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7592] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(204), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7678] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7764] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(187), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7850] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(188), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7936] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8022] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(181), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8108] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8194] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(184), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8280] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(651), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(271), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(278), 2,
      sym_tuple,
      sym_object,
    STATE(286), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(183), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8366] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8452] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(209), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8538] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(208), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8624] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(207), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8710] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(206), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8796] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(134), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(335), 2,
      sym_tuple,
      sym_object,
    STATE(339), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(341), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(332), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(205), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8882] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(136), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8968] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(130), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9054] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9140] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(108), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9226] = 20,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(224), 1,
      anon_sym_DOT_STAR,
    ACTIONS(226), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    ACTIONS(240), 1,
      anon_sym_AMP_AMP,
    ACTIONS(242), 1,
      anon_sym_PIPE_PIPE,
    STATE(171), 1,
      sym_splat,
    STATE(172), 1,
      sym_get_attr,
    STATE(175), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(230), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(234), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(236), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(238), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(168), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(218), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(216), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
  [9308] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9394] = 10,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      sym_splat,
    STATE(172), 1,
      sym_get_attr,
    STATE(175), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(230), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(168), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(244), 18,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [9456] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(220), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9542] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9628] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(218), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9714] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(217), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9800] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(216), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9886] = 8,
    STATE(171), 1,
      sym_splat,
    STATE(172), 1,
      sym_get_attr,
    STATE(175), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(250), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(248), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [9944] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(133), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10030] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10116] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(102), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10202] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(123), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10288] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(122), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10374] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(174), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(178), 1,
      sym_null_lit,
    ACTIONS(182), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(289), 2,
      sym_tuple,
      sym_object,
    STATE(306), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(307), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(308), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(303), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(195), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10460] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(121), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10546] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(120), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10632] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(148), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(151), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(160), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(118), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10718] = 15,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    ACTIONS(240), 1,
      anon_sym_AMP_AMP,
    STATE(171), 1,
      sym_splat,
    STATE(172), 1,
      sym_get_attr,
    STATE(175), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(230), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(234), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(236), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(238), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(168), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(244), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [10790] = 22,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(23), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 1,
      sym_null_lit,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(39), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(189), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(191), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(194), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(203), 2,
      sym_tuple,
      sym_object,
    STATE(225), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(134), 11,
      sym__expr_term,
      sym_index_expr_term,
      sym_attr_expr_term,
      sym_splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10876] = 14,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      sym_splat,
    STATE(172), 1,
      sym_get_attr,
    STATE(175), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(230), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(234), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(236), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(238), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(168), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(244), 12,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [10946] = 13,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      sym_splat,
    STATE(172), 1,
      sym_get_attr,
    STATE(175), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(230), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(234), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(236), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(168), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(244), 14,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11014] = 11,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      sym_splat,
    STATE(172), 1,
      sym_get_attr,
    STATE(175), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(230), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(168), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(244), 16,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11078] = 8,
    STATE(171), 1,
      sym_splat,
    STATE(172), 1,
      sym_get_attr,
    STATE(175), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(244), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11136] = 7,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(126), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(254), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(252), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11190] = 7,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(127), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(256), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11244] = 7,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(127), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(260), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11298] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(127), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(266), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(264), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11352] = 7,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(125), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(276), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(274), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11406] = 15,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    STATE(210), 1,
      sym_index,
    STATE(213), 1,
      sym_get_attr,
    STATE(222), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(284), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(288), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(223), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(244), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [11473] = 10,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    STATE(210), 1,
      sym_index,
    STATE(213), 1,
      sym_get_attr,
    STATE(222), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(223), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 19,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11530] = 8,
    STATE(210), 1,
      sym_index,
    STATE(213), 1,
      sym_get_attr,
    STATE(222), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(223), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11583] = 11,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    STATE(210), 1,
      sym_index,
    STATE(213), 1,
      sym_get_attr,
    STATE(222), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(223), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 17,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11642] = 13,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    STATE(210), 1,
      sym_index,
    STATE(213), 1,
      sym_get_attr,
    STATE(222), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(284), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(223), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(244), 15,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11705] = 14,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    STATE(210), 1,
      sym_index,
    STATE(213), 1,
      sym_get_attr,
    STATE(222), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(284), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(288), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(223), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(244), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11770] = 20,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      anon_sym_DOT_STAR,
    ACTIONS(298), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(300), 1,
      anon_sym_PIPE_PIPE,
    STATE(210), 1,
      sym_index,
    STATE(213), 1,
      sym_get_attr,
    STATE(222), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(284), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(288), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(223), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(216), 9,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [11847] = 8,
    STATE(210), 1,
      sym_index,
    STATE(213), 1,
      sym_get_attr,
    STATE(222), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(223), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(250), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11900] = 5,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(302), 19,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11946] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(308), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11987] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(312), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12028] = 7,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12077] = 7,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(256), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12126] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(316), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12167] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(320), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12208] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(324), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12249] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(328), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12290] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(332), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12331] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(336), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12372] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(340), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(344), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12454] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(348), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12495] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(352), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12536] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(356), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12577] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(360), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12618] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(364), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12659] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(368), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(372), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12741] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(376), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12782] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(380), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12823] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(384), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12864] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(388), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12905] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(392), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12946] = 7,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(266), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12995] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(402), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13036] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(406), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13077] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(410), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13118] = 7,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(141), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(276), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(274), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13167] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(414), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13208] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(418), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13249] = 7,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(254), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13298] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(422), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13339] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(426), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13380] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(430), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13421] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(434), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13462] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(438), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13503] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(442), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13544] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(446), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13585] = 5,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13627] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13664] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(255), 1,
      sym_get_attr,
    STATE(269), 1,
      sym_index,
    STATE(272), 1,
      sym_splat,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(273), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [13711] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      sym_get_attr,
    STATE(269), 1,
      sym_index,
    STATE(272), 1,
      sym_splat,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(460), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(273), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(244), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [13768] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      sym_get_attr,
    STATE(269), 1,
      sym_index,
    STATE(272), 1,
      sym_splat,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(273), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [13821] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13858] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    STATE(255), 1,
      sym_get_attr,
    STATE(269), 1,
      sym_index,
    STATE(272), 1,
      sym_splat,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(273), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(250), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [13905] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      sym_get_attr,
    STATE(269), 1,
      sym_index,
    STATE(272), 1,
      sym_splat,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(273), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 15,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [13956] = 19,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(462), 1,
      anon_sym_LBRACK,
    ACTIONS(464), 1,
      anon_sym_DOT,
    ACTIONS(466), 1,
      anon_sym_DOT_STAR,
    ACTIONS(468), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(472), 1,
      anon_sym_AMP_AMP,
    ACTIONS(474), 1,
      anon_sym_PIPE_PIPE,
    STATE(255), 1,
      sym_get_attr,
    STATE(269), 1,
      sym_index,
    STATE(272), 1,
      sym_splat,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(460), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(470), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(273), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
      sym_comment,
  [14025] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14062] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(472), 1,
      anon_sym_AMP_AMP,
    STATE(255), 1,
      sym_get_attr,
    STATE(269), 1,
      sym_index,
    STATE(272), 1,
      sym_splat,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(460), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(470), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(273), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [14123] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      sym_get_attr,
    STATE(269), 1,
      sym_index,
    STATE(272), 1,
      sym_splat,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(460), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(470), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(273), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(244), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [14182] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14218] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14254] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14290] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14326] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14362] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14398] = 8,
    STATE(288), 1,
      sym_index,
    STATE(316), 1,
      sym_get_attr,
    STATE(318), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(355), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(250), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14444] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14480] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14516] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14552] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14588] = 19,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_DOT_STAR,
    ACTIONS(482), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(488), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_AMP_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE_PIPE,
    STATE(288), 1,
      sym_index,
    STATE(316), 1,
      sym_get_attr,
    STATE(318), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(490), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(492), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(494), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(355), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(216), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [14656] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14692] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14728] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14764] = 15,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(512), 1,
      anon_sym_AMP_AMP,
    STATE(327), 1,
      sym_splat,
    STATE(336), 1,
      sym_get_attr,
    STATE(346), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(506), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(508), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(510), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(325), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(244), 6,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14824] = 14,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(327), 1,
      sym_splat,
    STATE(336), 1,
      sym_get_attr,
    STATE(346), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(506), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(508), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(510), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(325), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(244), 7,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14882] = 13,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(327), 1,
      sym_splat,
    STATE(336), 1,
      sym_get_attr,
    STATE(346), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(506), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(508), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(325), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(244), 9,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14938] = 11,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(327), 1,
      sym_splat,
    STATE(336), 1,
      sym_get_attr,
    STATE(346), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(325), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 11,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14990] = 8,
    STATE(327), 1,
      sym_splat,
    STATE(336), 1,
      sym_get_attr,
    STATE(346), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(325), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15036] = 10,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(327), 1,
      sym_splat,
    STATE(336), 1,
      sym_get_attr,
    STATE(346), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(325), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 13,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15086] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15122] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15194] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15230] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15266] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15302] = 10,
    ACTIONS(488), 1,
      anon_sym_SLASH,
    STATE(288), 1,
      sym_index,
    STATE(316), 1,
      sym_get_attr,
    STATE(318), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(486), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(355), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 13,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15352] = 8,
    STATE(288), 1,
      sym_index,
    STATE(316), 1,
      sym_get_attr,
    STATE(318), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(355), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15398] = 11,
    ACTIONS(488), 1,
      anon_sym_SLASH,
    STATE(288), 1,
      sym_index,
    STATE(316), 1,
      sym_get_attr,
    STATE(318), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(355), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 11,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15450] = 13,
    ACTIONS(488), 1,
      anon_sym_SLASH,
    STATE(288), 1,
      sym_index,
    STATE(316), 1,
      sym_get_attr,
    STATE(318), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(490), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(492), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(355), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(244), 9,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15506] = 14,
    ACTIONS(488), 1,
      anon_sym_SLASH,
    STATE(288), 1,
      sym_index,
    STATE(316), 1,
      sym_get_attr,
    STATE(318), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(490), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(492), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(494), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(355), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(244), 7,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15564] = 15,
    ACTIONS(488), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_AMP_AMP,
    STATE(288), 1,
      sym_index,
    STATE(316), 1,
      sym_get_attr,
    STATE(318), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(490), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(492), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(494), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(355), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(244), 6,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15624] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15660] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15696] = 8,
    STATE(327), 1,
      sym_splat,
    STATE(336), 1,
      sym_get_attr,
    STATE(346), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(325), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(250), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15742] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15778] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15814] = 19,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(512), 1,
      anon_sym_AMP_AMP,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_DOT_STAR,
    ACTIONS(520), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(522), 1,
      anon_sym_PIPE_PIPE,
    STATE(327), 1,
      sym_splat,
    STATE(336), 1,
      sym_get_attr,
    STATE(346), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(506), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(508), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(510), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(325), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(216), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [15882] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15918] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15954] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15990] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16026] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16062] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16098] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16170] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_DOT,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(236), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(264), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [16213] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(462), 1,
      anon_sym_LBRACK,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(254), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(240), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [16256] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(462), 1,
      anon_sym_LBRACK,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(274), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [16299] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(462), 1,
      anon_sym_LBRACK,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(258), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(236), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(256), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [16342] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(462), 1,
      anon_sym_LBRACK,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(270), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(262), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(236), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(260), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [16385] = 7,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(262), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(246), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(260), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16427] = 7,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(264), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16469] = 7,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(254), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(245), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16511] = 7,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(248), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(274), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16553] = 7,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(262), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(260), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16595] = 7,
    ACTIONS(536), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(246), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(264), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16637] = 7,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(258), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(246), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(256), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16679] = 7,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(258), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(256), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16721] = 7,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(247), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(274), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16763] = 7,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(343), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(254), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16805] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__function_call_start,
    ACTIONS(304), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [16841] = 5,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16876] = 5,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16911] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [16941] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [16971] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17001] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17031] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17061] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17091] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(310), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17121] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17151] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17181] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17211] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17241] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17271] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17301] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17331] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17361] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17391] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17421] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17451] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17481] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17511] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17541] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17571] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17601] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17631] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17661] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17691] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17721] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17751] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17781] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17811] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17841] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17871] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17901] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 17,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [17931] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17960] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17989] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18018] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18047] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18105] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18163] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18221] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18250] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18279] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18308] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18337] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18366] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18395] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18424] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18453] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18482] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18511] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18540] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18569] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18598] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18627] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18656] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18685] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18714] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18743] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18772] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18801] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18830] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18859] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18888] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18917] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18946] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19004] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19033] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19062] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19091] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19120] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19149] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19178] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19207] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19236] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19294] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19323] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19352] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19381] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19410] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19439] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19468] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19497] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19526] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19555] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19584] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19613] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19642] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19671] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19729] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19758] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19787] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19816] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19845] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19874] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19903] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(218), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(216), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19929] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(550), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(548), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19955] = 4,
    ACTIONS(556), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(554), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(552), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19983] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(558), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(56), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20008] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(562), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(560), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20033] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(566), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(564), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20058] = 13,
    ACTIONS(568), 1,
      sym_quoted_template_end,
    ACTIONS(570), 1,
      sym__template_literal_chunk,
    ACTIONS(572), 1,
      sym_template_interpolation_start,
    ACTIONS(574), 1,
      sym_template_directive_start,
    STATE(373), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(412), 1,
      aux_sym_template_literal_repeat1,
    STATE(415), 1,
      sym_template_if_branch,
    STATE(447), 1,
      sym_template_literal,
    STATE(626), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(459), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20102] = 12,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(576), 1,
      sym__template_literal_chunk,
    ACTIONS(578), 1,
      sym_template_interpolation_start,
    ACTIONS(580), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(409), 1,
      aux_sym_template_literal_repeat1,
    STATE(460), 1,
      sym_template_if_branch,
    STATE(664), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20144] = 13,
    ACTIONS(570), 1,
      sym__template_literal_chunk,
    ACTIONS(572), 1,
      sym_template_interpolation_start,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(582), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(412), 1,
      aux_sym_template_literal_repeat1,
    STATE(415), 1,
      sym_template_if_branch,
    STATE(446), 1,
      sym_template_literal,
    STATE(659), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(459), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20188] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(566), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(564), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20212] = 12,
    ACTIONS(584), 1,
      sym__template_literal_chunk,
    ACTIONS(586), 1,
      sym_template_interpolation_start,
    ACTIONS(588), 1,
      sym_template_directive_start,
    STATE(366), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(417), 1,
      aux_sym_template_literal_repeat1,
    STATE(448), 1,
      sym_template_if_branch,
    STATE(523), 1,
      sym_template_for_end,
    STATE(568), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(518), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20254] = 12,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(576), 1,
      sym__template_literal_chunk,
    ACTIONS(578), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(409), 1,
      aux_sym_template_literal_repeat1,
    STATE(460), 1,
      sym_template_if_branch,
    STATE(655), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20296] = 13,
    ACTIONS(570), 1,
      sym__template_literal_chunk,
    ACTIONS(572), 1,
      sym_template_interpolation_start,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(592), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(412), 1,
      aux_sym_template_literal_repeat1,
    STATE(415), 1,
      sym_template_if_branch,
    STATE(458), 1,
      sym_template_literal,
    STATE(632), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(459), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20340] = 12,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(576), 1,
      sym__template_literal_chunk,
    ACTIONS(578), 1,
      sym_template_interpolation_start,
    ACTIONS(594), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(409), 1,
      aux_sym_template_literal_repeat1,
    STATE(460), 1,
      sym_template_if_branch,
    STATE(677), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20382] = 12,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(576), 1,
      sym__template_literal_chunk,
    ACTIONS(578), 1,
      sym_template_interpolation_start,
    ACTIONS(596), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(409), 1,
      aux_sym_template_literal_repeat1,
    STATE(460), 1,
      sym_template_if_branch,
    STATE(635), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20424] = 13,
    ACTIONS(570), 1,
      sym__template_literal_chunk,
    ACTIONS(572), 1,
      sym_template_interpolation_start,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(598), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(412), 1,
      aux_sym_template_literal_repeat1,
    STATE(415), 1,
      sym_template_if_branch,
    STATE(441), 1,
      sym_template_literal,
    STATE(639), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(459), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20468] = 13,
    ACTIONS(570), 1,
      sym__template_literal_chunk,
    ACTIONS(572), 1,
      sym_template_interpolation_start,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(600), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(412), 1,
      aux_sym_template_literal_repeat1,
    STATE(415), 1,
      sym_template_if_branch,
    STATE(463), 1,
      sym_template_literal,
    STATE(633), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(459), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20512] = 12,
    ACTIONS(584), 1,
      sym__template_literal_chunk,
    ACTIONS(586), 1,
      sym_template_interpolation_start,
    ACTIONS(602), 1,
      sym_template_directive_start,
    STATE(366), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(417), 1,
      aux_sym_template_literal_repeat1,
    STATE(424), 1,
      sym_template_for_end,
    STATE(448), 1,
      sym_template_if_branch,
    STATE(530), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(518), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20554] = 12,
    ACTIONS(584), 1,
      sym__template_literal_chunk,
    ACTIONS(586), 1,
      sym_template_interpolation_start,
    ACTIONS(604), 1,
      sym_template_directive_start,
    STATE(366), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(417), 1,
      aux_sym_template_literal_repeat1,
    STATE(427), 1,
      sym_template_for_end,
    STATE(448), 1,
      sym_template_if_branch,
    STATE(603), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(518), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20596] = 12,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(576), 1,
      sym__template_literal_chunk,
    ACTIONS(578), 1,
      sym_template_interpolation_start,
    ACTIONS(606), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(409), 1,
      aux_sym_template_literal_repeat1,
    STATE(460), 1,
      sym_template_if_branch,
    STATE(630), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20638] = 11,
    ACTIONS(608), 1,
      sym__template_literal_chunk,
    ACTIONS(611), 1,
      sym_template_interpolation_start,
    ACTIONS(614), 1,
      sym_template_directive_start,
    ACTIONS(617), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(409), 1,
      aux_sym_template_literal_repeat1,
    STATE(460), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_template_for,
      sym_template_if,
    STATE(376), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20677] = 11,
    ACTIONS(614), 1,
      sym_template_directive_start,
    ACTIONS(617), 1,
      sym_quoted_template_end,
    ACTIONS(619), 1,
      sym__template_literal_chunk,
    ACTIONS(622), 1,
      sym_template_interpolation_start,
    STATE(373), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(412), 1,
      aux_sym_template_literal_repeat1,
    STATE(415), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(459), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20716] = 11,
    ACTIONS(570), 1,
      sym__template_literal_chunk,
    ACTIONS(572), 1,
      sym_template_interpolation_start,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(625), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(412), 1,
      aux_sym_template_literal_repeat1,
    STATE(415), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(459), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20755] = 11,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(576), 1,
      sym__template_literal_chunk,
    ACTIONS(578), 1,
      sym_template_interpolation_start,
    ACTIONS(625), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(409), 1,
      aux_sym_template_literal_repeat1,
    STATE(460), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_template_for,
      sym_template_if,
    STATE(376), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20794] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(629), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(627), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20817] = 11,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(584), 1,
      sym__template_literal_chunk,
    ACTIONS(586), 1,
      sym_template_interpolation_start,
    STATE(366), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(417), 1,
      aux_sym_template_literal_repeat1,
    STATE(448), 1,
      sym_template_if_branch,
    STATE(631), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(518), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20856] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(633), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(631), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20879] = 11,
    ACTIONS(574), 1,
      sym_template_directive_start,
    ACTIONS(584), 1,
      sym__template_literal_chunk,
    ACTIONS(586), 1,
      sym_template_interpolation_start,
    STATE(366), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(417), 1,
      aux_sym_template_literal_repeat1,
    STATE(448), 1,
      sym_template_if_branch,
    STATE(681), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(518), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20918] = 10,
    ACTIONS(584), 1,
      sym__template_literal_chunk,
    ACTIONS(586), 1,
      sym_template_interpolation_start,
    ACTIONS(625), 1,
      sym_template_directive_start,
    STATE(366), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(417), 1,
      aux_sym_template_literal_repeat1,
    STATE(448), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(518), 2,
      sym_template_for,
      sym_template_if,
    STATE(385), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20954] = 10,
    ACTIONS(614), 1,
      sym_template_directive_start,
    ACTIONS(635), 1,
      sym__template_literal_chunk,
    ACTIONS(638), 1,
      sym_template_interpolation_start,
    STATE(366), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_if_intro,
    STATE(417), 1,
      aux_sym_template_literal_repeat1,
    STATE(448), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(518), 2,
      sym_template_for,
      sym_template_if,
    STATE(385), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20990] = 3,
    ACTIONS(550), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 9,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21009] = 3,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(216), 9,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21028] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    STATE(513), 1,
      sym_block_end,
    STATE(539), 1,
      sym_body,
    STATE(400), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21052] = 7,
    ACTIONS(643), 1,
      anon_sym_EQ,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(649), 1,
      sym_quoted_template_start,
    STATE(390), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(396), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21076] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    STATE(487), 1,
      sym_block_end,
    STATE(589), 1,
      sym_body,
    STATE(400), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21100] = 7,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      sym_ellipsis,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    STATE(32), 1,
      sym__comma,
    STATE(407), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21123] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(664), 1,
      sym_comment,
    ACTIONS(659), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(392), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21142] = 5,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      sym__comma,
    STATE(393), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(667), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [21161] = 7,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    ACTIONS(674), 1,
      sym_ellipsis,
    STATE(190), 1,
      sym_object_end,
    STATE(531), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21184] = 7,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    ACTIONS(676), 1,
      sym_ellipsis,
    STATE(145), 1,
      sym_object_end,
    STATE(525), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21207] = 6,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    ACTIONS(649), 1,
      sym_quoted_template_start,
    ACTIONS(678), 1,
      sym_identifier,
    STATE(388), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(408), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21228] = 7,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    ACTIONS(680), 1,
      sym_ellipsis,
    STATE(276), 1,
      sym_object_end,
    STATE(553), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21251] = 7,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    ACTIONS(682), 1,
      sym_ellipsis,
    STATE(324), 1,
      sym_object_end,
    STATE(549), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21274] = 7,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    ACTIONS(684), 1,
      sym_ellipsis,
    STATE(291), 1,
      sym_object_end,
    STATE(602), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21297] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(688), 1,
      sym_comment,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(392), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21316] = 6,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(295), 1,
      sym_tuple_end,
    STATE(574), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21336] = 4,
    ACTIONS(692), 1,
      sym__template_literal_chunk,
    STATE(402), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(690), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21352] = 6,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym__comma,
    STATE(414), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21372] = 4,
    ACTIONS(699), 1,
      sym__template_literal_chunk,
    STATE(404), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(690), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21388] = 6,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(149), 1,
      sym_tuple_end,
    STATE(579), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21408] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(667), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [21422] = 6,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      sym_ellipsis,
    STATE(33), 1,
      sym__comma,
    STATE(393), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21442] = 5,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(711), 1,
      sym_quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(408), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21460] = 4,
    ACTIONS(714), 1,
      sym__template_literal_chunk,
    STATE(404), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(716), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21476] = 6,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(232), 1,
      sym_tuple_end,
    STATE(601), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21496] = 6,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(284), 1,
      sym_tuple_end,
    STATE(615), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21516] = 4,
    ACTIONS(718), 1,
      sym__template_literal_chunk,
    STATE(402), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(716), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21532] = 6,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(333), 1,
      sym_tuple_end,
    STATE(544), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21552] = 5,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym__comma,
    STATE(393), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21569] = 5,
    ACTIONS(722), 1,
      sym_template_directive_start,
    STATE(381), 1,
      sym_template_else_intro,
    STATE(428), 1,
      sym_template_if_end,
    STATE(529), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21586] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(724), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21597] = 4,
    ACTIONS(726), 1,
      sym__template_literal_chunk,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(716), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21612] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(728), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(730), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21634] = 5,
    ACTIONS(732), 1,
      anon_sym_for,
    ACTIONS(734), 1,
      anon_sym_if,
    ACTIONS(736), 1,
      sym_strip_marker,
    ACTIONS(738), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21651] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(740), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21662] = 4,
    ACTIONS(742), 1,
      sym__template_literal_chunk,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(690), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21677] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(745), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21688] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(747), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21699] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(745), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21710] = 5,
    ACTIONS(732), 1,
      anon_sym_for,
    ACTIONS(734), 1,
      anon_sym_if,
    ACTIONS(749), 1,
      sym_strip_marker,
    ACTIONS(751), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21727] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(747), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21738] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(753), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21749] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(755), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21760] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(724), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21771] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(753), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21782] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(226), 1,
      sym_object_end,
    STATE(542), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21799] = 5,
    ACTIONS(732), 1,
      anon_sym_for,
    ACTIONS(734), 1,
      anon_sym_if,
    ACTIONS(757), 1,
      sym_strip_marker,
    ACTIONS(759), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21816] = 5,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(323), 1,
      sym_object_end,
    STATE(551), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(761), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21844] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
      sym_comment,
  [21855] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(763), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21866] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21877] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(264), 1,
      sym_object_end,
    STATE(546), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21894] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(769), 1,
      anon_sym_QMARK,
    ACTIONS(767), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [21907] = 3,
    ACTIONS(771), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21920] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(775), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21931] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(777), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21942] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(779), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21953] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(781), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21964] = 3,
    ACTIONS(783), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21977] = 3,
    ACTIONS(785), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21990] = 5,
    ACTIONS(787), 1,
      sym_template_directive_start,
    STATE(381), 1,
      sym_template_else_intro,
    STATE(484), 1,
      sym_template_if_end,
    STATE(569), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22007] = 5,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(290), 1,
      sym_object_end,
    STATE(545), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22024] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(761), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22035] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22046] = 5,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_if,
    STATE(143), 1,
      sym_object_end,
    STATE(565), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22063] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(728), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22074] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(781), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22085] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(763), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22096] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(755), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22107] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(779), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22118] = 3,
    ACTIONS(789), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22131] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(740), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22142] = 5,
    ACTIONS(791), 1,
      sym_template_directive_start,
    STATE(381), 1,
      sym_template_else_intro,
    STATE(431), 1,
      sym_template_if_end,
    STATE(526), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22159] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(775), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22170] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(777), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22181] = 3,
    ACTIONS(793), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22194] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(548), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
      sym_comment,
  [22205] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(730), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22216] = 4,
    ACTIONS(795), 1,
      anon_sym_QMARK,
    ACTIONS(797), 1,
      sym_strip_marker,
    ACTIONS(799), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22230] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(730), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22240] = 4,
    ACTIONS(801), 1,
      anon_sym_for,
    ACTIONS(803), 1,
      anon_sym_if,
    ACTIONS(805), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22254] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22264] = 4,
    ACTIONS(807), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      sym_strip_marker,
    ACTIONS(811), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22278] = 4,
    ACTIONS(795), 1,
      anon_sym_QMARK,
    ACTIONS(813), 1,
      sym_strip_marker,
    ACTIONS(815), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22292] = 4,
    ACTIONS(795), 1,
      anon_sym_QMARK,
    ACTIONS(817), 1,
      sym_strip_marker,
    ACTIONS(819), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22306] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(821), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [22316] = 4,
    ACTIONS(807), 1,
      anon_sym_QMARK,
    ACTIONS(823), 1,
      sym_strip_marker,
    ACTIONS(825), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22330] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(763), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22340] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(781), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22350] = 4,
    ACTIONS(142), 1,
      sym_strip_marker,
    ACTIONS(144), 1,
      sym_template_interpolation_end,
    ACTIONS(807), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22364] = 4,
    ACTIONS(132), 1,
      sym_strip_marker,
    ACTIONS(136), 1,
      sym_template_interpolation_end,
    ACTIONS(807), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22378] = 4,
    ACTIONS(807), 1,
      anon_sym_QMARK,
    ACTIONS(827), 1,
      sym_strip_marker,
    ACTIONS(829), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22392] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(728), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22402] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(831), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22412] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22422] = 4,
    ACTIONS(732), 1,
      anon_sym_for,
    ACTIONS(734), 1,
      anon_sym_if,
    ACTIONS(833), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22436] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(753), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(761), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(835), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22466] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(837), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [22476] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(839), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22486] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(841), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [22496] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(843), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22506] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(745), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22516] = 4,
    ACTIONS(795), 1,
      anon_sym_QMARK,
    ACTIONS(845), 1,
      sym_strip_marker,
    ACTIONS(847), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22530] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(724), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22540] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(849), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22550] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(755), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22560] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(851), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22570] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(216), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22580] = 4,
    ACTIONS(716), 1,
      sym_quoted_template_end,
    ACTIONS(853), 1,
      sym__template_literal_chunk,
    STATE(514), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22594] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(779), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22604] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(777), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22614] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(216), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22624] = 4,
    ACTIONS(795), 1,
      anon_sym_QMARK,
    ACTIONS(855), 1,
      sym_strip_marker,
    ACTIONS(857), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22638] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(859), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22648] = 4,
    ACTIONS(154), 1,
      sym_strip_marker,
    ACTIONS(156), 1,
      sym_template_interpolation_end,
    ACTIONS(807), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22662] = 4,
    ACTIONS(861), 1,
      sym_strip_marker,
    ACTIONS(863), 1,
      anon_sym_else,
    ACTIONS(865), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22676] = 4,
    ACTIONS(801), 1,
      anon_sym_for,
    ACTIONS(803), 1,
      anon_sym_if,
    ACTIONS(867), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22690] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(869), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [22702] = 4,
    ACTIONS(863), 1,
      anon_sym_else,
    ACTIONS(871), 1,
      sym_strip_marker,
    ACTIONS(873), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22716] = 4,
    ACTIONS(863), 1,
      anon_sym_else,
    ACTIONS(875), 1,
      sym_strip_marker,
    ACTIONS(877), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22740] = 4,
    ACTIONS(801), 1,
      anon_sym_for,
    ACTIONS(803), 1,
      anon_sym_if,
    ACTIONS(879), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22754] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(775), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22764] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(881), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [22774] = 4,
    ACTIONS(690), 1,
      sym_quoted_template_end,
    ACTIONS(883), 1,
      sym__template_literal_chunk,
    STATE(514), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22788] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(886), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22798] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [22808] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(888), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22818] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(740), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22828] = 4,
    ACTIONS(890), 1,
      sym__template_literal_chunk,
    STATE(498), 1,
      aux_sym_template_literal_repeat1,
    STATE(644), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22842] = 4,
    ACTIONS(795), 1,
      anon_sym_QMARK,
    ACTIONS(892), 1,
      sym_strip_marker,
    ACTIONS(894), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22856] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(896), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22866] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(898), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [22878] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(747), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(900), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22898] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22909] = 3,
    ACTIONS(902), 1,
      sym_template_directive_start,
    STATE(444), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22920] = 3,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22931] = 3,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22942] = 3,
    ACTIONS(908), 1,
      sym_template_directive_start,
    STATE(457), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22953] = 3,
    ACTIONS(910), 1,
      sym_template_directive_start,
    STATE(462), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22964] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22975] = 3,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22986] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(912), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22997] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23008] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(914), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23019] = 3,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23030] = 3,
    ACTIONS(801), 1,
      anon_sym_for,
    ACTIONS(803), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23041] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(918), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [23050] = 3,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    STATE(473), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23061] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(920), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23072] = 3,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23083] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23094] = 3,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23105] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(326), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23116] = 3,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23127] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23138] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23149] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(922), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23160] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23171] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23182] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23193] = 3,
    ACTIONS(924), 1,
      anon_sym_else,
    ACTIONS(926), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23204] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23215] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23226] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(928), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23237] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(930), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23248] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23259] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(932), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23270] = 3,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23281] = 3,
    ACTIONS(924), 1,
      anon_sym_else,
    ACTIONS(938), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23292] = 3,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(942), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23303] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23314] = 3,
    ACTIONS(946), 1,
      sym_identifier,
    ACTIONS(948), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23325] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23336] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23347] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(952), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23358] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(954), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23369] = 3,
    ACTIONS(956), 1,
      sym_template_directive_start,
    STATE(500), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23380] = 3,
    ACTIONS(958), 1,
      sym_template_directive_start,
    STATE(499), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23391] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(960), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23402] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(962), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23413] = 3,
    ACTIONS(964), 1,
      sym_strip_marker,
    ACTIONS(966), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23424] = 3,
    ACTIONS(968), 1,
      sym_strip_marker,
    ACTIONS(970), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23435] = 3,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23446] = 3,
    ACTIONS(972), 1,
      sym_strip_marker,
    ACTIONS(974), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23457] = 3,
    ACTIONS(759), 1,
      anon_sym_endfor,
    ACTIONS(976), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23468] = 3,
    ACTIONS(978), 1,
      sym_strip_marker,
    ACTIONS(980), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23479] = 3,
    ACTIONS(865), 1,
      anon_sym_endif,
    ACTIONS(982), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23490] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23501] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23512] = 3,
    ACTIONS(986), 1,
      sym_strip_marker,
    ACTIONS(988), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23523] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(990), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23534] = 3,
    ACTIONS(992), 1,
      sym_strip_marker,
    ACTIONS(994), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23545] = 3,
    ACTIONS(996), 1,
      sym_strip_marker,
    ACTIONS(998), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23556] = 3,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23567] = 3,
    ACTIONS(1004), 1,
      sym_identifier,
    ACTIONS(1006), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23578] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23589] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23600] = 3,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    STATE(513), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23611] = 3,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23622] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23633] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(1016), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23644] = 3,
    ACTIONS(1018), 1,
      sym_strip_marker,
    ACTIONS(1020), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23655] = 3,
    ACTIONS(738), 1,
      anon_sym_endfor,
    ACTIONS(1022), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23666] = 3,
    ACTIONS(924), 1,
      anon_sym_else,
    ACTIONS(1024), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23677] = 3,
    ACTIONS(1026), 1,
      sym_strip_marker,
    ACTIONS(1028), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23688] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23699] = 3,
    ACTIONS(1032), 1,
      sym_identifier,
    ACTIONS(1034), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23710] = 3,
    ACTIONS(1036), 1,
      sym_strip_marker,
    ACTIONS(1038), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23721] = 3,
    ACTIONS(873), 1,
      anon_sym_endif,
    ACTIONS(1040), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23732] = 3,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23743] = 3,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23754] = 3,
    ACTIONS(1042), 1,
      sym_template_directive_start,
    STATE(443), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23765] = 3,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23776] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(1046), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23787] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(1048), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23798] = 3,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(1052), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23809] = 3,
    ACTIONS(657), 1,
      anon_sym_QMARK,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23820] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23831] = 3,
    ACTIONS(1056), 1,
      sym_strip_marker,
    ACTIONS(1058), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23842] = 3,
    ACTIONS(751), 1,
      anon_sym_endfor,
    ACTIONS(1060), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23853] = 3,
    ACTIONS(1062), 1,
      sym_strip_marker,
    ACTIONS(1064), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23864] = 3,
    ACTIONS(877), 1,
      anon_sym_endif,
    ACTIONS(1066), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23875] = 3,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23886] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23897] = 3,
    ACTIONS(1070), 1,
      sym_strip_marker,
    ACTIONS(1072), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23908] = 3,
    ACTIONS(1074), 1,
      sym_strip_marker,
    ACTIONS(1076), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23919] = 2,
    ACTIONS(994), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23927] = 2,
    ACTIONS(998), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23935] = 2,
    ACTIONS(1076), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23943] = 2,
    ACTIONS(926), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23951] = 2,
    ACTIONS(1078), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23959] = 2,
    ACTIONS(1080), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23967] = 2,
    ACTIONS(879), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23975] = 2,
    ACTIONS(1082), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23983] = 2,
    ACTIONS(1084), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23991] = 2,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23999] = 2,
    ACTIONS(1086), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24007] = 2,
    ACTIONS(829), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24015] = 2,
    ACTIONS(1088), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24023] = 2,
    ACTIONS(1090), 1,
      sym_template_directive_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24031] = 2,
    ACTIONS(1092), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24039] = 2,
    ACTIONS(1094), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24047] = 2,
    ACTIONS(1096), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24055] = 2,
    ACTIONS(1098), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24063] = 2,
    ACTIONS(811), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24071] = 2,
    ACTIONS(1100), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24079] = 2,
    ACTIONS(1102), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24087] = 2,
    ACTIONS(1104), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24095] = 2,
    ACTIONS(1106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24103] = 2,
    ACTIONS(847), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24111] = 2,
    ACTIONS(1108), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24119] = 2,
    ACTIONS(938), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24127] = 2,
    ACTIONS(1110), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24135] = 2,
    ACTIONS(867), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24143] = 2,
    ACTIONS(988), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24151] = 2,
    ACTIONS(1112), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24159] = 2,
    ACTIONS(1114), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24167] = 2,
    ACTIONS(1072), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24175] = 2,
    ACTIONS(1116), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24183] = 2,
    ACTIONS(1118), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24191] = 2,
    ACTIONS(1120), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24199] = 2,
    ACTIONS(805), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24207] = 2,
    ACTIONS(825), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24215] = 2,
    ACTIONS(1122), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24223] = 2,
    ACTIONS(1124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24231] = 2,
    ACTIONS(970), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24239] = 2,
    ACTIONS(1126), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24247] = 2,
    ACTIONS(1128), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24255] = 2,
    ACTIONS(1130), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24263] = 2,
    ACTIONS(966), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24271] = 2,
    ACTIONS(1132), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24279] = 2,
    ACTIONS(815), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24287] = 2,
    ACTIONS(1134), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24295] = 2,
    ACTIONS(1136), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24303] = 2,
    ACTIONS(1138), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24311] = 2,
    ACTIONS(1140), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24319] = 2,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24327] = 2,
    ACTIONS(1142), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24335] = 2,
    ACTIONS(1024), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24343] = 2,
    ACTIONS(1144), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24351] = 2,
    ACTIONS(1146), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24359] = 2,
    ACTIONS(857), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24367] = 2,
    ACTIONS(1148), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24375] = 2,
    ACTIONS(1150), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24383] = 2,
    ACTIONS(1152), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24391] = 2,
    ACTIONS(1154), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24399] = 2,
    ACTIONS(894), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24407] = 2,
    ACTIONS(1156), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24415] = 2,
    ACTIONS(1158), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24423] = 2,
    ACTIONS(1160), 1,
      sym_template_directive_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 110,
  [SMALL_STATE(4)] = 220,
  [SMALL_STATE(5)] = 330,
  [SMALL_STATE(6)] = 440,
  [SMALL_STATE(7)] = 550,
  [SMALL_STATE(8)] = 657,
  [SMALL_STATE(9)] = 764,
  [SMALL_STATE(10)] = 869,
  [SMALL_STATE(11)] = 974,
  [SMALL_STATE(12)] = 1079,
  [SMALL_STATE(13)] = 1186,
  [SMALL_STATE(14)] = 1293,
  [SMALL_STATE(15)] = 1400,
  [SMALL_STATE(16)] = 1504,
  [SMALL_STATE(17)] = 1605,
  [SMALL_STATE(18)] = 1706,
  [SMALL_STATE(19)] = 1807,
  [SMALL_STATE(20)] = 1908,
  [SMALL_STATE(21)] = 2009,
  [SMALL_STATE(22)] = 2107,
  [SMALL_STATE(23)] = 2205,
  [SMALL_STATE(24)] = 2303,
  [SMALL_STATE(25)] = 2401,
  [SMALL_STATE(26)] = 2499,
  [SMALL_STATE(27)] = 2597,
  [SMALL_STATE(28)] = 2695,
  [SMALL_STATE(29)] = 2793,
  [SMALL_STATE(30)] = 2888,
  [SMALL_STATE(31)] = 2983,
  [SMALL_STATE(32)] = 3078,
  [SMALL_STATE(33)] = 3173,
  [SMALL_STATE(34)] = 3268,
  [SMALL_STATE(35)] = 3360,
  [SMALL_STATE(36)] = 3452,
  [SMALL_STATE(37)] = 3544,
  [SMALL_STATE(38)] = 3636,
  [SMALL_STATE(39)] = 3728,
  [SMALL_STATE(40)] = 3820,
  [SMALL_STATE(41)] = 3912,
  [SMALL_STATE(42)] = 4004,
  [SMALL_STATE(43)] = 4096,
  [SMALL_STATE(44)] = 4188,
  [SMALL_STATE(45)] = 4280,
  [SMALL_STATE(46)] = 4372,
  [SMALL_STATE(47)] = 4464,
  [SMALL_STATE(48)] = 4556,
  [SMALL_STATE(49)] = 4648,
  [SMALL_STATE(50)] = 4740,
  [SMALL_STATE(51)] = 4832,
  [SMALL_STATE(52)] = 4924,
  [SMALL_STATE(53)] = 5016,
  [SMALL_STATE(54)] = 5108,
  [SMALL_STATE(55)] = 5200,
  [SMALL_STATE(56)] = 5292,
  [SMALL_STATE(57)] = 5384,
  [SMALL_STATE(58)] = 5476,
  [SMALL_STATE(59)] = 5568,
  [SMALL_STATE(60)] = 5660,
  [SMALL_STATE(61)] = 5752,
  [SMALL_STATE(62)] = 5844,
  [SMALL_STATE(63)] = 5936,
  [SMALL_STATE(64)] = 6028,
  [SMALL_STATE(65)] = 6120,
  [SMALL_STATE(66)] = 6212,
  [SMALL_STATE(67)] = 6304,
  [SMALL_STATE(68)] = 6396,
  [SMALL_STATE(69)] = 6488,
  [SMALL_STATE(70)] = 6580,
  [SMALL_STATE(71)] = 6672,
  [SMALL_STATE(72)] = 6764,
  [SMALL_STATE(73)] = 6856,
  [SMALL_STATE(74)] = 6948,
  [SMALL_STATE(75)] = 7040,
  [SMALL_STATE(76)] = 7132,
  [SMALL_STATE(77)] = 7224,
  [SMALL_STATE(78)] = 7316,
  [SMALL_STATE(79)] = 7408,
  [SMALL_STATE(80)] = 7500,
  [SMALL_STATE(81)] = 7592,
  [SMALL_STATE(82)] = 7678,
  [SMALL_STATE(83)] = 7764,
  [SMALL_STATE(84)] = 7850,
  [SMALL_STATE(85)] = 7936,
  [SMALL_STATE(86)] = 8022,
  [SMALL_STATE(87)] = 8108,
  [SMALL_STATE(88)] = 8194,
  [SMALL_STATE(89)] = 8280,
  [SMALL_STATE(90)] = 8366,
  [SMALL_STATE(91)] = 8452,
  [SMALL_STATE(92)] = 8538,
  [SMALL_STATE(93)] = 8624,
  [SMALL_STATE(94)] = 8710,
  [SMALL_STATE(95)] = 8796,
  [SMALL_STATE(96)] = 8882,
  [SMALL_STATE(97)] = 8968,
  [SMALL_STATE(98)] = 9054,
  [SMALL_STATE(99)] = 9140,
  [SMALL_STATE(100)] = 9226,
  [SMALL_STATE(101)] = 9308,
  [SMALL_STATE(102)] = 9394,
  [SMALL_STATE(103)] = 9456,
  [SMALL_STATE(104)] = 9542,
  [SMALL_STATE(105)] = 9628,
  [SMALL_STATE(106)] = 9714,
  [SMALL_STATE(107)] = 9800,
  [SMALL_STATE(108)] = 9886,
  [SMALL_STATE(109)] = 9944,
  [SMALL_STATE(110)] = 10030,
  [SMALL_STATE(111)] = 10116,
  [SMALL_STATE(112)] = 10202,
  [SMALL_STATE(113)] = 10288,
  [SMALL_STATE(114)] = 10374,
  [SMALL_STATE(115)] = 10460,
  [SMALL_STATE(116)] = 10546,
  [SMALL_STATE(117)] = 10632,
  [SMALL_STATE(118)] = 10718,
  [SMALL_STATE(119)] = 10790,
  [SMALL_STATE(120)] = 10876,
  [SMALL_STATE(121)] = 10946,
  [SMALL_STATE(122)] = 11014,
  [SMALL_STATE(123)] = 11078,
  [SMALL_STATE(124)] = 11136,
  [SMALL_STATE(125)] = 11190,
  [SMALL_STATE(126)] = 11244,
  [SMALL_STATE(127)] = 11298,
  [SMALL_STATE(128)] = 11352,
  [SMALL_STATE(129)] = 11406,
  [SMALL_STATE(130)] = 11473,
  [SMALL_STATE(131)] = 11530,
  [SMALL_STATE(132)] = 11583,
  [SMALL_STATE(133)] = 11642,
  [SMALL_STATE(134)] = 11705,
  [SMALL_STATE(135)] = 11770,
  [SMALL_STATE(136)] = 11847,
  [SMALL_STATE(137)] = 11900,
  [SMALL_STATE(138)] = 11946,
  [SMALL_STATE(139)] = 11987,
  [SMALL_STATE(140)] = 12028,
  [SMALL_STATE(141)] = 12077,
  [SMALL_STATE(142)] = 12126,
  [SMALL_STATE(143)] = 12167,
  [SMALL_STATE(144)] = 12208,
  [SMALL_STATE(145)] = 12249,
  [SMALL_STATE(146)] = 12290,
  [SMALL_STATE(147)] = 12331,
  [SMALL_STATE(148)] = 12372,
  [SMALL_STATE(149)] = 12413,
  [SMALL_STATE(150)] = 12454,
  [SMALL_STATE(151)] = 12495,
  [SMALL_STATE(152)] = 12536,
  [SMALL_STATE(153)] = 12577,
  [SMALL_STATE(154)] = 12618,
  [SMALL_STATE(155)] = 12659,
  [SMALL_STATE(156)] = 12700,
  [SMALL_STATE(157)] = 12741,
  [SMALL_STATE(158)] = 12782,
  [SMALL_STATE(159)] = 12823,
  [SMALL_STATE(160)] = 12864,
  [SMALL_STATE(161)] = 12905,
  [SMALL_STATE(162)] = 12946,
  [SMALL_STATE(163)] = 12995,
  [SMALL_STATE(164)] = 13036,
  [SMALL_STATE(165)] = 13077,
  [SMALL_STATE(166)] = 13118,
  [SMALL_STATE(167)] = 13167,
  [SMALL_STATE(168)] = 13208,
  [SMALL_STATE(169)] = 13249,
  [SMALL_STATE(170)] = 13298,
  [SMALL_STATE(171)] = 13339,
  [SMALL_STATE(172)] = 13380,
  [SMALL_STATE(173)] = 13421,
  [SMALL_STATE(174)] = 13462,
  [SMALL_STATE(175)] = 13503,
  [SMALL_STATE(176)] = 13544,
  [SMALL_STATE(177)] = 13585,
  [SMALL_STATE(178)] = 13627,
  [SMALL_STATE(179)] = 13664,
  [SMALL_STATE(180)] = 13711,
  [SMALL_STATE(181)] = 13768,
  [SMALL_STATE(182)] = 13821,
  [SMALL_STATE(183)] = 13858,
  [SMALL_STATE(184)] = 13905,
  [SMALL_STATE(185)] = 13956,
  [SMALL_STATE(186)] = 14025,
  [SMALL_STATE(187)] = 14062,
  [SMALL_STATE(188)] = 14123,
  [SMALL_STATE(189)] = 14182,
  [SMALL_STATE(190)] = 14218,
  [SMALL_STATE(191)] = 14254,
  [SMALL_STATE(192)] = 14290,
  [SMALL_STATE(193)] = 14326,
  [SMALL_STATE(194)] = 14362,
  [SMALL_STATE(195)] = 14398,
  [SMALL_STATE(196)] = 14444,
  [SMALL_STATE(197)] = 14480,
  [SMALL_STATE(198)] = 14516,
  [SMALL_STATE(199)] = 14552,
  [SMALL_STATE(200)] = 14588,
  [SMALL_STATE(201)] = 14656,
  [SMALL_STATE(202)] = 14692,
  [SMALL_STATE(203)] = 14728,
  [SMALL_STATE(204)] = 14764,
  [SMALL_STATE(205)] = 14824,
  [SMALL_STATE(206)] = 14882,
  [SMALL_STATE(207)] = 14938,
  [SMALL_STATE(208)] = 14990,
  [SMALL_STATE(209)] = 15036,
  [SMALL_STATE(210)] = 15086,
  [SMALL_STATE(211)] = 15122,
  [SMALL_STATE(212)] = 15158,
  [SMALL_STATE(213)] = 15194,
  [SMALL_STATE(214)] = 15230,
  [SMALL_STATE(215)] = 15266,
  [SMALL_STATE(216)] = 15302,
  [SMALL_STATE(217)] = 15352,
  [SMALL_STATE(218)] = 15398,
  [SMALL_STATE(219)] = 15450,
  [SMALL_STATE(220)] = 15506,
  [SMALL_STATE(221)] = 15564,
  [SMALL_STATE(222)] = 15624,
  [SMALL_STATE(223)] = 15660,
  [SMALL_STATE(224)] = 15696,
  [SMALL_STATE(225)] = 15742,
  [SMALL_STATE(226)] = 15778,
  [SMALL_STATE(227)] = 15814,
  [SMALL_STATE(228)] = 15882,
  [SMALL_STATE(229)] = 15918,
  [SMALL_STATE(230)] = 15954,
  [SMALL_STATE(231)] = 15990,
  [SMALL_STATE(232)] = 16026,
  [SMALL_STATE(233)] = 16062,
  [SMALL_STATE(234)] = 16098,
  [SMALL_STATE(235)] = 16134,
  [SMALL_STATE(236)] = 16170,
  [SMALL_STATE(237)] = 16213,
  [SMALL_STATE(238)] = 16256,
  [SMALL_STATE(239)] = 16299,
  [SMALL_STATE(240)] = 16342,
  [SMALL_STATE(241)] = 16385,
  [SMALL_STATE(242)] = 16427,
  [SMALL_STATE(243)] = 16469,
  [SMALL_STATE(244)] = 16511,
  [SMALL_STATE(245)] = 16553,
  [SMALL_STATE(246)] = 16595,
  [SMALL_STATE(247)] = 16637,
  [SMALL_STATE(248)] = 16679,
  [SMALL_STATE(249)] = 16721,
  [SMALL_STATE(250)] = 16763,
  [SMALL_STATE(251)] = 16805,
  [SMALL_STATE(252)] = 16841,
  [SMALL_STATE(253)] = 16876,
  [SMALL_STATE(254)] = 16911,
  [SMALL_STATE(255)] = 16941,
  [SMALL_STATE(256)] = 16971,
  [SMALL_STATE(257)] = 17001,
  [SMALL_STATE(258)] = 17031,
  [SMALL_STATE(259)] = 17061,
  [SMALL_STATE(260)] = 17091,
  [SMALL_STATE(261)] = 17121,
  [SMALL_STATE(262)] = 17151,
  [SMALL_STATE(263)] = 17181,
  [SMALL_STATE(264)] = 17211,
  [SMALL_STATE(265)] = 17241,
  [SMALL_STATE(266)] = 17271,
  [SMALL_STATE(267)] = 17301,
  [SMALL_STATE(268)] = 17331,
  [SMALL_STATE(269)] = 17361,
  [SMALL_STATE(270)] = 17391,
  [SMALL_STATE(271)] = 17421,
  [SMALL_STATE(272)] = 17451,
  [SMALL_STATE(273)] = 17481,
  [SMALL_STATE(274)] = 17511,
  [SMALL_STATE(275)] = 17541,
  [SMALL_STATE(276)] = 17571,
  [SMALL_STATE(277)] = 17601,
  [SMALL_STATE(278)] = 17631,
  [SMALL_STATE(279)] = 17661,
  [SMALL_STATE(280)] = 17691,
  [SMALL_STATE(281)] = 17721,
  [SMALL_STATE(282)] = 17751,
  [SMALL_STATE(283)] = 17781,
  [SMALL_STATE(284)] = 17811,
  [SMALL_STATE(285)] = 17841,
  [SMALL_STATE(286)] = 17871,
  [SMALL_STATE(287)] = 17901,
  [SMALL_STATE(288)] = 17931,
  [SMALL_STATE(289)] = 17960,
  [SMALL_STATE(290)] = 17989,
  [SMALL_STATE(291)] = 18018,
  [SMALL_STATE(292)] = 18047,
  [SMALL_STATE(293)] = 18076,
  [SMALL_STATE(294)] = 18105,
  [SMALL_STATE(295)] = 18134,
  [SMALL_STATE(296)] = 18163,
  [SMALL_STATE(297)] = 18192,
  [SMALL_STATE(298)] = 18221,
  [SMALL_STATE(299)] = 18250,
  [SMALL_STATE(300)] = 18279,
  [SMALL_STATE(301)] = 18308,
  [SMALL_STATE(302)] = 18337,
  [SMALL_STATE(303)] = 18366,
  [SMALL_STATE(304)] = 18395,
  [SMALL_STATE(305)] = 18424,
  [SMALL_STATE(306)] = 18453,
  [SMALL_STATE(307)] = 18482,
  [SMALL_STATE(308)] = 18511,
  [SMALL_STATE(309)] = 18540,
  [SMALL_STATE(310)] = 18569,
  [SMALL_STATE(311)] = 18598,
  [SMALL_STATE(312)] = 18627,
  [SMALL_STATE(313)] = 18656,
  [SMALL_STATE(314)] = 18685,
  [SMALL_STATE(315)] = 18714,
  [SMALL_STATE(316)] = 18743,
  [SMALL_STATE(317)] = 18772,
  [SMALL_STATE(318)] = 18801,
  [SMALL_STATE(319)] = 18830,
  [SMALL_STATE(320)] = 18859,
  [SMALL_STATE(321)] = 18888,
  [SMALL_STATE(322)] = 18917,
  [SMALL_STATE(323)] = 18946,
  [SMALL_STATE(324)] = 18975,
  [SMALL_STATE(325)] = 19004,
  [SMALL_STATE(326)] = 19033,
  [SMALL_STATE(327)] = 19062,
  [SMALL_STATE(328)] = 19091,
  [SMALL_STATE(329)] = 19120,
  [SMALL_STATE(330)] = 19149,
  [SMALL_STATE(331)] = 19178,
  [SMALL_STATE(332)] = 19207,
  [SMALL_STATE(333)] = 19236,
  [SMALL_STATE(334)] = 19265,
  [SMALL_STATE(335)] = 19294,
  [SMALL_STATE(336)] = 19323,
  [SMALL_STATE(337)] = 19352,
  [SMALL_STATE(338)] = 19381,
  [SMALL_STATE(339)] = 19410,
  [SMALL_STATE(340)] = 19439,
  [SMALL_STATE(341)] = 19468,
  [SMALL_STATE(342)] = 19497,
  [SMALL_STATE(343)] = 19526,
  [SMALL_STATE(344)] = 19555,
  [SMALL_STATE(345)] = 19584,
  [SMALL_STATE(346)] = 19613,
  [SMALL_STATE(347)] = 19642,
  [SMALL_STATE(348)] = 19671,
  [SMALL_STATE(349)] = 19700,
  [SMALL_STATE(350)] = 19729,
  [SMALL_STATE(351)] = 19758,
  [SMALL_STATE(352)] = 19787,
  [SMALL_STATE(353)] = 19816,
  [SMALL_STATE(354)] = 19845,
  [SMALL_STATE(355)] = 19874,
  [SMALL_STATE(356)] = 19903,
  [SMALL_STATE(357)] = 19929,
  [SMALL_STATE(358)] = 19955,
  [SMALL_STATE(359)] = 19983,
  [SMALL_STATE(360)] = 20008,
  [SMALL_STATE(361)] = 20033,
  [SMALL_STATE(362)] = 20058,
  [SMALL_STATE(363)] = 20102,
  [SMALL_STATE(364)] = 20144,
  [SMALL_STATE(365)] = 20188,
  [SMALL_STATE(366)] = 20212,
  [SMALL_STATE(367)] = 20254,
  [SMALL_STATE(368)] = 20296,
  [SMALL_STATE(369)] = 20340,
  [SMALL_STATE(370)] = 20382,
  [SMALL_STATE(371)] = 20424,
  [SMALL_STATE(372)] = 20468,
  [SMALL_STATE(373)] = 20512,
  [SMALL_STATE(374)] = 20554,
  [SMALL_STATE(375)] = 20596,
  [SMALL_STATE(376)] = 20638,
  [SMALL_STATE(377)] = 20677,
  [SMALL_STATE(378)] = 20716,
  [SMALL_STATE(379)] = 20755,
  [SMALL_STATE(380)] = 20794,
  [SMALL_STATE(381)] = 20817,
  [SMALL_STATE(382)] = 20856,
  [SMALL_STATE(383)] = 20879,
  [SMALL_STATE(384)] = 20918,
  [SMALL_STATE(385)] = 20954,
  [SMALL_STATE(386)] = 20990,
  [SMALL_STATE(387)] = 21009,
  [SMALL_STATE(388)] = 21028,
  [SMALL_STATE(389)] = 21052,
  [SMALL_STATE(390)] = 21076,
  [SMALL_STATE(391)] = 21100,
  [SMALL_STATE(392)] = 21123,
  [SMALL_STATE(393)] = 21142,
  [SMALL_STATE(394)] = 21161,
  [SMALL_STATE(395)] = 21184,
  [SMALL_STATE(396)] = 21207,
  [SMALL_STATE(397)] = 21228,
  [SMALL_STATE(398)] = 21251,
  [SMALL_STATE(399)] = 21274,
  [SMALL_STATE(400)] = 21297,
  [SMALL_STATE(401)] = 21316,
  [SMALL_STATE(402)] = 21336,
  [SMALL_STATE(403)] = 21352,
  [SMALL_STATE(404)] = 21372,
  [SMALL_STATE(405)] = 21388,
  [SMALL_STATE(406)] = 21408,
  [SMALL_STATE(407)] = 21422,
  [SMALL_STATE(408)] = 21442,
  [SMALL_STATE(409)] = 21460,
  [SMALL_STATE(410)] = 21476,
  [SMALL_STATE(411)] = 21496,
  [SMALL_STATE(412)] = 21516,
  [SMALL_STATE(413)] = 21532,
  [SMALL_STATE(414)] = 21552,
  [SMALL_STATE(415)] = 21569,
  [SMALL_STATE(416)] = 21586,
  [SMALL_STATE(417)] = 21597,
  [SMALL_STATE(418)] = 21612,
  [SMALL_STATE(419)] = 21623,
  [SMALL_STATE(420)] = 21634,
  [SMALL_STATE(421)] = 21651,
  [SMALL_STATE(422)] = 21662,
  [SMALL_STATE(423)] = 21677,
  [SMALL_STATE(424)] = 21688,
  [SMALL_STATE(425)] = 21699,
  [SMALL_STATE(426)] = 21710,
  [SMALL_STATE(427)] = 21727,
  [SMALL_STATE(428)] = 21738,
  [SMALL_STATE(429)] = 21749,
  [SMALL_STATE(430)] = 21760,
  [SMALL_STATE(431)] = 21771,
  [SMALL_STATE(432)] = 21782,
  [SMALL_STATE(433)] = 21799,
  [SMALL_STATE(434)] = 21816,
  [SMALL_STATE(435)] = 21833,
  [SMALL_STATE(436)] = 21844,
  [SMALL_STATE(437)] = 21855,
  [SMALL_STATE(438)] = 21866,
  [SMALL_STATE(439)] = 21877,
  [SMALL_STATE(440)] = 21894,
  [SMALL_STATE(441)] = 21907,
  [SMALL_STATE(442)] = 21920,
  [SMALL_STATE(443)] = 21931,
  [SMALL_STATE(444)] = 21942,
  [SMALL_STATE(445)] = 21953,
  [SMALL_STATE(446)] = 21964,
  [SMALL_STATE(447)] = 21977,
  [SMALL_STATE(448)] = 21990,
  [SMALL_STATE(449)] = 22007,
  [SMALL_STATE(450)] = 22024,
  [SMALL_STATE(451)] = 22035,
  [SMALL_STATE(452)] = 22046,
  [SMALL_STATE(453)] = 22063,
  [SMALL_STATE(454)] = 22074,
  [SMALL_STATE(455)] = 22085,
  [SMALL_STATE(456)] = 22096,
  [SMALL_STATE(457)] = 22107,
  [SMALL_STATE(458)] = 22118,
  [SMALL_STATE(459)] = 22131,
  [SMALL_STATE(460)] = 22142,
  [SMALL_STATE(461)] = 22159,
  [SMALL_STATE(462)] = 22170,
  [SMALL_STATE(463)] = 22181,
  [SMALL_STATE(464)] = 22194,
  [SMALL_STATE(465)] = 22205,
  [SMALL_STATE(466)] = 22216,
  [SMALL_STATE(467)] = 22230,
  [SMALL_STATE(468)] = 22240,
  [SMALL_STATE(469)] = 22254,
  [SMALL_STATE(470)] = 22264,
  [SMALL_STATE(471)] = 22278,
  [SMALL_STATE(472)] = 22292,
  [SMALL_STATE(473)] = 22306,
  [SMALL_STATE(474)] = 22316,
  [SMALL_STATE(475)] = 22330,
  [SMALL_STATE(476)] = 22340,
  [SMALL_STATE(477)] = 22350,
  [SMALL_STATE(478)] = 22364,
  [SMALL_STATE(479)] = 22378,
  [SMALL_STATE(480)] = 22392,
  [SMALL_STATE(481)] = 22402,
  [SMALL_STATE(482)] = 22412,
  [SMALL_STATE(483)] = 22422,
  [SMALL_STATE(484)] = 22436,
  [SMALL_STATE(485)] = 22446,
  [SMALL_STATE(486)] = 22456,
  [SMALL_STATE(487)] = 22466,
  [SMALL_STATE(488)] = 22476,
  [SMALL_STATE(489)] = 22486,
  [SMALL_STATE(490)] = 22496,
  [SMALL_STATE(491)] = 22506,
  [SMALL_STATE(492)] = 22516,
  [SMALL_STATE(493)] = 22530,
  [SMALL_STATE(494)] = 22540,
  [SMALL_STATE(495)] = 22550,
  [SMALL_STATE(496)] = 22560,
  [SMALL_STATE(497)] = 22570,
  [SMALL_STATE(498)] = 22580,
  [SMALL_STATE(499)] = 22594,
  [SMALL_STATE(500)] = 22604,
  [SMALL_STATE(501)] = 22614,
  [SMALL_STATE(502)] = 22624,
  [SMALL_STATE(503)] = 22638,
  [SMALL_STATE(504)] = 22648,
  [SMALL_STATE(505)] = 22662,
  [SMALL_STATE(506)] = 22676,
  [SMALL_STATE(507)] = 22690,
  [SMALL_STATE(508)] = 22702,
  [SMALL_STATE(509)] = 22716,
  [SMALL_STATE(510)] = 22730,
  [SMALL_STATE(511)] = 22740,
  [SMALL_STATE(512)] = 22754,
  [SMALL_STATE(513)] = 22764,
  [SMALL_STATE(514)] = 22774,
  [SMALL_STATE(515)] = 22788,
  [SMALL_STATE(516)] = 22798,
  [SMALL_STATE(517)] = 22808,
  [SMALL_STATE(518)] = 22818,
  [SMALL_STATE(519)] = 22828,
  [SMALL_STATE(520)] = 22842,
  [SMALL_STATE(521)] = 22856,
  [SMALL_STATE(522)] = 22866,
  [SMALL_STATE(523)] = 22878,
  [SMALL_STATE(524)] = 22888,
  [SMALL_STATE(525)] = 22898,
  [SMALL_STATE(526)] = 22909,
  [SMALL_STATE(527)] = 22920,
  [SMALL_STATE(528)] = 22931,
  [SMALL_STATE(529)] = 22942,
  [SMALL_STATE(530)] = 22953,
  [SMALL_STATE(531)] = 22964,
  [SMALL_STATE(532)] = 22975,
  [SMALL_STATE(533)] = 22986,
  [SMALL_STATE(534)] = 22997,
  [SMALL_STATE(535)] = 23008,
  [SMALL_STATE(536)] = 23019,
  [SMALL_STATE(537)] = 23030,
  [SMALL_STATE(538)] = 23041,
  [SMALL_STATE(539)] = 23050,
  [SMALL_STATE(540)] = 23061,
  [SMALL_STATE(541)] = 23072,
  [SMALL_STATE(542)] = 23083,
  [SMALL_STATE(543)] = 23094,
  [SMALL_STATE(544)] = 23105,
  [SMALL_STATE(545)] = 23116,
  [SMALL_STATE(546)] = 23127,
  [SMALL_STATE(547)] = 23138,
  [SMALL_STATE(548)] = 23149,
  [SMALL_STATE(549)] = 23160,
  [SMALL_STATE(550)] = 23171,
  [SMALL_STATE(551)] = 23182,
  [SMALL_STATE(552)] = 23193,
  [SMALL_STATE(553)] = 23204,
  [SMALL_STATE(554)] = 23215,
  [SMALL_STATE(555)] = 23226,
  [SMALL_STATE(556)] = 23237,
  [SMALL_STATE(557)] = 23248,
  [SMALL_STATE(558)] = 23259,
  [SMALL_STATE(559)] = 23270,
  [SMALL_STATE(560)] = 23281,
  [SMALL_STATE(561)] = 23292,
  [SMALL_STATE(562)] = 23303,
  [SMALL_STATE(563)] = 23314,
  [SMALL_STATE(564)] = 23325,
  [SMALL_STATE(565)] = 23336,
  [SMALL_STATE(566)] = 23347,
  [SMALL_STATE(567)] = 23358,
  [SMALL_STATE(568)] = 23369,
  [SMALL_STATE(569)] = 23380,
  [SMALL_STATE(570)] = 23391,
  [SMALL_STATE(571)] = 23402,
  [SMALL_STATE(572)] = 23413,
  [SMALL_STATE(573)] = 23424,
  [SMALL_STATE(574)] = 23435,
  [SMALL_STATE(575)] = 23446,
  [SMALL_STATE(576)] = 23457,
  [SMALL_STATE(577)] = 23468,
  [SMALL_STATE(578)] = 23479,
  [SMALL_STATE(579)] = 23490,
  [SMALL_STATE(580)] = 23501,
  [SMALL_STATE(581)] = 23512,
  [SMALL_STATE(582)] = 23523,
  [SMALL_STATE(583)] = 23534,
  [SMALL_STATE(584)] = 23545,
  [SMALL_STATE(585)] = 23556,
  [SMALL_STATE(586)] = 23567,
  [SMALL_STATE(587)] = 23578,
  [SMALL_STATE(588)] = 23589,
  [SMALL_STATE(589)] = 23600,
  [SMALL_STATE(590)] = 23611,
  [SMALL_STATE(591)] = 23622,
  [SMALL_STATE(592)] = 23633,
  [SMALL_STATE(593)] = 23644,
  [SMALL_STATE(594)] = 23655,
  [SMALL_STATE(595)] = 23666,
  [SMALL_STATE(596)] = 23677,
  [SMALL_STATE(597)] = 23688,
  [SMALL_STATE(598)] = 23699,
  [SMALL_STATE(599)] = 23710,
  [SMALL_STATE(600)] = 23721,
  [SMALL_STATE(601)] = 23732,
  [SMALL_STATE(602)] = 23743,
  [SMALL_STATE(603)] = 23754,
  [SMALL_STATE(604)] = 23765,
  [SMALL_STATE(605)] = 23776,
  [SMALL_STATE(606)] = 23787,
  [SMALL_STATE(607)] = 23798,
  [SMALL_STATE(608)] = 23809,
  [SMALL_STATE(609)] = 23820,
  [SMALL_STATE(610)] = 23831,
  [SMALL_STATE(611)] = 23842,
  [SMALL_STATE(612)] = 23853,
  [SMALL_STATE(613)] = 23864,
  [SMALL_STATE(614)] = 23875,
  [SMALL_STATE(615)] = 23886,
  [SMALL_STATE(616)] = 23897,
  [SMALL_STATE(617)] = 23908,
  [SMALL_STATE(618)] = 23919,
  [SMALL_STATE(619)] = 23927,
  [SMALL_STATE(620)] = 23935,
  [SMALL_STATE(621)] = 23943,
  [SMALL_STATE(622)] = 23951,
  [SMALL_STATE(623)] = 23959,
  [SMALL_STATE(624)] = 23967,
  [SMALL_STATE(625)] = 23975,
  [SMALL_STATE(626)] = 23983,
  [SMALL_STATE(627)] = 23991,
  [SMALL_STATE(628)] = 23999,
  [SMALL_STATE(629)] = 24007,
  [SMALL_STATE(630)] = 24015,
  [SMALL_STATE(631)] = 24023,
  [SMALL_STATE(632)] = 24031,
  [SMALL_STATE(633)] = 24039,
  [SMALL_STATE(634)] = 24047,
  [SMALL_STATE(635)] = 24055,
  [SMALL_STATE(636)] = 24063,
  [SMALL_STATE(637)] = 24071,
  [SMALL_STATE(638)] = 24079,
  [SMALL_STATE(639)] = 24087,
  [SMALL_STATE(640)] = 24095,
  [SMALL_STATE(641)] = 24103,
  [SMALL_STATE(642)] = 24111,
  [SMALL_STATE(643)] = 24119,
  [SMALL_STATE(644)] = 24127,
  [SMALL_STATE(645)] = 24135,
  [SMALL_STATE(646)] = 24143,
  [SMALL_STATE(647)] = 24151,
  [SMALL_STATE(648)] = 24159,
  [SMALL_STATE(649)] = 24167,
  [SMALL_STATE(650)] = 24175,
  [SMALL_STATE(651)] = 24183,
  [SMALL_STATE(652)] = 24191,
  [SMALL_STATE(653)] = 24199,
  [SMALL_STATE(654)] = 24207,
  [SMALL_STATE(655)] = 24215,
  [SMALL_STATE(656)] = 24223,
  [SMALL_STATE(657)] = 24231,
  [SMALL_STATE(658)] = 24239,
  [SMALL_STATE(659)] = 24247,
  [SMALL_STATE(660)] = 24255,
  [SMALL_STATE(661)] = 24263,
  [SMALL_STATE(662)] = 24271,
  [SMALL_STATE(663)] = 24279,
  [SMALL_STATE(664)] = 24287,
  [SMALL_STATE(665)] = 24295,
  [SMALL_STATE(666)] = 24303,
  [SMALL_STATE(667)] = 24311,
  [SMALL_STATE(668)] = 24319,
  [SMALL_STATE(669)] = 24327,
  [SMALL_STATE(670)] = 24335,
  [SMALL_STATE(671)] = 24343,
  [SMALL_STATE(672)] = 24351,
  [SMALL_STATE(673)] = 24359,
  [SMALL_STATE(674)] = 24367,
  [SMALL_STATE(675)] = 24375,
  [SMALL_STATE(676)] = 24383,
  [SMALL_STATE(677)] = 24391,
  [SMALL_STATE(678)] = 24399,
  [SMALL_STATE(679)] = 24407,
  [SMALL_STATE(680)] = 24415,
  [SMALL_STATE(681)] = 24423,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(361),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(177),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(61),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(235),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(235),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(230),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(225),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(30),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(360),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(96),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(662),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(662),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(368),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(70),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(607),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(60),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(561),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_end, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_end, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_expr_term, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_expr_term, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_expr_term, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_expr_term, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expr_term, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expr_term, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_end, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_end, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(43),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(563),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(75),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(586),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(53),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(598),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_start, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_start, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_start, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_start, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(409),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(22),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(483),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(412),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(24),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(417),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(25),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(389),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(392),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(45),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(402),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(404),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(408),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(519),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 5),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 5),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(422),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 4),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 5),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 9),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 10),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 4),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 8),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(514),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 6),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 7),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 6),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 5),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_branch, 2),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_start, 1),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [1158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_branch, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

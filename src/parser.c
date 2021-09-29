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
  sym__index_expr_term = 64,
  sym__attr_expr_term = 65,
  sym__splat_expr_term = 66,
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
  [sym__index_expr_term] = "_index_expr_term",
  [sym__attr_expr_term] = "_attr_expr_term",
  [sym__splat_expr_term] = "_splat_expr_term",
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
  [sym__index_expr_term] = sym__index_expr_term,
  [sym__attr_expr_term] = sym__attr_expr_term,
  [sym__splat_expr_term] = sym__splat_expr_term,
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
  [sym__index_expr_term] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_expr_term] = {
    .visible = false,
    .named = true,
  },
  [sym__splat_expr_term] = {
    .visible = false,
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
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(43);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(106);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(59);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 3, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 3, .external_lex_state = 2},
  [9] = {.lex_state = 3, .external_lex_state = 2},
  [10] = {.lex_state = 3, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 3, .external_lex_state = 2},
  [13] = {.lex_state = 3, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
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
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 1, .external_lex_state = 2},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 41},
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
  [162] = {.lex_state = 1, .external_lex_state = 2},
  [163] = {.lex_state = 1, .external_lex_state = 2},
  [164] = {.lex_state = 1, .external_lex_state = 2},
  [165] = {.lex_state = 1, .external_lex_state = 2},
  [166] = {.lex_state = 1, .external_lex_state = 2},
  [167] = {.lex_state = 1, .external_lex_state = 2},
  [168] = {.lex_state = 1, .external_lex_state = 2},
  [169] = {.lex_state = 1, .external_lex_state = 2},
  [170] = {.lex_state = 1, .external_lex_state = 2},
  [171] = {.lex_state = 1, .external_lex_state = 2},
  [172] = {.lex_state = 1, .external_lex_state = 2},
  [173] = {.lex_state = 1, .external_lex_state = 2},
  [174] = {.lex_state = 1, .external_lex_state = 2},
  [175] = {.lex_state = 1, .external_lex_state = 2},
  [176] = {.lex_state = 1, .external_lex_state = 2},
  [177] = {.lex_state = 41},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 41},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 41},
  [198] = {.lex_state = 41},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 41},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 41},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 41},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 41},
  [216] = {.lex_state = 41},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 41},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 41, .external_lex_state = 4},
  [221] = {.lex_state = 41, .external_lex_state = 4},
  [222] = {.lex_state = 41, .external_lex_state = 4},
  [223] = {.lex_state = 41, .external_lex_state = 4},
  [224] = {.lex_state = 41, .external_lex_state = 5},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 41, .external_lex_state = 5},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 41, .external_lex_state = 4},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 41, .external_lex_state = 5},
  [232] = {.lex_state = 41, .external_lex_state = 5},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 41, .external_lex_state = 5},
  [235] = {.lex_state = 41, .external_lex_state = 5},
  [236] = {.lex_state = 41, .external_lex_state = 5},
  [237] = {.lex_state = 41, .external_lex_state = 5},
  [238] = {.lex_state = 41, .external_lex_state = 4},
  [239] = {.lex_state = 41, .external_lex_state = 4},
  [240] = {.lex_state = 41, .external_lex_state = 4},
  [241] = {.lex_state = 41, .external_lex_state = 5},
  [242] = {.lex_state = 41, .external_lex_state = 5},
  [243] = {.lex_state = 41, .external_lex_state = 4},
  [244] = {.lex_state = 41, .external_lex_state = 5},
  [245] = {.lex_state = 41, .external_lex_state = 4},
  [246] = {.lex_state = 41, .external_lex_state = 4},
  [247] = {.lex_state = 41, .external_lex_state = 4},
  [248] = {.lex_state = 41, .external_lex_state = 4},
  [249] = {.lex_state = 41, .external_lex_state = 5},
  [250] = {.lex_state = 41, .external_lex_state = 5},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 41, .external_lex_state = 4},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 41, .external_lex_state = 5},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 41, .external_lex_state = 5},
  [289] = {.lex_state = 41, .external_lex_state = 4},
  [290] = {.lex_state = 41, .external_lex_state = 5},
  [291] = {.lex_state = 41, .external_lex_state = 4},
  [292] = {.lex_state = 41, .external_lex_state = 4},
  [293] = {.lex_state = 41, .external_lex_state = 4},
  [294] = {.lex_state = 41, .external_lex_state = 4},
  [295] = {.lex_state = 41, .external_lex_state = 4},
  [296] = {.lex_state = 41, .external_lex_state = 4},
  [297] = {.lex_state = 41, .external_lex_state = 5},
  [298] = {.lex_state = 41, .external_lex_state = 5},
  [299] = {.lex_state = 41, .external_lex_state = 4},
  [300] = {.lex_state = 41, .external_lex_state = 5},
  [301] = {.lex_state = 41, .external_lex_state = 4},
  [302] = {.lex_state = 41, .external_lex_state = 5},
  [303] = {.lex_state = 41, .external_lex_state = 4},
  [304] = {.lex_state = 41, .external_lex_state = 5},
  [305] = {.lex_state = 41, .external_lex_state = 4},
  [306] = {.lex_state = 41, .external_lex_state = 5},
  [307] = {.lex_state = 41, .external_lex_state = 5},
  [308] = {.lex_state = 41, .external_lex_state = 5},
  [309] = {.lex_state = 41, .external_lex_state = 5},
  [310] = {.lex_state = 41, .external_lex_state = 5},
  [311] = {.lex_state = 41, .external_lex_state = 5},
  [312] = {.lex_state = 41, .external_lex_state = 4},
  [313] = {.lex_state = 41, .external_lex_state = 4},
  [314] = {.lex_state = 41, .external_lex_state = 5},
  [315] = {.lex_state = 41, .external_lex_state = 5},
  [316] = {.lex_state = 41, .external_lex_state = 4},
  [317] = {.lex_state = 41, .external_lex_state = 4},
  [318] = {.lex_state = 41, .external_lex_state = 5},
  [319] = {.lex_state = 41, .external_lex_state = 4},
  [320] = {.lex_state = 41, .external_lex_state = 4},
  [321] = {.lex_state = 41, .external_lex_state = 5},
  [322] = {.lex_state = 41, .external_lex_state = 5},
  [323] = {.lex_state = 41, .external_lex_state = 5},
  [324] = {.lex_state = 41, .external_lex_state = 5},
  [325] = {.lex_state = 41, .external_lex_state = 5},
  [326] = {.lex_state = 41, .external_lex_state = 4},
  [327] = {.lex_state = 41, .external_lex_state = 5},
  [328] = {.lex_state = 41, .external_lex_state = 4},
  [329] = {.lex_state = 41, .external_lex_state = 5},
  [330] = {.lex_state = 41, .external_lex_state = 4},
  [331] = {.lex_state = 41, .external_lex_state = 4},
  [332] = {.lex_state = 41, .external_lex_state = 5},
  [333] = {.lex_state = 41, .external_lex_state = 4},
  [334] = {.lex_state = 41, .external_lex_state = 5},
  [335] = {.lex_state = 41, .external_lex_state = 5},
  [336] = {.lex_state = 41, .external_lex_state = 5},
  [337] = {.lex_state = 41, .external_lex_state = 4},
  [338] = {.lex_state = 41, .external_lex_state = 4},
  [339] = {.lex_state = 41, .external_lex_state = 5},
  [340] = {.lex_state = 41, .external_lex_state = 5},
  [341] = {.lex_state = 41, .external_lex_state = 4},
  [342] = {.lex_state = 41, .external_lex_state = 4},
  [343] = {.lex_state = 41, .external_lex_state = 4},
  [344] = {.lex_state = 41, .external_lex_state = 5},
  [345] = {.lex_state = 41, .external_lex_state = 4},
  [346] = {.lex_state = 41, .external_lex_state = 4},
  [347] = {.lex_state = 41, .external_lex_state = 5},
  [348] = {.lex_state = 41, .external_lex_state = 4},
  [349] = {.lex_state = 41, .external_lex_state = 4},
  [350] = {.lex_state = 41, .external_lex_state = 5},
  [351] = {.lex_state = 41, .external_lex_state = 4},
  [352] = {.lex_state = 41, .external_lex_state = 5},
  [353] = {.lex_state = 41, .external_lex_state = 5},
  [354] = {.lex_state = 41, .external_lex_state = 4},
  [355] = {.lex_state = 41, .external_lex_state = 4},
  [356] = {.lex_state = 1, .external_lex_state = 2},
  [357] = {.lex_state = 1, .external_lex_state = 2},
  [358] = {.lex_state = 1, .external_lex_state = 2},
  [359] = {.lex_state = 3, .external_lex_state = 2},
  [360] = {.lex_state = 3, .external_lex_state = 2},
  [361] = {.lex_state = 1, .external_lex_state = 2},
  [362] = {.lex_state = 0, .external_lex_state = 6},
  [363] = {.lex_state = 0, .external_lex_state = 7},
  [364] = {.lex_state = 0, .external_lex_state = 7},
  [365] = {.lex_state = 0, .external_lex_state = 6},
  [366] = {.lex_state = 0, .external_lex_state = 6},
  [367] = {.lex_state = 1, .external_lex_state = 2},
  [368] = {.lex_state = 0, .external_lex_state = 8},
  [369] = {.lex_state = 0, .external_lex_state = 7},
  [370] = {.lex_state = 0, .external_lex_state = 7},
  [371] = {.lex_state = 0, .external_lex_state = 6},
  [372] = {.lex_state = 0, .external_lex_state = 6},
  [373] = {.lex_state = 0, .external_lex_state = 8},
  [374] = {.lex_state = 0, .external_lex_state = 8},
  [375] = {.lex_state = 0, .external_lex_state = 7},
  [376] = {.lex_state = 0, .external_lex_state = 8},
  [377] = {.lex_state = 1, .external_lex_state = 2},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 0, .external_lex_state = 7},
  [380] = {.lex_state = 0, .external_lex_state = 8},
  [381] = {.lex_state = 1, .external_lex_state = 2},
  [382] = {.lex_state = 0, .external_lex_state = 6},
  [383] = {.lex_state = 0, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 8},
  [385] = {.lex_state = 0, .external_lex_state = 8},
  [386] = {.lex_state = 41},
  [387] = {.lex_state = 41},
  [388] = {.lex_state = 41},
  [389] = {.lex_state = 41},
  [390] = {.lex_state = 4, .external_lex_state = 2},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 41},
  [395] = {.lex_state = 41, .external_lex_state = 2},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 41},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 41, .external_lex_state = 2},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0, .external_lex_state = 6},
  [408] = {.lex_state = 0, .external_lex_state = 7},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0, .external_lex_state = 7},
  [414] = {.lex_state = 0, .external_lex_state = 6},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0, .external_lex_state = 7},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0, .external_lex_state = 7},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0, .external_lex_state = 6},
  [421] = {.lex_state = 0, .external_lex_state = 8},
  [422] = {.lex_state = 0, .external_lex_state = 7},
  [423] = {.lex_state = 0, .external_lex_state = 7},
  [424] = {.lex_state = 0, .external_lex_state = 7},
  [425] = {.lex_state = 0, .external_lex_state = 6},
  [426] = {.lex_state = 0, .external_lex_state = 6},
  [427] = {.lex_state = 0, .external_lex_state = 6},
  [428] = {.lex_state = 0, .external_lex_state = 6},
  [429] = {.lex_state = 0, .external_lex_state = 6},
  [430] = {.lex_state = 0, .external_lex_state = 7},
  [431] = {.lex_state = 0, .external_lex_state = 6},
  [432] = {.lex_state = 0, .external_lex_state = 8},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0, .external_lex_state = 6},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 0, .external_lex_state = 6},
  [439] = {.lex_state = 0, .external_lex_state = 9},
  [440] = {.lex_state = 0, .external_lex_state = 7},
  [441] = {.lex_state = 0, .external_lex_state = 7},
  [442] = {.lex_state = 0, .external_lex_state = 9},
  [443] = {.lex_state = 0, .external_lex_state = 6},
  [444] = {.lex_state = 0, .external_lex_state = 6},
  [445] = {.lex_state = 0, .external_lex_state = 9},
  [446] = {.lex_state = 0, .external_lex_state = 6},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0, .external_lex_state = 6},
  [449] = {.lex_state = 0, .external_lex_state = 7},
  [450] = {.lex_state = 0, .external_lex_state = 6},
  [451] = {.lex_state = 0, .external_lex_state = 7},
  [452] = {.lex_state = 0, .external_lex_state = 7},
  [453] = {.lex_state = 0, .external_lex_state = 6},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0, .external_lex_state = 6},
  [456] = {.lex_state = 0, .external_lex_state = 6},
  [457] = {.lex_state = 41},
  [458] = {.lex_state = 0, .external_lex_state = 7},
  [459] = {.lex_state = 0, .external_lex_state = 7},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0, .external_lex_state = 7},
  [464] = {.lex_state = 0, .external_lex_state = 7},
  [465] = {.lex_state = 0, .external_lex_state = 6},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0, .external_lex_state = 5},
  [468] = {.lex_state = 41},
  [469] = {.lex_state = 0, .external_lex_state = 8},
  [470] = {.lex_state = 0, .external_lex_state = 8},
  [471] = {.lex_state = 41},
  [472] = {.lex_state = 0, .external_lex_state = 8},
  [473] = {.lex_state = 0, .external_lex_state = 4},
  [474] = {.lex_state = 0, .external_lex_state = 8},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0, .external_lex_state = 4},
  [477] = {.lex_state = 0, .external_lex_state = 5},
  [478] = {.lex_state = 0, .external_lex_state = 5},
  [479] = {.lex_state = 0, .external_lex_state = 5},
  [480] = {.lex_state = 41},
  [481] = {.lex_state = 0, .external_lex_state = 8},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0, .external_lex_state = 8},
  [484] = {.lex_state = 0, .external_lex_state = 8},
  [485] = {.lex_state = 0, .external_lex_state = 5},
  [486] = {.lex_state = 0, .external_lex_state = 8},
  [487] = {.lex_state = 0, .external_lex_state = 10},
  [488] = {.lex_state = 0, .external_lex_state = 8},
  [489] = {.lex_state = 0, .external_lex_state = 8},
  [490] = {.lex_state = 0, .external_lex_state = 8},
  [491] = {.lex_state = 0, .external_lex_state = 8},
  [492] = {.lex_state = 0, .external_lex_state = 5},
  [493] = {.lex_state = 0, .external_lex_state = 5},
  [494] = {.lex_state = 0, .external_lex_state = 4},
  [495] = {.lex_state = 0, .external_lex_state = 8},
  [496] = {.lex_state = 0, .external_lex_state = 11},
  [497] = {.lex_state = 0, .external_lex_state = 8},
  [498] = {.lex_state = 0, .external_lex_state = 8},
  [499] = {.lex_state = 0, .external_lex_state = 8},
  [500] = {.lex_state = 0, .external_lex_state = 4},
  [501] = {.lex_state = 0, .external_lex_state = 8},
  [502] = {.lex_state = 0, .external_lex_state = 8},
  [503] = {.lex_state = 0, .external_lex_state = 8},
  [504] = {.lex_state = 0, .external_lex_state = 8},
  [505] = {.lex_state = 0, .external_lex_state = 8},
  [506] = {.lex_state = 0, .external_lex_state = 8},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0, .external_lex_state = 4},
  [509] = {.lex_state = 0, .external_lex_state = 8},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0, .external_lex_state = 4},
  [512] = {.lex_state = 0, .external_lex_state = 4},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0, .external_lex_state = 5},
  [515] = {.lex_state = 0, .external_lex_state = 8},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 41},
  [518] = {.lex_state = 0, .external_lex_state = 8},
  [519] = {.lex_state = 0, .external_lex_state = 4},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0, .external_lex_state = 11},
  [522] = {.lex_state = 41, .external_lex_state = 2},
  [523] = {.lex_state = 0, .external_lex_state = 8},
  [524] = {.lex_state = 3},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0, .external_lex_state = 4},
  [528] = {.lex_state = 1},
  [529] = {.lex_state = 0, .external_lex_state = 4},
  [530] = {.lex_state = 0, .external_lex_state = 4},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0, .external_lex_state = 9},
  [545] = {.lex_state = 0, .external_lex_state = 9},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 41},
  [558] = {.lex_state = 1},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 41},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 41},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0, .external_lex_state = 9},
  [569] = {.lex_state = 0, .external_lex_state = 9},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0, .external_lex_state = 4},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0, .external_lex_state = 4},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0, .external_lex_state = 4},
  [580] = {.lex_state = 0, .external_lex_state = 4},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 41},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 1},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 41},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0, .external_lex_state = 9},
  [594] = {.lex_state = 0, .external_lex_state = 9},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0, .external_lex_state = 4},
  [598] = {.lex_state = 0, .external_lex_state = 4},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0, .external_lex_state = 4},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 1},
  [603] = {.lex_state = 0, .external_lex_state = 4},
  [604] = {.lex_state = 0, .external_lex_state = 4},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0, .external_lex_state = 4},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 41},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0, .external_lex_state = 4},
  [618] = {.lex_state = 0, .external_lex_state = 4},
  [619] = {.lex_state = 0, .external_lex_state = 4},
  [620] = {.lex_state = 0, .external_lex_state = 4},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0, .external_lex_state = 4},
  [623] = {.lex_state = 0, .external_lex_state = 4},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0, .external_lex_state = 4},
  [626] = {.lex_state = 0, .external_lex_state = 12},
  [627] = {.lex_state = 0, .external_lex_state = 13},
  [628] = {.lex_state = 0, .external_lex_state = 5},
  [629] = {.lex_state = 0, .external_lex_state = 4},
  [630] = {.lex_state = 0, .external_lex_state = 5},
  [631] = {.lex_state = 0, .external_lex_state = 4},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0, .external_lex_state = 12},
  [634] = {.lex_state = 0, .external_lex_state = 12},
  [635] = {.lex_state = 0, .external_lex_state = 13},
  [636] = {.lex_state = 0, .external_lex_state = 5},
  [637] = {.lex_state = 0, .external_lex_state = 5},
  [638] = {.lex_state = 0, .external_lex_state = 4},
  [639] = {.lex_state = 0, .external_lex_state = 12},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0, .external_lex_state = 4},
  [642] = {.lex_state = 0, .external_lex_state = 13},
  [643] = {.lex_state = 0, .external_lex_state = 13},
  [644] = {.lex_state = 0, .external_lex_state = 12},
  [645] = {.lex_state = 41},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0, .external_lex_state = 4},
  [648] = {.lex_state = 0, .external_lex_state = 13},
  [649] = {.lex_state = 0, .external_lex_state = 12},
  [650] = {.lex_state = 0, .external_lex_state = 4},
  [651] = {.lex_state = 0, .external_lex_state = 13},
  [652] = {.lex_state = 0, .external_lex_state = 13},
  [653] = {.lex_state = 0, .external_lex_state = 4},
  [654] = {.lex_state = 0, .external_lex_state = 4},
  [655] = {.lex_state = 0, .external_lex_state = 4},
  [656] = {.lex_state = 0, .external_lex_state = 4},
  [657] = {.lex_state = 41},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0, .external_lex_state = 13},
  [661] = {.lex_state = 41},
  [662] = {.lex_state = 0, .external_lex_state = 13},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0, .external_lex_state = 4},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0, .external_lex_state = 4},
  [668] = {.lex_state = 41},
  [669] = {.lex_state = 0, .external_lex_state = 13},
  [670] = {.lex_state = 0, .external_lex_state = 9},
  [671] = {.lex_state = 0, .external_lex_state = 5},
  [672] = {.lex_state = 41},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0, .external_lex_state = 13},
  [675] = {.lex_state = 0, .external_lex_state = 9},
  [676] = {.lex_state = 0, .external_lex_state = 4},
  [677] = {.lex_state = 41},
  [678] = {.lex_state = 0, .external_lex_state = 5},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0, .external_lex_state = 4},
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
    [ts_external_token__template_literal_chunk] = true,
  },
  [11] = {
    [ts_external_token_quoted_template_end] = true,
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
    [sym_attribute] = STATE(394),
    [sym_block] = STATE(394),
    [sym_object] = STATE(679),
    [sym_object_start] = STATE(15),
    [aux_sym_body_repeat1] = STATE(394),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym_tuple_start,
    STATE(42), 1,
      sym_for_intro,
    STATE(354), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(565), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [110] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym_tuple_start,
    STATE(77), 1,
      sym_for_intro,
    STATE(150), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(550), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [220] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym_tuple_start,
    STATE(40), 1,
      sym_for_intro,
    STATE(202), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(537), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [330] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym_tuple_start,
    STATE(76), 1,
      sym_for_intro,
    STATE(307), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(543), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [440] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym_tuple_start,
    STATE(78), 1,
      sym_for_intro,
    STATE(257), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(581), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [550] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(21), 1,
      sym__comma,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(14), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [655] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(54), 1,
      sym_for_intro,
    STATE(344), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(567), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [762] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(41), 1,
      sym_for_intro,
    STATE(269), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(590), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [869] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(39), 1,
      sym_for_intro,
    STATE(328), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(531), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [976] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(24), 1,
      sym__comma,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1081] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(80), 1,
      sym_for_intro,
    STATE(208), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(525), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1188] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(48), 1,
      sym_for_intro,
    STATE(167), 1,
      sym_tuple_end,
    STATE(387), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(535), 1,
      sym__tuple_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1295] = 28,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(79), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(85), 1,
      sym_null_lit,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LT_LT,
    ACTIONS(100), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(103), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(32), 1,
      sym__comma,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(82), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(14), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1400] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym_tuple_start,
    STATE(202), 1,
      sym_object_end,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(537), 1,
      sym__object_elems,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1504] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(272), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(393), 1,
      sym_expression,
    STATE(616), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1605] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(169), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(393), 1,
      sym_expression,
    STATE(532), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1706] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(347), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(393), 1,
      sym_expression,
    STATE(534), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1807] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(393), 1,
      sym_expression,
    STATE(573), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1908] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(317), 1,
      sym__function_call_end,
    STATE(387), 1,
      sym_conditional,
    STATE(393), 1,
      sym_expression,
    STATE(533), 1,
      sym_function_arguments,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2009] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(361), 1,
      sym_object_elem,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2107] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(467), 1,
      sym_conditional,
    STATE(479), 1,
      sym_expression,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2205] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(467), 1,
      sym_conditional,
    STATE(492), 1,
      sym_expression,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2303] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(361), 1,
      sym_object_elem,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2401] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(467), 1,
      sym_conditional,
    STATE(478), 1,
      sym_expression,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2499] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(467), 1,
      sym_conditional,
    STATE(514), 1,
      sym_expression,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2597] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(467), 1,
      sym_conditional,
    STATE(493), 1,
      sym_expression,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2695] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(467), 1,
      sym_conditional,
    STATE(477), 1,
      sym_expression,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2793] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(402), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2888] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(402), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2983] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(402), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3078] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(361), 1,
      sym_object_elem,
    STATE(387), 1,
      sym_conditional,
    STATE(524), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3173] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(402), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3268] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(398), 1,
      sym_expression,
    STATE(409), 1,
      sym_conditional,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3360] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
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
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3452] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(467), 1,
      sym_conditional,
    STATE(485), 1,
      sym_expression,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3544] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
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
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3636] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(392), 1,
      sym_expression,
    STATE(409), 1,
      sym_conditional,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3728] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(409), 1,
      sym_conditional,
    STATE(411), 1,
      sym_expression,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3820] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
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
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3912] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(404), 1,
      sym_expression,
    STATE(409), 1,
      sym_conditional,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4004] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(602), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4096] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
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
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4188] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_expression,
    STATE(409), 1,
      sym_conditional,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4280] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(391), 1,
      sym_expression,
    STATE(409), 1,
      sym_conditional,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4372] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(466), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4464] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
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
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4556] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(409), 1,
      sym_conditional,
    STATE(410), 1,
      sym_expression,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4648] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
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
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4740] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(588), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4832] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(595), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4924] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(396), 1,
      sym_expression,
    STATE(409), 1,
      sym_conditional,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5016] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(596), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5108] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_expression,
    STATE(409), 1,
      sym_conditional,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5200] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(473), 1,
      sym_conditional,
    STATE(511), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(238), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5292] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
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
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5384] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(473), 1,
      sym_conditional,
    STATE(500), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(238), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5476] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(356), 1,
      sym_conditional,
    STATE(357), 1,
      sym_expression,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(92), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5568] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(583), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5660] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(586), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5752] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(609), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5844] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(409), 1,
      sym_conditional,
    STATE(415), 1,
      sym_expression,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5936] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(613), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6028] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(356), 1,
      sym_conditional,
    STATE(358), 1,
      sym_expression,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(92), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6120] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(473), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(238), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6212] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(614), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6304] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(526), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6396] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(473), 1,
      sym_conditional,
    STATE(519), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(238), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6488] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(457), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6580] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(402), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6672] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(552), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6764] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(546), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6856] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(473), 1,
      sym_conditional,
    STATE(494), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(238), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6948] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(559), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7040] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(473), 1,
      sym_conditional,
    STATE(508), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(238), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7132] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(541), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7224] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(387), 1,
      sym_conditional,
    STATE(528), 1,
      sym_expression,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7316] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
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
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7408] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(473), 1,
      sym_conditional,
    STATE(476), 1,
      sym_expression,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(238), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7500] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(405), 1,
      sym_expression,
    STATE(409), 1,
      sym_conditional,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7592] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(91), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7678] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(134), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7764] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(237), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7850] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7936] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(105), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8022] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(107), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8108] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(236), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8194] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(108), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8280] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8366] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8452] = 8,
    STATE(160), 1,
      sym_index,
    STATE(162), 1,
      sym_get_attr,
    STATE(164), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(165), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(216), 12,
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
    ACTIONS(214), 20,
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
  [8510] = 20,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_DOT_STAR,
    ACTIONS(228), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    ACTIONS(242), 1,
      anon_sym_AMP_AMP,
    ACTIONS(244), 1,
      anon_sym_PIPE_PIPE,
    STATE(160), 1,
      sym_index,
    STATE(162), 1,
      sym_get_attr,
    STATE(164), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(236), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(238), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(240), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(165), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(220), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(218), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
  [8592] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(181), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8678] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(130), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8764] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8850] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(235), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8936] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(240), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9022] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(239), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9108] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9194] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(220), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9280] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(222), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9366] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(229), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9452] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9538] = 10,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    STATE(160), 1,
      sym_index,
    STATE(162), 1,
      sym_get_attr,
    STATE(164), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(165), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 11,
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
    ACTIONS(246), 18,
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
  [9600] = 8,
    STATE(160), 1,
      sym_index,
    STATE(162), 1,
      sym_get_attr,
    STATE(164), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(165), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 12,
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
    ACTIONS(246), 20,
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
  [9658] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(133), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9744] = 11,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    STATE(160), 1,
      sym_index,
    STATE(162), 1,
      sym_get_attr,
    STATE(164), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(165), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 11,
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
    ACTIONS(246), 16,
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
  [9808] = 13,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    STATE(160), 1,
      sym_index,
    STATE(162), 1,
      sym_get_attr,
    STATE(164), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(236), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(238), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(165), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(246), 14,
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
  [9876] = 14,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    STATE(160), 1,
      sym_index,
    STATE(162), 1,
      sym_get_attr,
    STATE(164), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(236), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(238), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(240), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(165), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(246), 12,
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
  [9946] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(192), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(674), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_tuple,
      sym_object,
    STATE(345), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(348), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(349), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(291), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10032] = 15,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    ACTIONS(242), 1,
      anon_sym_AMP_AMP,
    STATE(160), 1,
      sym_index,
    STATE(162), 1,
      sym_get_attr,
    STATE(164), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(236), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(238), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(240), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(165), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(246), 11,
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
  [10104] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(208), 1,
      sym_null_lit,
    ACTIONS(212), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(660), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(149), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(104), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10190] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10276] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(136), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10362] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(183), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10448] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(185), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10534] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(652), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(209), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(197), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10620] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(178), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10706] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10792] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(172), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(176), 1,
      sym_null_lit,
    ACTIONS(180), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(669), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(254), 2,
      sym_tuple,
      sym_object,
    STATE(258), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(259), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(281), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(184), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10878] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(234), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10964] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(232), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11050] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
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
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(651), 1,
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
    STATE(290), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(302), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(309), 2,
      sym_tuple,
      sym_object,
    STATE(335), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(311), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(231), 11,
      sym__expr_term,
      sym__index_expr_term,
      sym__attr_expr_term,
      sym__splat_expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11136] = 7,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(124), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 10,
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
    ACTIONS(250), 20,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(124), 3,
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
  [11244] = 7,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(124), 3,
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
  [11298] = 7,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(126), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(270), 10,
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
    ACTIONS(268), 20,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(144), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(125), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(274), 10,
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
    ACTIONS(272), 20,
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
  [11406] = 8,
    STATE(215), 1,
      sym_index,
    STATE(218), 1,
      sym_splat,
    STATE(219), 1,
      sym_get_attr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(216), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(216), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(214), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [11460] = 15,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(288), 1,
      anon_sym_AMP_AMP,
    STATE(215), 1,
      sym_index,
    STATE(218), 1,
      sym_splat,
    STATE(219), 1,
      sym_get_attr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(216), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(246), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [11528] = 14,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(215), 1,
      sym_index,
    STATE(218), 1,
      sym_splat,
    STATE(219), 1,
      sym_get_attr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(216), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(246), 14,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11594] = 20,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(288), 1,
      anon_sym_AMP_AMP,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_DOT_STAR,
    ACTIONS(296), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(298), 1,
      anon_sym_PIPE_PIPE,
    STATE(215), 1,
      sym_index,
    STATE(218), 1,
      sym_splat,
    STATE(219), 1,
      sym_get_attr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(216), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(218), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [11672] = 13,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(215), 1,
      sym_index,
    STATE(218), 1,
      sym_splat,
    STATE(219), 1,
      sym_get_attr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(216), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(246), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11736] = 11,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(215), 1,
      sym_index,
    STATE(218), 1,
      sym_splat,
    STATE(219), 1,
      sym_get_attr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(216), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 18,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11796] = 8,
    STATE(215), 1,
      sym_index,
    STATE(218), 1,
      sym_splat,
    STATE(219), 1,
      sym_get_attr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(216), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [11850] = 10,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(215), 1,
      sym_index,
    STATE(218), 1,
      sym_splat,
    STATE(219), 1,
      sym_get_attr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(216), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 20,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [11908] = 7,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(141), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(270), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [11958] = 5,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 12,
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
    ACTIONS(300), 19,
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
  [12004] = 7,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(274), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [12054] = 7,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(142), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [12104] = 7,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(142), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(266), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [12154] = 7,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(142), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [12204] = 3,
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
  [12245] = 3,
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
  [12286] = 3,
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
  [12327] = 3,
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
  [12368] = 3,
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
  [12409] = 3,
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
  [12450] = 3,
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
  [12491] = 3,
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
  [12532] = 3,
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
  [12573] = 3,
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
  [12614] = 3,
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
  [12655] = 3,
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
  [12696] = 3,
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
  [12737] = 3,
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
  [12778] = 3,
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
  [12819] = 3,
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
  [12860] = 3,
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
  [12901] = 3,
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
  [12942] = 3,
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
  [12983] = 3,
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
  [13024] = 3,
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
  [13065] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 12,
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
    ACTIONS(396), 20,
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
  [13106] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 12,
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
    ACTIONS(400), 20,
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
  [13147] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 12,
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
    ACTIONS(404), 20,
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
  [13188] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 12,
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
    ACTIONS(408), 20,
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
  [13229] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 12,
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
    ACTIONS(412), 20,
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
  [13270] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 12,
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
    ACTIONS(416), 20,
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
  [13311] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 12,
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
    ACTIONS(420), 20,
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
  [13352] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 12,
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
    ACTIONS(424), 20,
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
  [13393] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 12,
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
    ACTIONS(428), 20,
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
  [13434] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 12,
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
    ACTIONS(432), 20,
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
  [13475] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 12,
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
    ACTIONS(436), 20,
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
  [13516] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 12,
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
    ACTIONS(440), 20,
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
  [13557] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 12,
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
    ACTIONS(444), 20,
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
  [13598] = 5,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [13641] = 13,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    STATE(252), 1,
      sym_index,
    STATE(264), 1,
      sym_get_attr,
    STATE(265), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(266), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 11,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13699] = 19,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DOT,
    ACTIONS(464), 1,
      anon_sym_DOT_STAR,
    ACTIONS(466), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    STATE(252), 1,
      sym_index,
    STATE(264), 1,
      sym_get_attr,
    STATE(265), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(468), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(266), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(218), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [13769] = 10,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    STATE(252), 1,
      sym_index,
    STATE(264), 1,
      sym_get_attr,
    STATE(265), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(266), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [13821] = 8,
    STATE(252), 1,
      sym_index,
    STATE(264), 1,
      sym_get_attr,
    STATE(265), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(266), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(216), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(214), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [13869] = 14,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    STATE(252), 1,
      sym_index,
    STATE(264), 1,
      sym_get_attr,
    STATE(265), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(468), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(266), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13929] = 8,
    STATE(252), 1,
      sym_index,
    STATE(264), 1,
      sym_get_attr,
    STATE(265), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(266), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [13977] = 15,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    STATE(252), 1,
      sym_index,
    STATE(264), 1,
      sym_get_attr,
    STATE(265), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(468), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(266), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [14039] = 11,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    STATE(252), 1,
      sym_index,
    STATE(264), 1,
      sym_get_attr,
    STATE(265), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(266), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 13,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14093] = 3,
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
    ACTIONS(356), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14130] = 3,
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
    ACTIONS(352), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14167] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14204] = 3,
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
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14241] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14278] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14315] = 3,
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
    ACTIONS(384), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14352] = 3,
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
    ACTIONS(328), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14389] = 3,
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
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14426] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14463] = 3,
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
    ACTIONS(392), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14500] = 3,
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
    ACTIONS(332), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14537] = 3,
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
    ACTIONS(376), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14574] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14611] = 3,
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
    ACTIONS(320), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14648] = 3,
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
    ACTIONS(336), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14685] = 3,
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
    ACTIONS(340), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14722] = 3,
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
    ACTIONS(316), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14759] = 3,
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
    ACTIONS(360), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14796] = 3,
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
    ACTIONS(372), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14833] = 3,
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
    ACTIONS(344), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14870] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14907] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14944] = 3,
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
    ACTIONS(364), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [14981] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15018] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15055] = 3,
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
    ACTIONS(368), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15092] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15129] = 3,
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
    ACTIONS(348), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15166] = 3,
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
    ACTIONS(380), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15203] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15277] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15314] = 3,
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
    ACTIONS(388), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [15351] = 11,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    STATE(289), 1,
      sym_get_attr,
    STATE(333), 1,
      sym_splat,
    STATE(342), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(331), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(248), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 11,
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
  [15403] = 13,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    STATE(289), 1,
      sym_get_attr,
    STATE(333), 1,
      sym_splat,
    STATE(342), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(331), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 9,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15459] = 8,
    STATE(289), 1,
      sym_get_attr,
    STATE(333), 1,
      sym_splat,
    STATE(342), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(331), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(248), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 15,
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
  [15505] = 8,
    STATE(289), 1,
      sym_get_attr,
    STATE(333), 1,
      sym_splat,
    STATE(342), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(331), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(216), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(214), 15,
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
  [15551] = 8,
    STATE(322), 1,
      sym_index,
    STATE(324), 1,
      sym_get_attr,
    STATE(329), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(332), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(216), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(214), 15,
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
  [15597] = 7,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(274), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(272), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [15641] = 19,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_DOT_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(496), 1,
      anon_sym_SLASH,
    ACTIONS(504), 1,
      anon_sym_AMP_AMP,
    ACTIONS(506), 1,
      anon_sym_PIPE_PIPE,
    STATE(322), 1,
      sym_index,
    STATE(324), 1,
      sym_get_attr,
    STATE(329), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(494), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(498), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(500), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(502), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(332), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(218), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [15709] = 7,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(233), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(264), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [15753] = 7,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(262), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(233), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(260), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [15797] = 10,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    STATE(289), 1,
      sym_get_attr,
    STATE(333), 1,
      sym_splat,
    STATE(342), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(331), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(248), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 13,
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
  [15847] = 7,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(227), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(268), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [15891] = 15,
    ACTIONS(496), 1,
      anon_sym_SLASH,
    ACTIONS(504), 1,
      anon_sym_AMP_AMP,
    STATE(322), 1,
      sym_index,
    STATE(324), 1,
      sym_get_attr,
    STATE(329), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(494), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(498), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(500), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(502), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(332), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 6,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15951] = 14,
    ACTIONS(496), 1,
      anon_sym_SLASH,
    STATE(322), 1,
      sym_index,
    STATE(324), 1,
      sym_get_attr,
    STATE(329), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(494), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(498), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(500), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(502), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(332), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 7,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16009] = 7,
    ACTIONS(508), 1,
      anon_sym_LBRACK,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(263), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(233), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [16053] = 13,
    ACTIONS(496), 1,
      anon_sym_SLASH,
    STATE(322), 1,
      sym_index,
    STATE(324), 1,
      sym_get_attr,
    STATE(329), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(494), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(498), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(500), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(332), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(246), 9,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16109] = 11,
    ACTIONS(496), 1,
      anon_sym_SLASH,
    STATE(322), 1,
      sym_index,
    STATE(324), 1,
      sym_get_attr,
    STATE(329), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(494), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(332), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 11,
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
  [16161] = 8,
    STATE(322), 1,
      sym_index,
    STATE(324), 1,
      sym_get_attr,
    STATE(329), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(332), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 15,
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
  [16207] = 10,
    ACTIONS(496), 1,
      anon_sym_SLASH,
    STATE(322), 1,
      sym_index,
    STATE(324), 1,
      sym_get_attr,
    STATE(329), 1,
      sym_splat,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(494), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(332), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(248), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 13,
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
  [16257] = 19,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_DOT_STAR,
    ACTIONS(520), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(524), 1,
      anon_sym_AMP_AMP,
    ACTIONS(526), 1,
      anon_sym_PIPE_PIPE,
    STATE(289), 1,
      sym_get_attr,
    STATE(333), 1,
      sym_splat,
    STATE(342), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(522), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(331), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(218), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [16325] = 14,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    STATE(289), 1,
      sym_get_attr,
    STATE(333), 1,
      sym_splat,
    STATE(342), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(522), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(331), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 7,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16383] = 15,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(524), 1,
      anon_sym_AMP_AMP,
    STATE(289), 1,
      sym_get_attr,
    STATE(333), 1,
      sym_splat,
    STATE(342), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(248), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(522), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(331), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(246), 6,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16443] = 7,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(244), 3,
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
  [16485] = 7,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(262), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(244), 3,
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
  [16527] = 7,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(266), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(248), 3,
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
  [16569] = 7,
    ACTIONS(528), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(244), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 15,
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
  [16611] = 7,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(274), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(246), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(272), 15,
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
  [16653] = 7,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(262), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(248), 3,
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
  [16695] = 7,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(243), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(268), 15,
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
  [16737] = 7,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(341), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(248), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 15,
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
  [16779] = 7,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(274), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(272), 15,
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
  [16821] = 7,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(268), 15,
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
  [16863] = 5,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [16900] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [16931] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [16962] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [16993] = 5,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 15,
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
  [17028] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17059] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17090] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17121] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17152] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17245] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17276] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17307] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17338] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17369] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17400] = 5,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 15,
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
  [17435] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17466] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17497] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17528] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17559] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17590] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17621] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17652] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17683] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17714] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17776] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17807] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17838] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17869] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17900] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17931] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17962] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [17993] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [18024] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 15,
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
  [18053] = 3,
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
  [18082] = 3,
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
  [18111] = 3,
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
  [18140] = 3,
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
  [18169] = 3,
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
  [18198] = 3,
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
  [18227] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 15,
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
  [18256] = 3,
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
  [18285] = 3,
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
  [18314] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 15,
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
  [18343] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 15,
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
  [18372] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 15,
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
  [18401] = 3,
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
  [18430] = 3,
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
  [18459] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 15,
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
  [18488] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 15,
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
  [18517] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 15,
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
  [18546] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 15,
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
  [18575] = 3,
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
  [18604] = 3,
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
  [18633] = 3,
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
  [18662] = 3,
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
  [18691] = 3,
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
  [18720] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 15,
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
  [18749] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 15,
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
  [18778] = 3,
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
  [18807] = 3,
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
  [18836] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 15,
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
  [18865] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 15,
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
  [18894] = 3,
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
  [18923] = 3,
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
  [18952] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 15,
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
  [18981] = 3,
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
  [19010] = 3,
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
  [19039] = 3,
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
  [19068] = 3,
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
  [19097] = 3,
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
  [19126] = 3,
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
  [19155] = 3,
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
  [19184] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 15,
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
  [19213] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 15,
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
  [19242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 15,
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
  [19271] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 15,
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
  [19300] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 15,
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
  [19329] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 15,
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
  [19358] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 15,
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
  [19387] = 3,
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
  [19416] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 15,
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
  [19445] = 3,
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
  [19474] = 3,
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
  [19503] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 15,
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
  [19532] = 3,
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
  [19561] = 3,
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
  [19590] = 3,
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
  [19619] = 3,
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
  [19648] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 15,
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
  [19677] = 3,
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
  [19706] = 3,
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
  [19735] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 15,
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
  [19764] = 3,
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
  [19793] = 3,
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
  [19822] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 15,
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
  [19851] = 3,
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
  [19880] = 3,
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
  [19909] = 3,
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
  [19938] = 3,
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
  [19967] = 3,
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
  [19996] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(218), 11,
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
  [20022] = 4,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(546), 10,
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
  [20050] = 3,
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
    ACTIONS(552), 11,
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
  [20076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(558), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(556), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20101] = 3,
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
  [20126] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(564), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(68), 10,
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
  [20151] = 13,
    ACTIONS(566), 1,
      sym_quoted_template_end,
    ACTIONS(568), 1,
      sym__template_literal_chunk,
    ACTIONS(570), 1,
      sym_template_interpolation_start,
    ACTIONS(572), 1,
      sym_template_directive_start,
    STATE(373), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(414), 1,
      aux_sym_template_literal_repeat1,
    STATE(442), 1,
      sym_template_if_branch,
    STATE(443), 1,
      sym_template_literal,
    STATE(634), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(382), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20195] = 12,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(574), 1,
      sym__template_literal_chunk,
    ACTIONS(576), 1,
      sym_template_interpolation_start,
    ACTIONS(578), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(413), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_if_branch,
    STATE(627), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(430), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20237] = 12,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(574), 1,
      sym__template_literal_chunk,
    ACTIONS(576), 1,
      sym_template_interpolation_start,
    ACTIONS(580), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(413), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_if_branch,
    STATE(648), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(430), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20279] = 13,
    ACTIONS(568), 1,
      sym__template_literal_chunk,
    ACTIONS(570), 1,
      sym_template_interpolation_start,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(582), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(414), 1,
      aux_sym_template_literal_repeat1,
    STATE(438), 1,
      sym_template_literal,
    STATE(442), 1,
      sym_template_if_branch,
    STATE(644), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(382), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20323] = 13,
    ACTIONS(568), 1,
      sym__template_literal_chunk,
    ACTIONS(570), 1,
      sym_template_interpolation_start,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(584), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(414), 1,
      aux_sym_template_literal_repeat1,
    STATE(442), 1,
      sym_template_if_branch,
    STATE(456), 1,
      sym_template_literal,
    STATE(639), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(382), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20367] = 3,
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
    ACTIONS(556), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20391] = 12,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    STATE(368), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(439), 1,
      sym_template_if_branch,
    STATE(502), 1,
      sym_template_for_end,
    STATE(568), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(498), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20433] = 12,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(574), 1,
      sym__template_literal_chunk,
    ACTIONS(576), 1,
      sym_template_interpolation_start,
    ACTIONS(592), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(413), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_if_branch,
    STATE(643), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(430), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20475] = 12,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(574), 1,
      sym__template_literal_chunk,
    ACTIONS(576), 1,
      sym_template_interpolation_start,
    ACTIONS(594), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(413), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_if_branch,
    STATE(635), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(430), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20517] = 13,
    ACTIONS(568), 1,
      sym__template_literal_chunk,
    ACTIONS(570), 1,
      sym_template_interpolation_start,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(596), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(414), 1,
      aux_sym_template_literal_repeat1,
    STATE(442), 1,
      sym_template_if_branch,
    STATE(453), 1,
      sym_template_literal,
    STATE(626), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(382), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20561] = 13,
    ACTIONS(568), 1,
      sym__template_literal_chunk,
    ACTIONS(570), 1,
      sym_template_interpolation_start,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(598), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(414), 1,
      aux_sym_template_literal_repeat1,
    STATE(442), 1,
      sym_template_if_branch,
    STATE(450), 1,
      sym_template_literal,
    STATE(633), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(382), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20605] = 12,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(600), 1,
      sym_template_directive_start,
    STATE(368), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(420), 1,
      sym_template_for_end,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(439), 1,
      sym_template_if_branch,
    STATE(544), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(498), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20647] = 12,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(602), 1,
      sym_template_directive_start,
    STATE(368), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(439), 1,
      sym_template_if_branch,
    STATE(464), 1,
      sym_template_for_end,
    STATE(593), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(498), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20689] = 12,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(574), 1,
      sym__template_literal_chunk,
    ACTIONS(576), 1,
      sym_template_interpolation_start,
    ACTIONS(604), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(413), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_if_branch,
    STATE(642), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(430), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20731] = 11,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    STATE(368), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(439), 1,
      sym_template_if_branch,
    STATE(675), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(498), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20770] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(608), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(606), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20793] = 11,
    ACTIONS(610), 1,
      sym_quoted_template_end,
    ACTIONS(612), 1,
      sym__template_literal_chunk,
    ACTIONS(615), 1,
      sym_template_interpolation_start,
    ACTIONS(618), 1,
      sym_template_directive_start,
    STATE(373), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(414), 1,
      aux_sym_template_literal_repeat1,
    STATE(442), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20832] = 11,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(574), 1,
      sym__template_literal_chunk,
    ACTIONS(576), 1,
      sym_template_interpolation_start,
    ACTIONS(621), 1,
      sym_heredoc_identifier,
    STATE(374), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(413), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(430), 2,
      sym_template_for,
      sym_template_if,
    STATE(383), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20871] = 11,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    STATE(368), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(439), 1,
      sym_template_if_branch,
    STATE(670), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(498), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20910] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(625), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(623), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20933] = 11,
    ACTIONS(568), 1,
      sym__template_literal_chunk,
    ACTIONS(570), 1,
      sym_template_interpolation_start,
    ACTIONS(572), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym_quoted_template_end,
    STATE(373), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(414), 1,
      aux_sym_template_literal_repeat1,
    STATE(442), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [20972] = 11,
    ACTIONS(610), 1,
      sym_heredoc_identifier,
    ACTIONS(618), 1,
      sym_template_directive_start,
    ACTIONS(627), 1,
      sym__template_literal_chunk,
    ACTIONS(630), 1,
      sym_template_interpolation_start,
    STATE(374), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(413), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(430), 2,
      sym_template_for,
      sym_template_if,
    STATE(383), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21011] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(621), 1,
      sym_template_directive_start,
    STATE(368), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(439), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(498), 2,
      sym_template_for,
      sym_template_if,
    STATE(385), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21047] = 10,
    ACTIONS(618), 1,
      sym_template_directive_start,
    ACTIONS(633), 1,
      sym__template_literal_chunk,
    ACTIONS(636), 1,
      sym_template_interpolation_start,
    STATE(368), 1,
      sym_template_for_start,
    STATE(380), 1,
      sym_template_if_intro,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(439), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(498), 2,
      sym_template_for,
      sym_template_if,
    STATE(385), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21083] = 3,
    ACTIONS(554), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [21103] = 3,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(218), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [21123] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      sym_block_end,
    STATE(615), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(394), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21145] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      sym_block_end,
    STATE(539), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(394), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21167] = 7,
    ACTIONS(641), 1,
      anon_sym_EQ,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      sym_quoted_template_start,
    STATE(388), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(395), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21191] = 7,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(651), 1,
      sym_ellipsis,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    STATE(186), 1,
      sym_object_end,
    STATE(547), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21214] = 7,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    ACTIONS(655), 1,
      sym_ellipsis,
    STATE(351), 1,
      sym_object_end,
    STATE(549), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21237] = 7,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      sym_ellipsis,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    STATE(29), 1,
      sym__comma,
    STATE(412), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21260] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(399), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21277] = 6,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    ACTIONS(647), 1,
      sym_quoted_template_start,
    ACTIONS(667), 1,
      sym_identifier,
    STATE(389), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(401), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21298] = 7,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    ACTIONS(669), 1,
      sym_ellipsis,
    STATE(321), 1,
      sym_object_end,
    STATE(582), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21321] = 5,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      sym__comma,
    STATE(397), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(671), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [21340] = 7,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    ACTIONS(676), 1,
      sym_ellipsis,
    STATE(285), 1,
      sym_object_end,
    STATE(592), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21363] = 4,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(678), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(399), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21380] = 7,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    ACTIONS(683), 1,
      sym_ellipsis,
    STATE(154), 1,
      sym_object_end,
    STATE(555), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21403] = 5,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(690), 1,
      sym_quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(401), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21421] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(671), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [21435] = 6,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    STATE(308), 1,
      sym_tuple_end,
    STATE(605), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21455] = 6,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    STATE(282), 1,
      sym_tuple_end,
    STATE(608), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21475] = 6,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    STATE(196), 1,
      sym_tuple_end,
    STATE(553), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21495] = 6,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__comma,
    STATE(454), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21515] = 4,
    ACTIONS(699), 1,
      sym__template_literal_chunk,
    STATE(407), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(697), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21531] = 4,
    ACTIONS(702), 1,
      sym__template_literal_chunk,
    STATE(408), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(697), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21547] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(218), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21559] = 6,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    STATE(163), 1,
      sym_tuple_end,
    STATE(554), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21579] = 6,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      anon_sym_if,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    STATE(294), 1,
      sym_tuple_end,
    STATE(542), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21599] = 6,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      sym_ellipsis,
    STATE(33), 1,
      sym__comma,
    STATE(397), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21619] = 4,
    ACTIONS(709), 1,
      sym__template_literal_chunk,
    STATE(408), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(711), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21635] = 4,
    ACTIONS(713), 1,
      sym__template_literal_chunk,
    STATE(407), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(711), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21651] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21663] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(715), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21674] = 5,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    STATE(325), 1,
      sym_object_end,
    STATE(566), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21691] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(717), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21702] = 5,
    ACTIONS(719), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_if,
    ACTIONS(723), 1,
      sym_strip_marker,
    ACTIONS(725), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21719] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(727), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21730] = 4,
    ACTIONS(729), 1,
      sym__template_literal_chunk,
    STATE(421), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(697), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21745] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(732), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21756] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(734), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21767] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(736), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21778] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(736), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21789] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(717), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21800] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(738), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21811] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(740), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21822] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(742), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(744), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21844] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(734), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21855] = 4,
    ACTIONS(746), 1,
      sym__template_literal_chunk,
    STATE(421), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(711), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21870] = 5,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    STATE(214), 1,
      sym_object_end,
    STATE(560), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21887] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21898] = 5,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    STATE(355), 1,
      sym_object_end,
    STATE(551), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21915] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(715), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21926] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(750), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21937] = 3,
    ACTIONS(752), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(754), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21950] = 5,
    ACTIONS(756), 1,
      sym_template_directive_start,
    STATE(376), 1,
      sym_template_else_intro,
    STATE(503), 1,
      sym_template_if_end,
    STATE(569), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21967] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(758), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21978] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(750), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21989] = 5,
    ACTIONS(760), 1,
      sym_template_directive_start,
    STATE(376), 1,
      sym_template_else_intro,
    STATE(426), 1,
      sym_template_if_end,
    STATE(545), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22006] = 3,
    ACTIONS(762), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(754), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22019] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(764), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22030] = 5,
    ACTIONS(766), 1,
      sym_template_directive_start,
    STATE(376), 1,
      sym_template_else_intro,
    STATE(418), 1,
      sym_template_if_end,
    STATE(594), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22047] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(732), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22058] = 5,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    STATE(152), 1,
      sym_object_end,
    STATE(556), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22075] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(744), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22086] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(742), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22097] = 3,
    ACTIONS(768), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(754), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22110] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(740), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22121] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(738), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22132] = 3,
    ACTIONS(770), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(754), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22145] = 5,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym__comma,
    STATE(397), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22162] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(774), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22173] = 3,
    ACTIONS(776), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(754), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22186] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(778), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22199] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(774), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22210] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(764), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22221] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_if,
    STATE(286), 1,
      sym_object_end,
    STATE(591), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22238] = 5,
    ACTIONS(719), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_if,
    ACTIONS(780), 1,
      sym_strip_marker,
    ACTIONS(782), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22255] = 5,
    ACTIONS(719), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_if,
    ACTIONS(784), 1,
      sym_strip_marker,
    ACTIONS(786), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22272] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22283] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(727), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22294] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(758), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22305] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(788), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [22317] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(218), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22327] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22337] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(732), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22347] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(734), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22357] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22367] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(736), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22377] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(218), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22387] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(794), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22397] = 4,
    ACTIONS(719), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_if,
    ACTIONS(796), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22411] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22421] = 4,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(800), 1,
      sym_strip_marker,
    ACTIONS(802), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22435] = 4,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(804), 1,
      sym_strip_marker,
    ACTIONS(806), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22449] = 4,
    ACTIONS(142), 1,
      sym_strip_marker,
    ACTIONS(144), 1,
      sym_template_interpolation_end,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22463] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(808), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22473] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22483] = 4,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(812), 1,
      anon_sym_if,
    ACTIONS(814), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22497] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(764), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22507] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(774), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22517] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22527] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(738), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22537] = 4,
    ACTIONS(816), 1,
      sym__template_literal_chunk,
    STATE(496), 1,
      aux_sym_template_literal_repeat1,
    STATE(649), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22551] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(740), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22561] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(742), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22571] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(715), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22581] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(750), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22591] = 4,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(818), 1,
      sym_strip_marker,
    ACTIONS(820), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22605] = 4,
    ACTIONS(138), 1,
      sym_strip_marker,
    ACTIONS(140), 1,
      sym_template_interpolation_end,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22619] = 4,
    ACTIONS(822), 1,
      anon_sym_QMARK,
    ACTIONS(824), 1,
      sym_strip_marker,
    ACTIONS(826), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22633] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(828), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22643] = 4,
    ACTIONS(711), 1,
      sym_quoted_template_end,
    ACTIONS(830), 1,
      sym__template_literal_chunk,
    STATE(521), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22657] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(832), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22667] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(744), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22677] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(758), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22687] = 4,
    ACTIONS(822), 1,
      anon_sym_QMARK,
    ACTIONS(834), 1,
      sym_strip_marker,
    ACTIONS(836), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22701] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(838), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22711] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(727), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22721] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(717), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22731] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(840), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22741] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(842), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22751] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(844), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22761] = 4,
    ACTIONS(846), 1,
      sym_strip_marker,
    ACTIONS(848), 1,
      anon_sym_else,
    ACTIONS(850), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22775] = 4,
    ACTIONS(822), 1,
      anon_sym_QMARK,
    ACTIONS(852), 1,
      sym_strip_marker,
    ACTIONS(854), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22789] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(856), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22799] = 4,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(812), 1,
      anon_sym_if,
    ACTIONS(858), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22813] = 4,
    ACTIONS(822), 1,
      anon_sym_QMARK,
    ACTIONS(860), 1,
      sym_strip_marker,
    ACTIONS(862), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22827] = 4,
    ACTIONS(822), 1,
      anon_sym_QMARK,
    ACTIONS(864), 1,
      sym_strip_marker,
    ACTIONS(866), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22841] = 4,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(812), 1,
      anon_sym_if,
    ACTIONS(868), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22855] = 4,
    ACTIONS(154), 1,
      sym_strip_marker,
    ACTIONS(156), 1,
      sym_template_interpolation_end,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22869] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(870), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22879] = 4,
    ACTIONS(848), 1,
      anon_sym_else,
    ACTIONS(872), 1,
      sym_strip_marker,
    ACTIONS(874), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22893] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(876), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22903] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(878), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22913] = 4,
    ACTIONS(822), 1,
      anon_sym_QMARK,
    ACTIONS(880), 1,
      sym_strip_marker,
    ACTIONS(882), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22927] = 4,
    ACTIONS(848), 1,
      anon_sym_else,
    ACTIONS(884), 1,
      sym_strip_marker,
    ACTIONS(886), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22941] = 4,
    ACTIONS(697), 1,
      sym_quoted_template_end,
    ACTIONS(888), 1,
      sym__template_literal_chunk,
    STATE(521), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22955] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [22965] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(891), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22975] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(893), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [22987] = 3,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22998] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23009] = 3,
    ACTIONS(897), 1,
      sym_strip_marker,
    ACTIONS(899), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23020] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(901), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23031] = 3,
    ACTIONS(903), 1,
      sym_strip_marker,
    ACTIONS(905), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23042] = 3,
    ACTIONS(907), 1,
      sym_strip_marker,
    ACTIONS(909), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23053] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23064] = 3,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23075] = 3,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23086] = 3,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23097] = 3,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23108] = 3,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(812), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23119] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23130] = 3,
    ACTIONS(917), 1,
      anon_sym_else,
    ACTIONS(919), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23141] = 3,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(480), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23152] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(921), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23163] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(923), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23174] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23185] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23196] = 3,
    ACTIONS(925), 1,
      sym_template_directive_start,
    STATE(431), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23207] = 3,
    ACTIONS(927), 1,
      sym_template_directive_start,
    STATE(425), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23218] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(929), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23229] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23240] = 3,
    ACTIONS(917), 1,
      anon_sym_else,
    ACTIONS(931), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23251] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23262] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23273] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23284] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(933), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23295] = 3,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23306] = 3,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23317] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23328] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23339] = 3,
    ACTIONS(935), 1,
      sym_identifier,
    ACTIONS(937), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23350] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(939), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23361] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(941), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23372] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23383] = 3,
    ACTIONS(943), 1,
      sym_identifier,
    ACTIONS(945), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23394] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23405] = 3,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(951), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23416] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23427] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23438] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23449] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23460] = 3,
    ACTIONS(955), 1,
      sym_template_directive_start,
    STATE(470), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23471] = 3,
    ACTIONS(957), 1,
      sym_template_directive_start,
    STATE(472), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23482] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(959), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23493] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(961), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23504] = 3,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23515] = 3,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23526] = 3,
    ACTIONS(969), 1,
      sym_strip_marker,
    ACTIONS(971), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23537] = 3,
    ACTIONS(782), 1,
      anon_sym_endfor,
    ACTIONS(973), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23548] = 3,
    ACTIONS(975), 1,
      sym_strip_marker,
    ACTIONS(977), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23559] = 3,
    ACTIONS(874), 1,
      anon_sym_endif,
    ACTIONS(979), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23570] = 3,
    ACTIONS(850), 1,
      anon_sym_endif,
    ACTIONS(981), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23581] = 3,
    ACTIONS(983), 1,
      sym_strip_marker,
    ACTIONS(985), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23592] = 3,
    ACTIONS(987), 1,
      sym_strip_marker,
    ACTIONS(989), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23603] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23614] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23625] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(991), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23636] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(993), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [23645] = 3,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23656] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(999), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23667] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(1001), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23678] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23689] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1007), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23700] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23711] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23722] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23733] = 3,
    ACTIONS(1009), 1,
      sym_template_directive_start,
    STATE(423), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23744] = 3,
    ACTIONS(1011), 1,
      sym_template_directive_start,
    STATE(424), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23755] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23766] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(1015), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23777] = 3,
    ACTIONS(1017), 1,
      sym_strip_marker,
    ACTIONS(1019), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23788] = 3,
    ACTIONS(1021), 1,
      sym_strip_marker,
    ACTIONS(1023), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23799] = 3,
    ACTIONS(786), 1,
      anon_sym_endfor,
    ACTIONS(1025), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23810] = 3,
    ACTIONS(1027), 1,
      sym_strip_marker,
    ACTIONS(1029), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23821] = 3,
    ACTIONS(886), 1,
      anon_sym_endif,
    ACTIONS(1031), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23832] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(1033), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23843] = 3,
    ACTIONS(1035), 1,
      sym_strip_marker,
    ACTIONS(1037), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23854] = 3,
    ACTIONS(1039), 1,
      sym_strip_marker,
    ACTIONS(1041), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23865] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23876] = 3,
    ACTIONS(725), 1,
      anon_sym_endfor,
    ACTIONS(1043), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23887] = 3,
    ACTIONS(1045), 1,
      sym_strip_marker,
    ACTIONS(1047), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23898] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23909] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23920] = 3,
    ACTIONS(1051), 1,
      sym_identifier,
    ACTIONS(1053), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23931] = 3,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23942] = 3,
    ACTIONS(917), 1,
      anon_sym_else,
    ACTIONS(1059), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23953] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(1061), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23964] = 3,
    ACTIONS(663), 1,
      anon_sym_QMARK,
    ACTIONS(1063), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23975] = 3,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23986] = 3,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23997] = 3,
    ACTIONS(1067), 1,
      sym_strip_marker,
    ACTIONS(1069), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24008] = 2,
    ACTIONS(905), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24016] = 2,
    ACTIONS(989), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24024] = 2,
    ACTIONS(1041), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24032] = 2,
    ACTIONS(931), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24040] = 2,
    ACTIONS(1071), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24048] = 2,
    ACTIONS(1073), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24056] = 2,
    ACTIONS(919), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24064] = 2,
    ACTIONS(1075), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24072] = 2,
    ACTIONS(1077), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24080] = 2,
    ACTIONS(1079), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24088] = 2,
    ACTIONS(806), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24096] = 2,
    ACTIONS(1081), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24104] = 2,
    ACTIONS(820), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24112] = 2,
    ACTIONS(985), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24120] = 2,
    ACTIONS(858), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24128] = 2,
    ACTIONS(1083), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24136] = 2,
    ACTIONS(1085), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24144] = 2,
    ACTIONS(1087), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24152] = 2,
    ACTIONS(1089), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24160] = 2,
    ACTIONS(1091), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24168] = 2,
    ACTIONS(1037), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24176] = 2,
    ACTIONS(1093), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24184] = 2,
    ACTIONS(868), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24192] = 2,
    ACTIONS(836), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24200] = 2,
    ACTIONS(1095), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24208] = 2,
    ACTIONS(1097), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24216] = 2,
    ACTIONS(1099), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24224] = 2,
    ACTIONS(1101), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24232] = 2,
    ACTIONS(1103), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24240] = 2,
    ACTIONS(854), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24248] = 2,
    ACTIONS(1105), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24256] = 2,
    ACTIONS(1107), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24264] = 2,
    ACTIONS(1109), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24272] = 2,
    ACTIONS(1111), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24280] = 2,
    ACTIONS(1113), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24288] = 2,
    ACTIONS(1115), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24296] = 2,
    ACTIONS(1117), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24304] = 2,
    ACTIONS(1119), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24312] = 2,
    ACTIONS(1121), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24320] = 2,
    ACTIONS(1123), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24328] = 2,
    ACTIONS(1125), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24336] = 2,
    ACTIONS(1127), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24344] = 2,
    ACTIONS(1129), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24352] = 2,
    ACTIONS(1131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24360] = 2,
    ACTIONS(1133), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24368] = 2,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24376] = 2,
    ACTIONS(1059), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24384] = 2,
    ACTIONS(909), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24392] = 2,
    ACTIONS(814), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24400] = 2,
    ACTIONS(899), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24408] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24416] = 2,
    ACTIONS(1137), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24424] = 2,
    ACTIONS(1139), 1,
      sym_template_directive_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24432] = 2,
    ACTIONS(1141), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24440] = 2,
    ACTIONS(1143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24448] = 2,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24456] = 2,
    ACTIONS(1145), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24464] = 2,
    ACTIONS(1147), 1,
      sym_template_directive_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24472] = 2,
    ACTIONS(862), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24480] = 2,
    ACTIONS(1149), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24488] = 2,
    ACTIONS(802), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24496] = 2,
    ACTIONS(1151), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24504] = 2,
    ACTIONS(1153), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24512] = 2,
    ACTIONS(826), 1,
      sym_template_directive_end,
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
  [SMALL_STATE(8)] = 655,
  [SMALL_STATE(9)] = 762,
  [SMALL_STATE(10)] = 869,
  [SMALL_STATE(11)] = 976,
  [SMALL_STATE(12)] = 1081,
  [SMALL_STATE(13)] = 1188,
  [SMALL_STATE(14)] = 1295,
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
  [SMALL_STATE(92)] = 8510,
  [SMALL_STATE(93)] = 8592,
  [SMALL_STATE(94)] = 8678,
  [SMALL_STATE(95)] = 8764,
  [SMALL_STATE(96)] = 8850,
  [SMALL_STATE(97)] = 8936,
  [SMALL_STATE(98)] = 9022,
  [SMALL_STATE(99)] = 9108,
  [SMALL_STATE(100)] = 9194,
  [SMALL_STATE(101)] = 9280,
  [SMALL_STATE(102)] = 9366,
  [SMALL_STATE(103)] = 9452,
  [SMALL_STATE(104)] = 9538,
  [SMALL_STATE(105)] = 9600,
  [SMALL_STATE(106)] = 9658,
  [SMALL_STATE(107)] = 9744,
  [SMALL_STATE(108)] = 9808,
  [SMALL_STATE(109)] = 9876,
  [SMALL_STATE(110)] = 9946,
  [SMALL_STATE(111)] = 10032,
  [SMALL_STATE(112)] = 10104,
  [SMALL_STATE(113)] = 10190,
  [SMALL_STATE(114)] = 10276,
  [SMALL_STATE(115)] = 10362,
  [SMALL_STATE(116)] = 10448,
  [SMALL_STATE(117)] = 10534,
  [SMALL_STATE(118)] = 10620,
  [SMALL_STATE(119)] = 10706,
  [SMALL_STATE(120)] = 10792,
  [SMALL_STATE(121)] = 10878,
  [SMALL_STATE(122)] = 10964,
  [SMALL_STATE(123)] = 11050,
  [SMALL_STATE(124)] = 11136,
  [SMALL_STATE(125)] = 11190,
  [SMALL_STATE(126)] = 11244,
  [SMALL_STATE(127)] = 11298,
  [SMALL_STATE(128)] = 11352,
  [SMALL_STATE(129)] = 11406,
  [SMALL_STATE(130)] = 11460,
  [SMALL_STATE(131)] = 11528,
  [SMALL_STATE(132)] = 11594,
  [SMALL_STATE(133)] = 11672,
  [SMALL_STATE(134)] = 11736,
  [SMALL_STATE(135)] = 11796,
  [SMALL_STATE(136)] = 11850,
  [SMALL_STATE(137)] = 11908,
  [SMALL_STATE(138)] = 11958,
  [SMALL_STATE(139)] = 12004,
  [SMALL_STATE(140)] = 12054,
  [SMALL_STATE(141)] = 12104,
  [SMALL_STATE(142)] = 12154,
  [SMALL_STATE(143)] = 12204,
  [SMALL_STATE(144)] = 12245,
  [SMALL_STATE(145)] = 12286,
  [SMALL_STATE(146)] = 12327,
  [SMALL_STATE(147)] = 12368,
  [SMALL_STATE(148)] = 12409,
  [SMALL_STATE(149)] = 12450,
  [SMALL_STATE(150)] = 12491,
  [SMALL_STATE(151)] = 12532,
  [SMALL_STATE(152)] = 12573,
  [SMALL_STATE(153)] = 12614,
  [SMALL_STATE(154)] = 12655,
  [SMALL_STATE(155)] = 12696,
  [SMALL_STATE(156)] = 12737,
  [SMALL_STATE(157)] = 12778,
  [SMALL_STATE(158)] = 12819,
  [SMALL_STATE(159)] = 12860,
  [SMALL_STATE(160)] = 12901,
  [SMALL_STATE(161)] = 12942,
  [SMALL_STATE(162)] = 12983,
  [SMALL_STATE(163)] = 13024,
  [SMALL_STATE(164)] = 13065,
  [SMALL_STATE(165)] = 13106,
  [SMALL_STATE(166)] = 13147,
  [SMALL_STATE(167)] = 13188,
  [SMALL_STATE(168)] = 13229,
  [SMALL_STATE(169)] = 13270,
  [SMALL_STATE(170)] = 13311,
  [SMALL_STATE(171)] = 13352,
  [SMALL_STATE(172)] = 13393,
  [SMALL_STATE(173)] = 13434,
  [SMALL_STATE(174)] = 13475,
  [SMALL_STATE(175)] = 13516,
  [SMALL_STATE(176)] = 13557,
  [SMALL_STATE(177)] = 13598,
  [SMALL_STATE(178)] = 13641,
  [SMALL_STATE(179)] = 13699,
  [SMALL_STATE(180)] = 13769,
  [SMALL_STATE(181)] = 13821,
  [SMALL_STATE(182)] = 13869,
  [SMALL_STATE(183)] = 13929,
  [SMALL_STATE(184)] = 13977,
  [SMALL_STATE(185)] = 14039,
  [SMALL_STATE(186)] = 14093,
  [SMALL_STATE(187)] = 14130,
  [SMALL_STATE(188)] = 14167,
  [SMALL_STATE(189)] = 14204,
  [SMALL_STATE(190)] = 14241,
  [SMALL_STATE(191)] = 14278,
  [SMALL_STATE(192)] = 14315,
  [SMALL_STATE(193)] = 14352,
  [SMALL_STATE(194)] = 14389,
  [SMALL_STATE(195)] = 14426,
  [SMALL_STATE(196)] = 14463,
  [SMALL_STATE(197)] = 14500,
  [SMALL_STATE(198)] = 14537,
  [SMALL_STATE(199)] = 14574,
  [SMALL_STATE(200)] = 14611,
  [SMALL_STATE(201)] = 14648,
  [SMALL_STATE(202)] = 14685,
  [SMALL_STATE(203)] = 14722,
  [SMALL_STATE(204)] = 14759,
  [SMALL_STATE(205)] = 14796,
  [SMALL_STATE(206)] = 14833,
  [SMALL_STATE(207)] = 14870,
  [SMALL_STATE(208)] = 14907,
  [SMALL_STATE(209)] = 14944,
  [SMALL_STATE(210)] = 14981,
  [SMALL_STATE(211)] = 15018,
  [SMALL_STATE(212)] = 15055,
  [SMALL_STATE(213)] = 15092,
  [SMALL_STATE(214)] = 15129,
  [SMALL_STATE(215)] = 15166,
  [SMALL_STATE(216)] = 15203,
  [SMALL_STATE(217)] = 15240,
  [SMALL_STATE(218)] = 15277,
  [SMALL_STATE(219)] = 15314,
  [SMALL_STATE(220)] = 15351,
  [SMALL_STATE(221)] = 15403,
  [SMALL_STATE(222)] = 15459,
  [SMALL_STATE(223)] = 15505,
  [SMALL_STATE(224)] = 15551,
  [SMALL_STATE(225)] = 15597,
  [SMALL_STATE(226)] = 15641,
  [SMALL_STATE(227)] = 15709,
  [SMALL_STATE(228)] = 15753,
  [SMALL_STATE(229)] = 15797,
  [SMALL_STATE(230)] = 15847,
  [SMALL_STATE(231)] = 15891,
  [SMALL_STATE(232)] = 15951,
  [SMALL_STATE(233)] = 16009,
  [SMALL_STATE(234)] = 16053,
  [SMALL_STATE(235)] = 16109,
  [SMALL_STATE(236)] = 16161,
  [SMALL_STATE(237)] = 16207,
  [SMALL_STATE(238)] = 16257,
  [SMALL_STATE(239)] = 16325,
  [SMALL_STATE(240)] = 16383,
  [SMALL_STATE(241)] = 16443,
  [SMALL_STATE(242)] = 16485,
  [SMALL_STATE(243)] = 16527,
  [SMALL_STATE(244)] = 16569,
  [SMALL_STATE(245)] = 16611,
  [SMALL_STATE(246)] = 16653,
  [SMALL_STATE(247)] = 16695,
  [SMALL_STATE(248)] = 16737,
  [SMALL_STATE(249)] = 16779,
  [SMALL_STATE(250)] = 16821,
  [SMALL_STATE(251)] = 16863,
  [SMALL_STATE(252)] = 16900,
  [SMALL_STATE(253)] = 16931,
  [SMALL_STATE(254)] = 16962,
  [SMALL_STATE(255)] = 16993,
  [SMALL_STATE(256)] = 17028,
  [SMALL_STATE(257)] = 17059,
  [SMALL_STATE(258)] = 17090,
  [SMALL_STATE(259)] = 17121,
  [SMALL_STATE(260)] = 17152,
  [SMALL_STATE(261)] = 17183,
  [SMALL_STATE(262)] = 17214,
  [SMALL_STATE(263)] = 17245,
  [SMALL_STATE(264)] = 17276,
  [SMALL_STATE(265)] = 17307,
  [SMALL_STATE(266)] = 17338,
  [SMALL_STATE(267)] = 17369,
  [SMALL_STATE(268)] = 17400,
  [SMALL_STATE(269)] = 17435,
  [SMALL_STATE(270)] = 17466,
  [SMALL_STATE(271)] = 17497,
  [SMALL_STATE(272)] = 17528,
  [SMALL_STATE(273)] = 17559,
  [SMALL_STATE(274)] = 17590,
  [SMALL_STATE(275)] = 17621,
  [SMALL_STATE(276)] = 17652,
  [SMALL_STATE(277)] = 17683,
  [SMALL_STATE(278)] = 17714,
  [SMALL_STATE(279)] = 17745,
  [SMALL_STATE(280)] = 17776,
  [SMALL_STATE(281)] = 17807,
  [SMALL_STATE(282)] = 17838,
  [SMALL_STATE(283)] = 17869,
  [SMALL_STATE(284)] = 17900,
  [SMALL_STATE(285)] = 17931,
  [SMALL_STATE(286)] = 17962,
  [SMALL_STATE(287)] = 17993,
  [SMALL_STATE(288)] = 18024,
  [SMALL_STATE(289)] = 18053,
  [SMALL_STATE(290)] = 18082,
  [SMALL_STATE(291)] = 18111,
  [SMALL_STATE(292)] = 18140,
  [SMALL_STATE(293)] = 18169,
  [SMALL_STATE(294)] = 18198,
  [SMALL_STATE(295)] = 18227,
  [SMALL_STATE(296)] = 18256,
  [SMALL_STATE(297)] = 18285,
  [SMALL_STATE(298)] = 18314,
  [SMALL_STATE(299)] = 18343,
  [SMALL_STATE(300)] = 18372,
  [SMALL_STATE(301)] = 18401,
  [SMALL_STATE(302)] = 18430,
  [SMALL_STATE(303)] = 18459,
  [SMALL_STATE(304)] = 18488,
  [SMALL_STATE(305)] = 18517,
  [SMALL_STATE(306)] = 18546,
  [SMALL_STATE(307)] = 18575,
  [SMALL_STATE(308)] = 18604,
  [SMALL_STATE(309)] = 18633,
  [SMALL_STATE(310)] = 18662,
  [SMALL_STATE(311)] = 18691,
  [SMALL_STATE(312)] = 18720,
  [SMALL_STATE(313)] = 18749,
  [SMALL_STATE(314)] = 18778,
  [SMALL_STATE(315)] = 18807,
  [SMALL_STATE(316)] = 18836,
  [SMALL_STATE(317)] = 18865,
  [SMALL_STATE(318)] = 18894,
  [SMALL_STATE(319)] = 18923,
  [SMALL_STATE(320)] = 18952,
  [SMALL_STATE(321)] = 18981,
  [SMALL_STATE(322)] = 19010,
  [SMALL_STATE(323)] = 19039,
  [SMALL_STATE(324)] = 19068,
  [SMALL_STATE(325)] = 19097,
  [SMALL_STATE(326)] = 19126,
  [SMALL_STATE(327)] = 19155,
  [SMALL_STATE(328)] = 19184,
  [SMALL_STATE(329)] = 19213,
  [SMALL_STATE(330)] = 19242,
  [SMALL_STATE(331)] = 19271,
  [SMALL_STATE(332)] = 19300,
  [SMALL_STATE(333)] = 19329,
  [SMALL_STATE(334)] = 19358,
  [SMALL_STATE(335)] = 19387,
  [SMALL_STATE(336)] = 19416,
  [SMALL_STATE(337)] = 19445,
  [SMALL_STATE(338)] = 19474,
  [SMALL_STATE(339)] = 19503,
  [SMALL_STATE(340)] = 19532,
  [SMALL_STATE(341)] = 19561,
  [SMALL_STATE(342)] = 19590,
  [SMALL_STATE(343)] = 19619,
  [SMALL_STATE(344)] = 19648,
  [SMALL_STATE(345)] = 19677,
  [SMALL_STATE(346)] = 19706,
  [SMALL_STATE(347)] = 19735,
  [SMALL_STATE(348)] = 19764,
  [SMALL_STATE(349)] = 19793,
  [SMALL_STATE(350)] = 19822,
  [SMALL_STATE(351)] = 19851,
  [SMALL_STATE(352)] = 19880,
  [SMALL_STATE(353)] = 19909,
  [SMALL_STATE(354)] = 19938,
  [SMALL_STATE(355)] = 19967,
  [SMALL_STATE(356)] = 19996,
  [SMALL_STATE(357)] = 20022,
  [SMALL_STATE(358)] = 20050,
  [SMALL_STATE(359)] = 20076,
  [SMALL_STATE(360)] = 20101,
  [SMALL_STATE(361)] = 20126,
  [SMALL_STATE(362)] = 20151,
  [SMALL_STATE(363)] = 20195,
  [SMALL_STATE(364)] = 20237,
  [SMALL_STATE(365)] = 20279,
  [SMALL_STATE(366)] = 20323,
  [SMALL_STATE(367)] = 20367,
  [SMALL_STATE(368)] = 20391,
  [SMALL_STATE(369)] = 20433,
  [SMALL_STATE(370)] = 20475,
  [SMALL_STATE(371)] = 20517,
  [SMALL_STATE(372)] = 20561,
  [SMALL_STATE(373)] = 20605,
  [SMALL_STATE(374)] = 20647,
  [SMALL_STATE(375)] = 20689,
  [SMALL_STATE(376)] = 20731,
  [SMALL_STATE(377)] = 20770,
  [SMALL_STATE(378)] = 20793,
  [SMALL_STATE(379)] = 20832,
  [SMALL_STATE(380)] = 20871,
  [SMALL_STATE(381)] = 20910,
  [SMALL_STATE(382)] = 20933,
  [SMALL_STATE(383)] = 20972,
  [SMALL_STATE(384)] = 21011,
  [SMALL_STATE(385)] = 21047,
  [SMALL_STATE(386)] = 21083,
  [SMALL_STATE(387)] = 21103,
  [SMALL_STATE(388)] = 21123,
  [SMALL_STATE(389)] = 21145,
  [SMALL_STATE(390)] = 21167,
  [SMALL_STATE(391)] = 21191,
  [SMALL_STATE(392)] = 21214,
  [SMALL_STATE(393)] = 21237,
  [SMALL_STATE(394)] = 21260,
  [SMALL_STATE(395)] = 21277,
  [SMALL_STATE(396)] = 21298,
  [SMALL_STATE(397)] = 21321,
  [SMALL_STATE(398)] = 21340,
  [SMALL_STATE(399)] = 21363,
  [SMALL_STATE(400)] = 21380,
  [SMALL_STATE(401)] = 21403,
  [SMALL_STATE(402)] = 21421,
  [SMALL_STATE(403)] = 21435,
  [SMALL_STATE(404)] = 21455,
  [SMALL_STATE(405)] = 21475,
  [SMALL_STATE(406)] = 21495,
  [SMALL_STATE(407)] = 21515,
  [SMALL_STATE(408)] = 21531,
  [SMALL_STATE(409)] = 21547,
  [SMALL_STATE(410)] = 21559,
  [SMALL_STATE(411)] = 21579,
  [SMALL_STATE(412)] = 21599,
  [SMALL_STATE(413)] = 21619,
  [SMALL_STATE(414)] = 21635,
  [SMALL_STATE(415)] = 21651,
  [SMALL_STATE(416)] = 21663,
  [SMALL_STATE(417)] = 21674,
  [SMALL_STATE(418)] = 21691,
  [SMALL_STATE(419)] = 21702,
  [SMALL_STATE(420)] = 21719,
  [SMALL_STATE(421)] = 21730,
  [SMALL_STATE(422)] = 21745,
  [SMALL_STATE(423)] = 21756,
  [SMALL_STATE(424)] = 21767,
  [SMALL_STATE(425)] = 21778,
  [SMALL_STATE(426)] = 21789,
  [SMALL_STATE(427)] = 21800,
  [SMALL_STATE(428)] = 21811,
  [SMALL_STATE(429)] = 21822,
  [SMALL_STATE(430)] = 21833,
  [SMALL_STATE(431)] = 21844,
  [SMALL_STATE(432)] = 21855,
  [SMALL_STATE(433)] = 21870,
  [SMALL_STATE(434)] = 21887,
  [SMALL_STATE(435)] = 21898,
  [SMALL_STATE(436)] = 21915,
  [SMALL_STATE(437)] = 21926,
  [SMALL_STATE(438)] = 21937,
  [SMALL_STATE(439)] = 21950,
  [SMALL_STATE(440)] = 21967,
  [SMALL_STATE(441)] = 21978,
  [SMALL_STATE(442)] = 21989,
  [SMALL_STATE(443)] = 22006,
  [SMALL_STATE(444)] = 22019,
  [SMALL_STATE(445)] = 22030,
  [SMALL_STATE(446)] = 22047,
  [SMALL_STATE(447)] = 22058,
  [SMALL_STATE(448)] = 22075,
  [SMALL_STATE(449)] = 22086,
  [SMALL_STATE(450)] = 22097,
  [SMALL_STATE(451)] = 22110,
  [SMALL_STATE(452)] = 22121,
  [SMALL_STATE(453)] = 22132,
  [SMALL_STATE(454)] = 22145,
  [SMALL_STATE(455)] = 22162,
  [SMALL_STATE(456)] = 22173,
  [SMALL_STATE(457)] = 22186,
  [SMALL_STATE(458)] = 22199,
  [SMALL_STATE(459)] = 22210,
  [SMALL_STATE(460)] = 22221,
  [SMALL_STATE(461)] = 22238,
  [SMALL_STATE(462)] = 22255,
  [SMALL_STATE(463)] = 22272,
  [SMALL_STATE(464)] = 22283,
  [SMALL_STATE(465)] = 22294,
  [SMALL_STATE(466)] = 22305,
  [SMALL_STATE(467)] = 22317,
  [SMALL_STATE(468)] = 22327,
  [SMALL_STATE(469)] = 22337,
  [SMALL_STATE(470)] = 22347,
  [SMALL_STATE(471)] = 22357,
  [SMALL_STATE(472)] = 22367,
  [SMALL_STATE(473)] = 22377,
  [SMALL_STATE(474)] = 22387,
  [SMALL_STATE(475)] = 22397,
  [SMALL_STATE(476)] = 22411,
  [SMALL_STATE(477)] = 22421,
  [SMALL_STATE(478)] = 22435,
  [SMALL_STATE(479)] = 22449,
  [SMALL_STATE(480)] = 22463,
  [SMALL_STATE(481)] = 22473,
  [SMALL_STATE(482)] = 22483,
  [SMALL_STATE(483)] = 22497,
  [SMALL_STATE(484)] = 22507,
  [SMALL_STATE(485)] = 22517,
  [SMALL_STATE(486)] = 22527,
  [SMALL_STATE(487)] = 22537,
  [SMALL_STATE(488)] = 22551,
  [SMALL_STATE(489)] = 22561,
  [SMALL_STATE(490)] = 22571,
  [SMALL_STATE(491)] = 22581,
  [SMALL_STATE(492)] = 22591,
  [SMALL_STATE(493)] = 22605,
  [SMALL_STATE(494)] = 22619,
  [SMALL_STATE(495)] = 22633,
  [SMALL_STATE(496)] = 22643,
  [SMALL_STATE(497)] = 22657,
  [SMALL_STATE(498)] = 22667,
  [SMALL_STATE(499)] = 22677,
  [SMALL_STATE(500)] = 22687,
  [SMALL_STATE(501)] = 22701,
  [SMALL_STATE(502)] = 22711,
  [SMALL_STATE(503)] = 22721,
  [SMALL_STATE(504)] = 22731,
  [SMALL_STATE(505)] = 22741,
  [SMALL_STATE(506)] = 22751,
  [SMALL_STATE(507)] = 22761,
  [SMALL_STATE(508)] = 22775,
  [SMALL_STATE(509)] = 22789,
  [SMALL_STATE(510)] = 22799,
  [SMALL_STATE(511)] = 22813,
  [SMALL_STATE(512)] = 22827,
  [SMALL_STATE(513)] = 22841,
  [SMALL_STATE(514)] = 22855,
  [SMALL_STATE(515)] = 22869,
  [SMALL_STATE(516)] = 22879,
  [SMALL_STATE(517)] = 22893,
  [SMALL_STATE(518)] = 22903,
  [SMALL_STATE(519)] = 22913,
  [SMALL_STATE(520)] = 22927,
  [SMALL_STATE(521)] = 22941,
  [SMALL_STATE(522)] = 22955,
  [SMALL_STATE(523)] = 22965,
  [SMALL_STATE(524)] = 22975,
  [SMALL_STATE(525)] = 22987,
  [SMALL_STATE(526)] = 22998,
  [SMALL_STATE(527)] = 23009,
  [SMALL_STATE(528)] = 23020,
  [SMALL_STATE(529)] = 23031,
  [SMALL_STATE(530)] = 23042,
  [SMALL_STATE(531)] = 23053,
  [SMALL_STATE(532)] = 23064,
  [SMALL_STATE(533)] = 23075,
  [SMALL_STATE(534)] = 23086,
  [SMALL_STATE(535)] = 23097,
  [SMALL_STATE(536)] = 23108,
  [SMALL_STATE(537)] = 23119,
  [SMALL_STATE(538)] = 23130,
  [SMALL_STATE(539)] = 23141,
  [SMALL_STATE(540)] = 23152,
  [SMALL_STATE(541)] = 23163,
  [SMALL_STATE(542)] = 23174,
  [SMALL_STATE(543)] = 23185,
  [SMALL_STATE(544)] = 23196,
  [SMALL_STATE(545)] = 23207,
  [SMALL_STATE(546)] = 23218,
  [SMALL_STATE(547)] = 23229,
  [SMALL_STATE(548)] = 23240,
  [SMALL_STATE(549)] = 23251,
  [SMALL_STATE(550)] = 23262,
  [SMALL_STATE(551)] = 23273,
  [SMALL_STATE(552)] = 23284,
  [SMALL_STATE(553)] = 23295,
  [SMALL_STATE(554)] = 23306,
  [SMALL_STATE(555)] = 23317,
  [SMALL_STATE(556)] = 23328,
  [SMALL_STATE(557)] = 23339,
  [SMALL_STATE(558)] = 23350,
  [SMALL_STATE(559)] = 23361,
  [SMALL_STATE(560)] = 23372,
  [SMALL_STATE(561)] = 23383,
  [SMALL_STATE(562)] = 23394,
  [SMALL_STATE(563)] = 23405,
  [SMALL_STATE(564)] = 23416,
  [SMALL_STATE(565)] = 23427,
  [SMALL_STATE(566)] = 23438,
  [SMALL_STATE(567)] = 23449,
  [SMALL_STATE(568)] = 23460,
  [SMALL_STATE(569)] = 23471,
  [SMALL_STATE(570)] = 23482,
  [SMALL_STATE(571)] = 23493,
  [SMALL_STATE(572)] = 23504,
  [SMALL_STATE(573)] = 23515,
  [SMALL_STATE(574)] = 23526,
  [SMALL_STATE(575)] = 23537,
  [SMALL_STATE(576)] = 23548,
  [SMALL_STATE(577)] = 23559,
  [SMALL_STATE(578)] = 23570,
  [SMALL_STATE(579)] = 23581,
  [SMALL_STATE(580)] = 23592,
  [SMALL_STATE(581)] = 23603,
  [SMALL_STATE(582)] = 23614,
  [SMALL_STATE(583)] = 23625,
  [SMALL_STATE(584)] = 23636,
  [SMALL_STATE(585)] = 23645,
  [SMALL_STATE(586)] = 23656,
  [SMALL_STATE(587)] = 23667,
  [SMALL_STATE(588)] = 23678,
  [SMALL_STATE(589)] = 23689,
  [SMALL_STATE(590)] = 23700,
  [SMALL_STATE(591)] = 23711,
  [SMALL_STATE(592)] = 23722,
  [SMALL_STATE(593)] = 23733,
  [SMALL_STATE(594)] = 23744,
  [SMALL_STATE(595)] = 23755,
  [SMALL_STATE(596)] = 23766,
  [SMALL_STATE(597)] = 23777,
  [SMALL_STATE(598)] = 23788,
  [SMALL_STATE(599)] = 23799,
  [SMALL_STATE(600)] = 23810,
  [SMALL_STATE(601)] = 23821,
  [SMALL_STATE(602)] = 23832,
  [SMALL_STATE(603)] = 23843,
  [SMALL_STATE(604)] = 23854,
  [SMALL_STATE(605)] = 23865,
  [SMALL_STATE(606)] = 23876,
  [SMALL_STATE(607)] = 23887,
  [SMALL_STATE(608)] = 23898,
  [SMALL_STATE(609)] = 23909,
  [SMALL_STATE(610)] = 23920,
  [SMALL_STATE(611)] = 23931,
  [SMALL_STATE(612)] = 23942,
  [SMALL_STATE(613)] = 23953,
  [SMALL_STATE(614)] = 23964,
  [SMALL_STATE(615)] = 23975,
  [SMALL_STATE(616)] = 23986,
  [SMALL_STATE(617)] = 23997,
  [SMALL_STATE(618)] = 24008,
  [SMALL_STATE(619)] = 24016,
  [SMALL_STATE(620)] = 24024,
  [SMALL_STATE(621)] = 24032,
  [SMALL_STATE(622)] = 24040,
  [SMALL_STATE(623)] = 24048,
  [SMALL_STATE(624)] = 24056,
  [SMALL_STATE(625)] = 24064,
  [SMALL_STATE(626)] = 24072,
  [SMALL_STATE(627)] = 24080,
  [SMALL_STATE(628)] = 24088,
  [SMALL_STATE(629)] = 24096,
  [SMALL_STATE(630)] = 24104,
  [SMALL_STATE(631)] = 24112,
  [SMALL_STATE(632)] = 24120,
  [SMALL_STATE(633)] = 24128,
  [SMALL_STATE(634)] = 24136,
  [SMALL_STATE(635)] = 24144,
  [SMALL_STATE(636)] = 24152,
  [SMALL_STATE(637)] = 24160,
  [SMALL_STATE(638)] = 24168,
  [SMALL_STATE(639)] = 24176,
  [SMALL_STATE(640)] = 24184,
  [SMALL_STATE(641)] = 24192,
  [SMALL_STATE(642)] = 24200,
  [SMALL_STATE(643)] = 24208,
  [SMALL_STATE(644)] = 24216,
  [SMALL_STATE(645)] = 24224,
  [SMALL_STATE(646)] = 24232,
  [SMALL_STATE(647)] = 24240,
  [SMALL_STATE(648)] = 24248,
  [SMALL_STATE(649)] = 24256,
  [SMALL_STATE(650)] = 24264,
  [SMALL_STATE(651)] = 24272,
  [SMALL_STATE(652)] = 24280,
  [SMALL_STATE(653)] = 24288,
  [SMALL_STATE(654)] = 24296,
  [SMALL_STATE(655)] = 24304,
  [SMALL_STATE(656)] = 24312,
  [SMALL_STATE(657)] = 24320,
  [SMALL_STATE(658)] = 24328,
  [SMALL_STATE(659)] = 24336,
  [SMALL_STATE(660)] = 24344,
  [SMALL_STATE(661)] = 24352,
  [SMALL_STATE(662)] = 24360,
  [SMALL_STATE(663)] = 24368,
  [SMALL_STATE(664)] = 24376,
  [SMALL_STATE(665)] = 24384,
  [SMALL_STATE(666)] = 24392,
  [SMALL_STATE(667)] = 24400,
  [SMALL_STATE(668)] = 24408,
  [SMALL_STATE(669)] = 24416,
  [SMALL_STATE(670)] = 24424,
  [SMALL_STATE(671)] = 24432,
  [SMALL_STATE(672)] = 24440,
  [SMALL_STATE(673)] = 24448,
  [SMALL_STATE(674)] = 24456,
  [SMALL_STATE(675)] = 24464,
  [SMALL_STATE(676)] = 24472,
  [SMALL_STATE(677)] = 24480,
  [SMALL_STATE(678)] = 24488,
  [SMALL_STATE(679)] = 24496,
  [SMALL_STATE(680)] = 24504,
  [SMALL_STATE(681)] = 24512,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(359),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(177),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(56),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(189),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(189),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(193),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(197),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(32),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(360),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(117),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(662),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(662),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(372),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(53),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(589),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(60),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(561),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_end, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_end, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index_expr_term, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index_expr_term, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_expr_term, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_expr_term, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__splat_expr_term, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__splat_expr_term, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_end, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_end, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(66),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(610),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(47),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(563),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(72),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(557),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_start, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_start, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_start, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_start, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(414),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(26),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(475),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(413),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(22),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(432),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(27),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(70),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(390),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(401),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(487),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(407),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(408),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 5),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 2),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(421),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 4),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 5),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 7),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 5),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 6),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 6),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 9),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 4),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 10),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 5),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 3),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(521),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 8),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_start, 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_branch, 2),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_branch, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [1153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

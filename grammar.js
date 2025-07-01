/**
 * @file Embedded Template grammar for tree-sitter
 * @author Max Brunsfeld <maxbrunsfeld@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'embedded_javascript_template',

  extras: _ => [],

  rules: {
    template: $ => repeat(choice(
      $.directive,
      $.output_directive,
      $.comment_directive,
      $.graphql_directive,
      $.content,
    )),

    code: _ => repeat1(choice(/[^\]]+/, ']')),

    content: _ => prec.right(repeat1(choice(/[^\[]+/, '[', '[[['))),

    directive: $ => seq(
      choice('[[', '[[_', '[[|'),
      optional($.code),
      choice(']]', '-]]', '_]]'),
    ),

    output_directive: $ => seq(
      choice('[[=', '[[==', '[[|=', '[[|==', '[[-'),
      optional($.code),
      choice(']]', '-]]', '=]]'),
    ),

    comment_directive: $ => seq(
      choice('[[#', '[[//'),
      optional(alias($.code, $.comment)),
      ']]',
    ),

    graphql_directive: $ => seq(
      '[[graphql',
      optional($.code),
      ']]',
    ),
  },
});

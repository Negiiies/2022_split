/*
 * E89 Pedagogical & Technical Lab
 * project:     test
 * created on:  2023-05-25 - 10:20 +0200
 * 1st author:  dylan.le - dylan.le
 * description: split
 */


#include "stu.h"

Test(split, normal)
{
    char **sp;

    sp = split("hello;world", ';');
    cr_assert(sp);
    cr_assert_str_eq(sp[0], "hello");
    cr_assert_str_eq(sp[1], "world");
    cr_assert_not(sp[2]);
}

Test(split, token_at_the_end)
{
    char **sp;

    sp = split("hello;world;", ';');
    cr_assert(sp);
    cr_assert_str_eq(sp[0], "hello");
    cr_assert_str_eq(sp[1], "world");
    cr_assert_str_eq(sp[2], "");
    cr_assert_not(sp[3]);
}

Test(split, token_at_the_edges)
{
    char **sp;

    sp = split(";hello;world;", ';');
    cr_assert(sp);
    cr_assert_str_eq(sp[0], "");
    cr_assert_str_eq(sp[1], "hello");
    cr_assert_str_eq(sp[2], "world");
    cr_assert_str_eq(sp[3], "");
    cr_assert_not(sp[4]);
}

Test(split, token_at_the_beginning)
{
    char **sp;

    sp = split(";hello;world", ';');
    cr_assert(sp);
    cr_assert_str_eq(sp[0], "");
    cr_assert_str_eq(sp[1], "hello");
    cr_assert_str_eq(sp[2], "world");
    cr_assert_not(sp[3]);
}

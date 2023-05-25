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

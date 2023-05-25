/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-21 - 14:25 +0200
 * 1st author:  dylan.le - dylan.le
 * description: include
 */

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <criterion/criterion.h>
#include <stdio.h>

#ifndef _STU_H_
#define _STU_H_


char *stu_strdup (const char *str);
void split_delete(char **sp);
void split_print(char **sp);
unsigned int split_size(char **sp);
unsigned int stu_strlen(const char *str);
char **split(const char* str, char token);

#endif /* stu.h */


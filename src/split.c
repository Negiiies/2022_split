/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-17 - 14:44 +0200
 * 1st author:  dylan.le - dylan.le
 * description: split
 */

#include "stu.h"

static int token_counter(const char *str, char token)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (str[i] != '\0') {
        if (str[i] == token) {
            count += 1;
        }
        i += 1;
    }
    return (count);
}

static int count_letter(const char *str, char token, int index)
{
    int counter;

    counter = 0;
    while (str[index] != '\0' && str[index] != token) {
        index += 1;
        counter += 1;
    }
    return counter;
}

static void while_function(const char *str, char **sp, char token, int j)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while (str[i] != '\0') {
        if (str[i] == token
            || (i == 0 && str[i] != token)) {
            if (str[i] == token) {
                i += 1;
            }
            sp[j] = malloc(sizeof(char) * (count_letter(str, token, i) + 1));
            sp[j][count_letter(str, token, i)] = '\0';
            while (str[i] != token && str[i] != '\0') {
                sp[j][k] = str[i];
                i += 1;
                k += 1;
            }
            k = 0;
            j += 1;
        } else {
            i += 1;
        }
    }
}

char **split(const char *str, char token)
{
    int j;
    char **sp;

    j = 0;
    if (!str) {
        return NULL;
    }
    sp = malloc(sizeof(char *) * (token_counter(str, token) + 2));
    sp[token_counter(str, token) + 1] = NULL;
    if (str[0] == token) {
        sp[0] = malloc(0);
        sp[0][0] = '\0';
        j += 1;
    }
    while_function(str, sp, token, j);
    return sp;
}

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

    index += 1;
    counter = 0;
    while (str[index] != '\0' || str[index] != token) {
        index += 1;
        counter += 1;
    }
    return counter;
}

char **split(const char *str, char token)
{
    int i;
    int j;
    int k;
    char **sp;

    i = 0;
    j = 0;
    k = 0;
    if (!str) {
        return NULL;
    }
    sp = malloc(sizeof(char *) * (token_counter(str, token) + 2));
    sp[token_counter(str, token) + 1] = NULL;
    while (str[i] != '\0') {
        if (str[i] == token) {
            sp[j] = malloc(sizeof(char) * (count_letter(str, token, i) + 1));
            sp[j][count_letter(str, token, i)] = '\0';
            i += 1;
            while (str[i] != token || str[i] != '\0') {
                sp[j][k] = str[i];
                i += 1;
                k += 1;
            }
            k = 0;
            j += 1;
        }
        i += 1;
    }
    return sp;
}

/*
 * E89 Pedagogical & Technical Lab
 * project:     strdup
 * created on:  2023-01-30 - 11:06 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

#include "stu.h"

char *stu_strdup (const char *str)
{
    int i;
    int len;
    char *buffer;

    i = 0;
    len = stu_strlen(str);
    buffer = malloc(sizeof(char) *len);
    while(str[i] != '\0') {
        buffer[i] = str[i];
        i += 1;
    }
    buffer[i] = '\0';
    return (buffer);
}

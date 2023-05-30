/*
 * E89 Pedagogical & Technical Lab
 * project:     size
 * created on:  2023-05-30 - 09:58 +0200
 * 1st author:  dylan.le - dylan.le
 * description: split
 */
#include "stu.h"

unsigned int split_size(const char **sp)
{
    int i;

    i = 0;
    while (sp[i] != NULL) {
        i += 1;
    }
    return (i);
}

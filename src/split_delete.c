/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-17 - 11:12 +0200
 * 1st author:  dylan.le - dylan.le
 * description: delete
 */
#include "stu.h"

void split_delete(char **sp)
{
    int i;
    i = 0;
    while(sp[i] != NULL){
        free(sp[i]);
        i += 1;
    }
    free(sp);
}

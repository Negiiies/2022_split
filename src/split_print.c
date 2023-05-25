/*
 * E89 Pedagogical & Technical Lab
 * project:     sp print
 * created on:  2023-05-17 - 11:22 +0200
 * 1st author:  dylan.le - dylan.le
 * description: print
 */

#include "stu.h"

static int stu_puts(const char *str)
{
    int i;
    char c;
    c = '\n';
    i = stu_strlen(str);
    i = write(1, str, i);
    write(1, &c, 1);
    if (i < 0){
        return (-1);
    } else {
        return(i + 1);
    }
}

void split_print(char **sp)
{
    int i;

    i = 0;
    while(sp[i] != NULL) {
        stu_puts(sp[i]);
        stu_puts("\n");
        i += 1;
    }
}

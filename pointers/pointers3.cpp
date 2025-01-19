#include <stdio.h>

//The task based on simple pointer arithmetics and how the ++ operator works

void pointers3() {
    char *p, text[80]="abcdefghijklmnop";
    int i;
    p = &text[4];
    for(i = 3;i <= 7;i++)
        printf("%c",*p++);
    printf("\n");
}
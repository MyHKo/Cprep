#include <cstdio>
#include"pointers.h"

void task1() {
    int *t = new int[sizeof(int) * 2];
    t++;
    *t = 8;
    t[1] = *t / 2;
    t--;
    t[1] = *t / 2;
    printf("%d\n", *t);

    delete[] t;
}

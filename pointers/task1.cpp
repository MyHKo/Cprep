#include <cstdio>
#include"pointers.h"

//The task is relatively simple and based on basics of pointer arithmetics
//The catch here is the fact that pointer is moved to the second element and all operations is done on it
//Then we are trying to output the first element of the array which is undefined

void task1() {
    int *t = new int[sizeof(int) + sizeof(int)];
    t++;
    *t = 8;
    t[1] = *t / 2;
    t--;
    t[1] = *t / 2;
    printf("%d\n", *t);

    delete[] t;
}

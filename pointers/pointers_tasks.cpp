#include <cstdio>

void pointers1() {
    int *t = new int[sizeof(int) + sizeof(int)];
    t++;
    *t = 8;
    t[1] = *t / 2;
    t--;
    t[1] = *t / 2;
    printf("%d\n", *t);

    delete[] t;
}
//The task is relatively simple and based on basics of pointer arithmetics
//The catch here is the fact that pointer is moved to the second element and all operations is done on it
//Then we are trying to output the first element of the array which is undefined

char *f(char *p) {
    return p++;
}

char *g(char *p) {
    return p+=2;
}

void pointers2() {
    char *s = "ABCDEFGHIJ";

    char p = *f(g(f(s+6)));
    printf("%d\n", p - 'A');


}
//What number will be displayed after the execution of the following code?
//The main catch here is the fact that function f return the same value, because of how works the operator ++
//The answer is 8

void pointers3() {
    char *p, text[80]="abcdefghijklmnop";
    int i;
    p = &text[4];
    for(i = 3;i <= 7;i++)
        printf("%c",*p++);
    printf("\n");
}
//The task based on simple pointer arithmetics and how the ++ operator works
//The answer is efghi

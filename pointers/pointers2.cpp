#include <cstdio>

//What number will be displayed after the execution of the following code?
//The main catch here is the fact that function f return the same value, because of how works the operator ++
//The answer is 8

char *f(char *p) {
    return p++;
}

char *g(char *p) {
    return p+=2;
}

void task2() {
    char *s = "ABCDEFGHIJ";

    char p = *f(g(f(s+6)));
    printf("%d\n", p - 'A');


}
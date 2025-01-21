#include <cstdio>

//The catch here is that i is increased immediately after the comparison, so into the inner loop
//goes the new value
//The answers is that ! will be printed 14 times 2 + 3 + 4 + 5

void arithmetics3() {
    int i, j;
    for (i = 1; i++< 5;) {
        for (j = 1; j <= i; j++) {
            printf("!");
        }
    }
}

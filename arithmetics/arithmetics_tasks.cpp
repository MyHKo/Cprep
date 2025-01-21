#include <stdio.h>

void arithmetics1() {
    int a=3,b=2, c=1, d=-1, x;
    x = a>6*b/(c * a - d++);
    printf("%d\n", x);
}
//The catch in the task is based on the fact that boolean values are 0 and 1 in C++
//Also, operator precedence is important here, so we know that the comparison will run at end
//So after the last comparison, x will be 0, since the > operator will return false

void arithmetics2() {
    int a, b=10;

    for (a=1;;++a) {
        printf("%d ", a++);
        if (a>b) {
            break;
        }
    }

    printf("\n");
}
//The catch in this task based on the fact that a will be increased twice in each loop iteration
//Also, the value is output before the check of the condition
//Also, the increase in output line happens after the output
//The answer is 1 3 5 7 9 11

void arithmetics3() {
    int i, j;
    for (i = 1; i++< 5;) {
        for (j = 1; j <= i; j++) {
            printf("!");
        }
    }
}
//The catch here is that i is increased immediately after the comparison, so into the inner loop
//goes the new value
//The answers is that ! will be printed 14 times 2 + 3 + 4 + 5

void arithmetics4() {
    int a=9,b,x=100;
    double c = 6;
    x=b=a/c;
    printf("%d\n", x);
}
//The catch here is the fact that b and x are of type int, so the fractional part would be cut
//The answer is 1

void arithmetics5() {
    int a = 4, b = 5, c = 2, d = -1, x;
    x = (a * b < c + d--) || (a > 3 && d > -2);
    printf("%d\n", x);
}
//Simple task based on the operator precedense and logical operators
//Answer is 0

void arithmetics6() {
    int i, limit = 8;
    for(i = 1; i < limit; i += 3) {
        printf("%d ", i);
        if(i % 2 == 0) break;
    }
}
//Task check the understanding of a key word break
//Answers is 1 4


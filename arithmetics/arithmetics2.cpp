#include <cstdio>

//The catch in this task based on the fact that a will be increased twice in each loop iteration
//Also, the value is output before the check of the condition
//Also, the increase in output line happens after the output
//The answer is 1 3 5 7 9 11

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

#include <stdio.h>

void arithmetics10() {
    int x = 5, y = 3;
    int result = x & y == 1 || x | y == 7;
    printf("Result: %d\n", result);
}
//The task is checking the understanding of bitwise operators
//Answer: 1

void arithmetics11() {
    int a = 3;
    int b = 2;
    int result = a++ * b + --a;
    printf("Result: %d\n", result);
}
//The task is based on understanding of ++ and -- operators
//The a++ returns value and then updates it, the ++a updates the value and only then returns it
//Answer: 9

void arithmetics12() {
    int a = 4, b = 8;
    int result = (a | b) + a * b >> 2;
    printf("Result: %d\n", result);
}
//The task checks understanding of bitwise operators and their precedence
//Answer: 11
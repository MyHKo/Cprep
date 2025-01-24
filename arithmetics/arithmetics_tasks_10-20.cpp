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

void arithmetics13() {
    int a = 5, b = 10, c = 0;
    int result = a > b ? b : c = a + b;
    printf("Result: %d\n", result);
}
//The task check the understanding of the ? operator
//It acts just like if() statement, but returns the value
//In this case c is written to the result
//Answer: 15

void arithmetics14() {
    int x = 1, y = 0, z = -1;
    int result = x || y && z;
    printf("Result: %d\n", result);
}
//The task check the understanding of the precedence of logical operators
//&& comes before ||
//Answer: 1

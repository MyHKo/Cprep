#include <stdio.h>

//The catch in the task is based on the fact that boolean values are 0 and 1 in C++
//Also, operator precedence is important here, so we know that the comparison will run at end
//So after the last comparison, x will be 0, since the > operator will return false

void arithmetics1() {
    int a=3,b=2, c=1, d=-1, x;
    x = a>6*b/(c * a - d++);
    printf("%d\n", x);
}
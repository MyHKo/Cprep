#include <iostream>


int main() {

    int *a = new int[3];

    a++;
    *(a+1) = 1;
    a--;

    printf("%d\n", a[1]);

    delete[] a;

    return 0;
}

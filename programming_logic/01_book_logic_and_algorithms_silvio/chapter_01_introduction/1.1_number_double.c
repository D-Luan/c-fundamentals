#include <stdio.h>

//Exercise 1.1: Given a real number, output its double.

int main() {
    float n, d;

    printf("Number? ");
    scanf("%f", &n);

    d = n * 2;

    printf("Double: %.2f\n", d);

    return 0;
}
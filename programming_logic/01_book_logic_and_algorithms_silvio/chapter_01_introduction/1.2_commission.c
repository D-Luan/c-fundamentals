#include <stdio.h>

// 1.2 Given a salesperson's total sales, calculate their commission. Assume that the commission is 10% of the total sales.

int main() {
    float ts, c;
    
    printf("Salesperson's total sales? ");
    scanf("%f", &ts);

    c = ts * 0.10;

    printf("Commission: US$ %.2f\n", c);

    return 0;
}
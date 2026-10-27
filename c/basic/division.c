#include <stdio.h>

int main(void)
{
    int a, b, q, r;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    q = a / b;
    r = a % b;
    printf("Quotient: %d\n", q);
    printf("Remainder: %d", r);
    return 0;
}
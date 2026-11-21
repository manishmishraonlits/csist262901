#include <stdio.h>

int main(void)
{
    int n, d, s = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;
        s += d;
        n = n / 10;
    }

    printf("The sum of the digits is %d.", s);

    return 0;
}
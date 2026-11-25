#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of first %d natural numbers is: %d.", n, sum);

    return 0;
}
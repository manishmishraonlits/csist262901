#include <stdio.h>

int main(void)
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are: ", n);
    for (i = 1; i < n; i++)
    {
        printf("%d, ", i);
    }

    printf("%d.", i);

    return 0;
}
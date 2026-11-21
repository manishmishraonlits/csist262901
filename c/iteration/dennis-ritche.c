#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d. C was developed by Dennis Ritche in 1972.\n", i);
    }

    return 0;
}
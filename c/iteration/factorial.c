#include <stdio.h>

int main(void)
{
    int n, fact=1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial cannot be calculated for negative numbers.");
        return 0;
    }   

    for(int i=n; i>=1; i--)
    {
        fact *= i;
    }

    printf("%d! = %d", n, fact);
    return 0;
}
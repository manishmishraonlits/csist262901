#include <stdio.h>

int main(void)
{
    float rice, sugar;

    printf("Enter the price of rice: ");
    scanf("%f", &rice);
    printf("Enter the price of sugar: ");
    scanf("%f", &sugar);

    printf("***LIST OF ITEMS***\n");
    printf("Item\tPrice\n");
    printf("Rice\tRs. %1.2f\n", rice);
    printf("Sugar\tRs. %1.2f", sugar);

    return 0;
}
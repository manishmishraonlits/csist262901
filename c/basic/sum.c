#include <stdio.h>                              // File inclusion preprocessor directive

int main(void)                                  // Start of main function
{
    int a, b, c;    // Type declaration
    printf("Enter the first integer: ");        // Call to library function printf
    scanf("%d", &a);                            // Call to library function scanf
    printf("Enter the second integer: ");
    scanf("%d", &b);
    c = a + b;
    printf("The sum is %d.", c);
    return 0;                                   // Returning exit status to OS
}

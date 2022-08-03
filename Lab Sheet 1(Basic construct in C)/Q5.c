// 5.	Write a program to divide one integer by another integer and find the quotient and remainder.

#include <stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    printf("Quotient = %d\n", quotient);

    remainder = dividend % divisor;
    printf("Remainder = %d", remainder);

    return 0;
}
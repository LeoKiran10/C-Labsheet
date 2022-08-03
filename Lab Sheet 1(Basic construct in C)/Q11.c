// 11.	Write a program that will convert temperature in Centigrade into Fahrenheit. [Hint: C=5/9(F-32) and F=9/5*C+32]

#include <stdio.h>

int main()
{
    float c,f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    
    f = (c*9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", c, f);

    return 0;
}
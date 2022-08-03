// 1.	Write a program find to addition, subtraction, multiplication and division of two numbers entered by the user.

#include <stdio.h>

int main()
{
    int a, b, add, sub, mul, div;

    printf("Enter two numbers a and b; ");
    scanf("%d%d", &a, &b);

    add = (a + b);
    printf("The addition of a and b is %d.\n", add);

    sub = a - b;
    printf("The subtraction of a and b is %d.\n", sub);

    mul = a * b;
    printf("The multification of a and b is %d.\n", mul);

    div = a / b;
    printf("The division of a and b is %d.\n", div);

    return 0;
}
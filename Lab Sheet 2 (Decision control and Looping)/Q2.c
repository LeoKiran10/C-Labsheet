// 2.	Write a program to print out all Armstrong numbers between 1 and 500.

#include <stdio.h>

int main()
{
    int num, count = 1, rem, sum;

    while (count <= 500)
    {
        num = count;
        sum = 0;
        while (num)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }

        if (count == sum)
        {
            printf("%d is a Armstrong number\n", count);
        }

        count++;
    }

    return 0;
}
// 9.	Write a program to display Multiplication table from 1-10.

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("\n %d*%d=%d", i, j, i * j);
        }
        printf("\n---------");
    }
    return 0;
}
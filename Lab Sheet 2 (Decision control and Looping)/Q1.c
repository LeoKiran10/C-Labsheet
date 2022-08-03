// 1.	Write a program to generate Fibonacci series.

#include <stdio.h>

int main()
{
    int i, n, t1, t2, t_next;

    t1 = 0;
    t2 = 1;
    t_next = t1 + t2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibanacci series:%d, %d, ", t1, t2);

    for (i = 3; i <= n; i++)
    {
        printf("%d, ", t_next);
        t1 = t2;
        t2 = t_next;
        t_next = t1 + t2;
    }

    return 0;
}
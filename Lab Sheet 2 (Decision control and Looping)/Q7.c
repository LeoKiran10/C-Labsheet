// 7.	 Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, num, positive = 0, negative = 0, zero = 0;
    int arr[100];

    printf("Enter total required Numbers: ");
    scanf("%d", &num);

    printf("Enter Numbers: ");

    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else if (arr[i] == 0)
        {
        zero++;
        }
        else
        {
            printf("Wrong Entry");
            break;
        }
    }
    printf("Positive Numbers: %d\n", positive);
    printf("Negative Numbers: %d\n", negative);
    printf("Zero Numbers: %d\n", zero);
}
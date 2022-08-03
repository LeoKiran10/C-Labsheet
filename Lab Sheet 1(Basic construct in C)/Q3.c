// 3.	Write a Program to calculate the area and circumference of the circle.

#include <stdio.h>

int main()
{
float radius, area;

    printf("Enter the radius of circle: ");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;
    printf("The area of cricle is %f", area);

    return 0;
}
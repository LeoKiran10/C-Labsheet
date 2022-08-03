// 19.	Write a program that ask the radius of sphere and print the volume of sphere.

#include <stdio.h>
int main()
{
    int r;
    float vol;
    printf("Enter Radius : ");
    scanf("%d", &r);
    vol = (4 / 3.0) * 3.14 * r * r * r;
    printf("\nVolume of Sphere = %f", vol);
    return 0;
}
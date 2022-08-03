// 13.	Write a program to read three sides of a triangle and calculate the area. [Hint: Area=√s(s-a)(s-b)(s-c)]
#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float s,area;

    printf("Enter the value of sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is %f",area);

    return 0;
}
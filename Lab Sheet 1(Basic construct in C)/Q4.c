// 4.	The length and breadth are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle.



#include<stdio.h>

int main(){
int l,b,area,perimeter;

printf("Enter the value of length and breadth: ");
scanf("%d%d", &l,&b);

area=l*b;
printf("The area of Rectangle is %d\n", area);

perimeter=2*(l+b);
printf("The perimeter of Rectangle is %d\n", perimeter);

    return 0;
}
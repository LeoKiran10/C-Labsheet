// 2.	Write a program to calculate the surface area of cube. [Hint  area=6l2]

#include<stdio.h>

int main(){
    int l, area;

    printf("Enter the length of cube (l): ");
    scanf("%d", &l);

    area=6*l*l;
    printf("The area of cube is %d",area);
    
    return 0;
}
// 7.	Write a program to convert entered number of days into years, months and days.


#include<stdio.h>

int main(){
    int num,y,m,d;

    printf("Input any number: ");
    scanf("%d",&num);

    y=num/365;
    m=(num-(y*365))/30;
    d=(num-(y*365)-(m*30));

    printf("%dy:%dm:%dd",y,m,d);
    return 0;
}
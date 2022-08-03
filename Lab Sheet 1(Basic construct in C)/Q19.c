// 20.	Write a program that ask a number and print the remainder after dividing the number by 5.

#include<stdio.h>

int main(){
    int n,remainder;

    printf("Enter a number: ");
    scanf("%d",&n);

    remainder= n%5;
    printf("Remainder after dividing by 5 to a given number %d is %d.",n,remainder);
    return 0;
}
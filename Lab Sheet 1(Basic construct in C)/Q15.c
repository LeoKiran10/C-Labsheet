// 15.	If a five-digit number is entered through the keyboard, write a program to calculate the sum of its digits.

#include<stdio.h>

int main(){
    int n, remainder,sum=0;

    printf("Enter a five-digit number:");
    scanf("%d",&n);

    while(n!=0) {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("Sum of its digits is %d",sum);
    return 0;
}
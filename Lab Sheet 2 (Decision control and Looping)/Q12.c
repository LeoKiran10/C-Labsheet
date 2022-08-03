// 12.	Write a program to find the product of digits of any number.
#include<stdio.h>

int main(){
   int num,rem,prod=1;

 printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        rem = num % 10;
        prod *= rem;
        num /=  10;
    }
    
    printf("The product of given digits is %d",prod);
    return 0;
}
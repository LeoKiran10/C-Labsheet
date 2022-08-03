// 5.	Write a program to print all the numbers from 10 to 1 and find their sum using while loop.

#include<stdio.h>

int main(){
    int n=10, sum=0;

printf("Numbers from 10 to 1 are: \n");
    while(n>=1)
    {
       printf("%d\n",n);
       sum=sum+n;
       n--; 
    }
printf("Sum of numbers from 1 to 10 is %d",sum);
    return 0;
}
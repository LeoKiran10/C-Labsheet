// 10.	Write a program to display square of given number if it is odd and cube if it is even.

#include<stdio.h>

int main(){
    int n;

printf("Enter a number: ");
scanf("%d",&n);

if(n%2==0)
{
    printf("The cube of %d is %d",n,n*n*n);
}
else{
     printf("The square of %d is %d",n,n*n);
}
    return 0;
}
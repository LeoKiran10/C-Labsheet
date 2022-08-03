// 17.	Two number are entered through keyboard and if the first number is greater than second number then print the sum of number otherwise print the difference of number (use tannery operator)

#include<stdio.h>

int main(){
    int a,b,sum,diff;

    printf("Enter the value of a: ");
    scanf("%d",&a);

     printf("Enter the value of b: ");
     scanf("%d",&b);

     sum=a+b;
     diff=a-b;

     (a>b)? printf("Sum=%d",sum):printf("difference=%d",diff);

    return 0;
}
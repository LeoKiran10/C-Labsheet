// 4.	Write a program to generate numbers from 9 to 0 using while statement.

#include<stdio.h>

int main(){
    int n=9;

printf("Numbers from 9 to 0 are: \n");
    while(n>=0)
    {
       printf("%d\n",n);
       n--; 
    }

    return 0;
}
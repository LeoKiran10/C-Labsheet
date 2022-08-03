// 8.	Write a program to convert length from mm to km, m, cm and mm.
#include<stdio.h>

int main(){
    int length,km,m,cm,mm;

    printf("Enter the value of Length im mm: ");
       scanf("%d",&length);

       km=length/1000000;
       m=(length-(km*1000000))/1000;
       cm=(length-(km*1000000)-(m*1000))/10;
       mm=(length-(km*1000000)-(m*1000)-(cm*10));
       
    printf("%dkm:%dm:%dcm:%dmm",km,m,cm,mm);

        return 0;
}
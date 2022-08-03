// 18.	Enter a number in decimal and print it in octal and hexadecimal.

#include<stdio.h>

int main(){
    int n;

    printf("Enter a decimal number: ");
    scanf("%d",&n);

    printf("\nOctal Number=%o",n);
     printf("\nHexadecimal Number=%x",n);
    return 0;
}
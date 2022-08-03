// 8.	Write a program to generate following output.
// 	*****
// 	****
// 	***
// 	**
// 	*

#include<stdio.h>

int main(){
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
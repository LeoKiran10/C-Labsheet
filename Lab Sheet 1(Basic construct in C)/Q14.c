// 14.	Two numbers are input through the keyboard. Write a program to interchange the  the contents.
#include<Stdio.h>
int main()
{
    int c, d, t;
     printf("Enter the value of C: ");
     scanf("%d", &c);

     printf("Enter the value of D: ");
     scanf("%d", &d);

     t = c+d; 
     d = t-d; 
     c = t-d;


     printf("\n The value of C: %d", c);
     printf("\n The value of D: %d", d);

     return 0;
}
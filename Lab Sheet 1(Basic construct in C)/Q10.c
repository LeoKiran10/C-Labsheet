// 10. If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student.Assume that the maximum marks obtained by a student in each subject are 100.

#include<stdio.h>

int main(){
    int a,b,c,d,e;
    float agg_marks,percentage;

    printf("Enter the marks of each subject a,b,c,d,e: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    agg_marks=(a+b+c+d+e);
    printf("The average of given student is %f.\n", agg_marks);

   percentage=agg_marks/5;
    printf("The average of of given stugent is %f.\n", percentage);

   return 0;
}
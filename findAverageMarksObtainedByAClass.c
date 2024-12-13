/*write a c program to find average marks obtained by  a class of 5 students in a test*/

#include<stdio.h>

int main()
{
    int avg,sum=0;
    int i;
    int marks[5];
    for(i=0;i<=4;i++){
printf("Enter the mark of the student:\n");
    scanf("%d",&marks[i]);
}

    for(i=0;i<=4;i++)
        sum=sum+marks[i];
        avg=sum/5;
        printf("Average marks %d:\n",avg);
}

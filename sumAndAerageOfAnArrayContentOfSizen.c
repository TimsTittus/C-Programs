#include<stdio.h>
void main()
{
int n,A[20],i,sum;
float avg;
printf("Enter the size of Array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number");
scanf("%d",&A[i]);
}
sum=0;
for(i=0;i<n;i++)
{
sum = sum + i;
}
avg = (float)sum/n;
printf("Sum=%d",sum);
printf("Average=%f",avg);
}

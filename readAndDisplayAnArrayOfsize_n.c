#include<stdio.h>
void main()
{
int n,A[20],i;
printf("Enter the size of Array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number");
scanf("%d",&A[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t",A[i]);
}
}

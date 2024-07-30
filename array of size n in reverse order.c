#include<stdio.h>
void main()
{
int n,A[20],i;
printf("Enter the size of Array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
28
printf("Enter the number");
scanf("%d",&A[i]);
}
for(i=n-1;i>=n;i--)
{
printf("%d\t",A[i]);
}
}
#include<stdio.h>
void main()
{
int n,A[20],i,j,temp;
printf("Enter the size of Array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number");
scanf("%d",&A[i]);
}
printf("Before Sorting");
for(i=0;i<n;i++)
{
printf("%d\t",A[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(A[j]>A[j+1])
{
temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;
}
}
}
printf("Before Sorting");
for(i=0;i<n;i++)
{
printf("%d\t",A[i]);
}
}

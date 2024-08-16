#include<stdio.h>
void main()
{
int n,A[20],i,flag,j;
printf("Enter the size of Array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number");
scanf("%d",&A[i]);
}
for(i=0;i<n;i++)
{
flag=0;
for(j=2;j<=A[i]/2;j++)
{
if(A[i]%j == 0)
{
flag=1;
break;
}
}
if(flag == 0)
{
printf("%d\t",A[i]);
}
}
}
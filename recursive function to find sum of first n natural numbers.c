//recursive function to find sum of first n natural numbers

#include<stdio.h>
int sum(int n)
{
if(n<=0)
return 0;
return n + sum(n-1);
}
void main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Sum=%d",sum(n));
}

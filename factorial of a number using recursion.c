//find factorial of a number using recursion

#include<stdio.h>
int fact(int n)
{
if( n == 0)
return 1;
return n*fact(n-1);
}
void main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Factorial=%d",fact(n));
}

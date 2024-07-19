#include <stdio.h> 
void main()
{
int n,sum=0,temp;
printf("Enter the value of n"); 
scanf("%d",&n);
while ( n > 0 )
{
temp = n%10;
sum = sum + temp; n 
= n/10;
}
printf("Sum = %d",sum);
}

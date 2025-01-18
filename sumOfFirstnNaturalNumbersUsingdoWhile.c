#include <stdio.h> 
void main()
{
int n,i,sum=0;
printf("Enter the value of n"); 
scanf("%d",&n);
i=1;
do
{
sum = sum + i; 
i++;
}while(i<=n); printf("Sum 
= %d",sum);
}

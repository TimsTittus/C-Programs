#include <stdio.h> 
void main()
{
int n;
printf("Enter the value of n"); 
scanf("%d",&n);
if(n<0)
goto END; 
if(n % 2 ==0)
printf("Even\n");
else
printf("Odd\n");
END:printf("End");
}
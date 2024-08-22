//add two numbers using FUNCTION CALL

#include <stdio.h>
int add(int,int);
int main()
{
 int num1,num2;
 printf("Enter two numbers : ");
 scanf("%d%d",&num1,&num2);
 int sum= add(num1,num2);
 printf("Sum = %d",sum);
}
int add(int a, int b)
{
 int temp=a+b;
 return temp;
}
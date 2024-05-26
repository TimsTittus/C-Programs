//C program to find the quotient of two numbers
#include<stdio.h>
void main()
{
    float a,b,q=0;
    printf("Enter the number : ");
    scanf("%f",&a);
    printf("Enter the divisor : ");
    scanf("%f",&b);
    q=a/b;
    printf("The quotient of the number is :%f",q);
}
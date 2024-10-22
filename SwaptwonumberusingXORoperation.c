#include<stdio.h> 
void main()
{
int a,b;
printf("Enter the value of a and b"); 
scanf("%d%d",&a,&b); printf("Before 
Swapping\n"); 
printf("a=%d\tb=%d\n",a,b); a=a^b;
b=a^b; 
a=a^b;
printf("After Swapping\n"); 
printf("a=%d\tb=%d\n",a,b);
}

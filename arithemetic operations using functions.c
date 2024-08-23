//arithmetic operations using function

#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
int diff(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return a*b;
}
float div(int a,int b)
{
return (float)a/b;
}
int mod(int a,int b)
{
return a%b;
}
void main()
{
int x,y;
printf("Enter the values:");
scanf("%d%d",&x,&y);
printf("Sum=%d\n",add(x,y));
printf("Difference=%d\n",diff(x,y));
printf("Multiply=%d\n",mul(x,y));
printf("Division=%f\n",div(x,y));
printf("Modulo=%d\n",mod(x,y));
}
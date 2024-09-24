//swap two numbers using Pass by value

#include<stdio.h>
int swap(int a,int b)
{
int temp=a;
a= b;
b=temp;
}
void main()
{
int x,y;
printf("Enter the numbers:");
scanf("%d%d",&x,&y);
printf("Before swapping : x=%d\ty=%d\n",x,y);
swap(x,y);
printf("After swapping : x=%d\ty=%d",x,y);
}
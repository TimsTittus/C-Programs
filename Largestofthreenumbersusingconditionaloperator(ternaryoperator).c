#include<stdio.h> 
void main()
{
int a,b,c,large;
printf("Enter the value of a,b and c"); 
scanf("%d%d%d",&a,&b,&c);
large = a>b && a>c ? a : b>a && b>c ?b:c;
Page 14
printf("Largest=%d\n",large);
}

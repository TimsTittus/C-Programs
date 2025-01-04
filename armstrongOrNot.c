//Read a natural number and check whether Armstrong or not

#include<stdio.h>
void main()
{
	int n,temp,r,num=0;
	printf("Enter a number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp == sum)
		printf("Armstrong Number");
	else
		printf("Not Armstrong");
}

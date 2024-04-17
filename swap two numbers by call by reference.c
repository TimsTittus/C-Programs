#include<stdio.h>
void swap(int*x,int*y)
{
	int temp =*x;
	*x = *y;
	*y = temp;
	printf("\nfunction value x=%d &y =%d",*x,*y);
}
int main()
{
	int x,y;
	printf("Enter two numbers x and y :\n");
	scanf("%d%d",&x,&y);
	printf("Before swapping x=%d,y=%d",x,y);
	swap(&x,&y);
	printf("After swapping x=%d,y=%d",x,y);
	return 0;
}

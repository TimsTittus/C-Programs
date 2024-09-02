//program to pass a 2 D matrix as parameter and find its sum of all the elements

#include<stdio.h>
// function that takes a 2 D and its order
int sum(int A[][30],int m,int n)
{
int i,j,sum =0;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
sum = sum + A[i][j];
}
69
}
printf("Sum=%d",sum);
}
void main()
{
int A[30][30];
int i,n,m,j;
printf("Enter the order of matrix:");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Enter the element:");
scanf("%d",&A[i][j]);
}
}
sum(A,m,n);
}

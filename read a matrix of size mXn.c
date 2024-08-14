#include<stdio.h>
void main()
{
int m,n,A[20][20],i,j;
printf("Enter the order of matrix");
scanf("%d%d",&m,&n);
// Row
for(i=0;i<m;i++)
{
//Column
for(j=0;j<n;j++)
{
printf("Enter the element");
scanf("%d",&A[i][j]);
42
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
}

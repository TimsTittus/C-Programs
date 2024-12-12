//sort the matrix rowwise

#include<stdio.h>
int sort(int A[],int n) {
int i,j,temp;
for(i=0;i<n
-1;i++)
{
for(j=0;j<n
-
i
-1;j++)
{
if(A[j]>A[j+1]) {
temp = A[j];
A[j] = A[j+1];
A[j+1]= temp;
}
}
}
}
void main() {
int A[30][30];
int i,n,m,j;
printf("Enter the order of matrix:");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++) {
for(j=0;j<n;j++)
68
{
printf("Enter the element:");
scanf("%d",&A[i][j]);
}
}
for(i=0;i<m;i++)
{
sort(A[i],n);
for(j=0;j<n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
}

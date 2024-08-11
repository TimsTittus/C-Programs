#include<stdio.h>
#include<stdlib.h> // used for exit(1)
void main() {
int r1,c1,r2,c2,A[20][20],B[20][20],C[20][20],i,j,k;
printf("Enter the order of matrices:");
scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
if(c1 != r2) {
printf("Matrices Multiplication Not possible");
exit(1);
}
printf("Enter the Matrix
A
\n");
for(i=0;i<r1;i++) {
for(j=0;j<c1;j++)
45
{
printf("Enter the element A[%d][%d]:",i,j);
scanf("%d",&A[i][j]);
}
}
printf("Enter the Matrix
B
\n");
for(i=0;i<r2;i++) {
for(j=0;j<c2;j++) {
printf("Enter the element B[%d][%d]:",i,j);
scanf("%d",&B[i][j]);
}
}
printf("Matrix C:
\n");
for(i=0;i<r1;i++) {
for(j=0;j<c2;j++) {
C[i][j]= 0;
for(k=0;k<c1;k++) {
C[i][j] += A[i][k]
* B[k][j];
}
printf("%d
\t",C[i][j]);
}
printf("
\n");
}
}
#include<stdio.h>
#include<stdlib.h> // used for exit(1)
void main() {
int r1,c1,r2,c2,A[20][20],B[20][20],C[20][20],i,j;
printf("Enter the order of matrices:");
scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
if(r1 != r2 || c1 != c2) {
printf("Matrices Addition Not possible");
exit(1);
}
printf("Enter the Matrix
A
\n");
for(i=0;i<r1;i++) {
for(j=0;j<c1;j++) {
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
44
printf("Added Matrix C:
\n");
for(i=0;i<r1;i++) {
for(j=0;j<c1;j++) {
C[i][j]=A[i][j]
+ B[i][j];
printf("%d
\t",C[i][j]);
}
printf("
\n");
}
}

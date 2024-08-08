#include<stdio.h>
void main() {
int n,A[20],i,large;
printf("Enter the size of Array");
scanf("%d",&n);
for(i=0;i<n;i++) {
printf("Enter the number");
scanf("%d",&A[i]);
}
large=A[0];
for(i=0;i<n;i++) {
if(large
< A[i])
{
31
large = A[i]
}
}
printf("Large =%d",large);
}
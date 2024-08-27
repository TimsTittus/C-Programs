//program to find of series 1 + 1/2! + 1/ 3! ..

#include<stdio.h>
int fact(int n) {
if( n == 0)
return 1;
return n*fact(n
-1);
}
void main() {
int n,i;
float sum;
printf("Enter the limit:");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum = sum + 1.0 / fact(i);
printf("Sum=%f",sum);
}

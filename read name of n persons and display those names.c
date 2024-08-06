#include<stdio.h>
#include<string.h>
void main()
{
int n,i,j;
char names[30][30],temp[30];
printf("Enter the value of n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the name:");
scanf("%s",names[i]);
}
printf("Names\n");
for(i=0;i<n;i++)
{
printf("%s\n",names[i]);
}
}

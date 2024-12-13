#include<stdio.h>
void main()
{
char str[30];
int i=0;
printf("Enter the String:");
scanf("%s",str);
while(str[i] != '\0')
{
i++;
}
printf("Length = %d",i);
}

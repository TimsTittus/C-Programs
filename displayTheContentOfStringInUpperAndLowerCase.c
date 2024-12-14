#include<stdio.h>
#include<string.h>
void main()
{
char str[20];
printf("Enter the string");
gets(str);
printf("Upper Case String:%s",strupr(str));
printf("Lower Case String:%s",strlwr(str));
}

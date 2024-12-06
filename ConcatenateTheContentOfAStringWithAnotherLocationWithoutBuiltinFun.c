#include<stdio.h>
40
void main()
{
char s1[30],s2[30],s3[50];
int i=0,j=0;
printf("Enter the String 1:");
scanf("%s",s1);
printf("Enter the String 2:");
scanf("%s",s2);
while(s1[i] != '\0')
{
s3[i]=s1[i];
i++;
}
while(s2[j] != '\0')
{
s3[i]=s2[j];
i++;
j++;
}
s3[i]='\0';
printf("Concatenated String = %s",s3);
}

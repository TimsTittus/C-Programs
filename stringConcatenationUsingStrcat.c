/*string concatenation using strcat*/

#include<stdio.h>
#include<string.h>

void main()
{
    char arr[100];
    printf("Enter a string:\n");
    scanf("%s",&arr);
    char target[100];
    printf("Enter a string:\n");
    scanf("%s",&target);
    char a;
    a=strcat(target,arr);
    printf("The concatanated string is:%s",&a);
}

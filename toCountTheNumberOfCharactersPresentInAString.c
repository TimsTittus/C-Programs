/*to count the number of characters present in a string*/

#include<stdio.h>
#include<string.h>

void main()
{
    char arr[100];
    printf("Enter a string:");
    scanf("%s",&arr);
    int len;
    len=strlen(arr);
    printf("The length of the array is:%d\n",len);
}

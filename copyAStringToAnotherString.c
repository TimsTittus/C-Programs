*to copy a string in to another string*/

#include<stdio.h>
#include<string.h>

void main()
{
  char arr[] = "soniya";
  char target[100];
  strcpy(target,arr);
  printf("The string is :%s",target);
}

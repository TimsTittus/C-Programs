//Program to find palindrome or not
#include <stdio.h>
#include <string.h>
int main() {
   char string[50];
   int i ,len,flag=0;
   
   printf("Enter a string :\n");
   scanf("%s",string);
   
   len=strlen(string);
   
   for(i=0;i<len;i++){
       if(string[i]==string[len -i-1]){
           flag=1;
           break;
       }
   }
   if(flag==1){
       printf("The string is palindrome");
   }else {
       printf("The string is not a palindrome");
   }

    return 0;
}
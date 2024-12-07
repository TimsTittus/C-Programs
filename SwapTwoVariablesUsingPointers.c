//to swap two numbers using pointers
#include<stdio.h>
int main(){
    int num1,num2,*ptr1,*ptr2,temp=0;
    printf("Enter the first number :\n");
    scanf("%d",&num1);
    printf("Enter the second number :\n");
    scanf("%d",&num2);
    ptr1=&num1;
    ptr2=&num2;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("The values after swapping num1 :%d,num2 :%d",*ptr1,*ptr2);
    return 0;
}

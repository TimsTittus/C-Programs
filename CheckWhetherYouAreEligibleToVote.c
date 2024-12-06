//C program to check whether if you are eligible to vote
#include<stdio.h>
float main()
{
    float age=0;
    printf("Enter the age :  ");
    scanf("%f",&age);
     if(age<18)
        printf("You are not eligible to vote");
        
    else
        printf("you are eligible to vote");
}

//C program to find the largest among three numbers
#include<stdio.h>
float main()
{
    float a,b,c;
    printf("Enter the numbers : \n");
    scanf("%f%f%f",&a,&b,&c);
    
    if(a>=b && a>=c)
        printf("The largest number is %f",a);
    else if(b>=a && b>=c)
        printf("The largest number is %f",b);
    else
        printf("The largest number is %f",c);
}
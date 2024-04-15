// C program to find the size of int, char,float & Double datatypes
#include <stdio.h>
 
int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;
 
    // the size of integer type
    printf("Size of int is: %ld", sizeof(integerType));
 
    // the size of charType
    printf("\nSize of char is: %ld", sizeof(charType));
 
    // the size of floatType
    printf("\nSize of float is: %ld", sizeof(floatType));
 
    // the size of doubleType
    printf("\nSize of double is: %ld", sizeof(doubleType));
 
    return 0;
}
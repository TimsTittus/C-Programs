//C program to find factorial of a number
#include <stdio.h>
int main() 
{
int num, fact = 1;

// Input the number
printf("Enter a number to calculate its factorial: ");
scanf("%d", &num);

// Check if the number is non-negative
if (num < 0) {
printf("Factorial is not defined for negative numbers.\n");
}
else
{
//To Calculate factorial
for (int i = 1; i <= num; i++) {
fact *= i;
}
// To Print factorial
printf("Factorial of %d is: %d\n", num, fact);
}
return 0;
}
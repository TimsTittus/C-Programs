// C program to swap two variables
#include <stdio.h>

// Driver code
int main()
{
    int x, y;
    printf("Enter Value of x : ");
    scanf("%d", &x);
    printf("\nEnter Value of y : ");
    scanf("%d", &y);

    // Using a temporary variable to swap the values
    // Store the value of x in a temporary variable
    int temp = x;
    // Assign the value of y to x
    x = y;
    // Assign the value stored in the temporary variable to
    // y
    y = temp;

    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}

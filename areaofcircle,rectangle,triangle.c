//C program that calculates the area of different shapes (rectangle, circle, and triangle) using a switch statement:
#include <stdio.h>

int main() 
{
    int choice;
    float length, width, radius, base, height, area;

    while(1) 
    {
        printf("\nChoose a shape to calculate its area:\n");
        printf("1. Rectangle\n");
        printf("2. Circle\n");
        printf("3. Triangle\n");
        printf("Enter your choice (1-3, or press 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) 
        {
            printf("Exiting the program.\n");
            break;
        }

        switch(choice) 
        {
            case 1:
                printf("Enter length and width of rectangle: ");
                scanf("%f %f", &length, &width);
                area = length * width;
                printf("Area of the rectangle: %.2f\n", area);
                break;
            case 2:
                printf("Enter radius of circle: ");
                scanf("%f", &radius);
                area = 3.14 * radius * radius;
                printf("Area of the circle: %.2f\n", area);
                break;
            case 3:
                printf("Enter base and height of triangle: ");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of the triangle: %.2f\n", area);
                break;
            default:
                printf("Invalid choice! Please choose between 1 to 3.\n");
        }
    }

    return 0;
}
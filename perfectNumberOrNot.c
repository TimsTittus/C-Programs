//To check whether perfect number or not
#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Find the sum of proper divisors
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if the number is a perfect number
    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}

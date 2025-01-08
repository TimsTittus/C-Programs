//To check whether the given number is prime number or not
#include <stdio.h>
int main() {
    int num, i = 2;
    int isPrime = 1; // Assume the number is prime initially

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for prime using a while loop
    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0; // If divisible, set isPrime to 0 and break
            break;
        }
        i++;
    }

    
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

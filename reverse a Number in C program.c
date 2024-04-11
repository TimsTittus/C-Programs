//C Program to Reverse a Number

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Output
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}

//To print fibonacci series upto a limit
#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;

    // Input limit
    printf("Enter the limit for the Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci Series up to %d terms:\n", limit);

    // Print the first two terms of the Fibonacci series
    printf("%d, %d, ", first, second);

    // Generate the Fibonacci series up to the given limit
    for (int i = 2; i < limit; i++) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int number , factorial = 1; // Using unsigned long long to handle large values

    // Ask the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the input is valid
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %d", number, factorial);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use while loop to calculate the sum of digits
    while (n != 0) {
        sum += n % 10;  // Extract the last digit and add to sum
        n /= 10;        // Remove the last digit
    }

    // Print the result
    printf("The sum of digits is %d \a", sum);

    return 0;
}

#include <stdio.h>

int main() {
    int n;

    // Input: Number of elements in the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array of size n
    int squares[n];  // Array to store the squares

    // Input: Array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the square of each element and store in the squares array
    for (int i = 0; i < n; i++) {
        squares[i] = arr[i] * arr[i];
    }

    // Output: Display the original numbers and their squares
    printf("\nOriginal numbers and their squares:\n");
    for (int i = 0; i < n; i++) {
        printf("%d^2 = %d\n", arr[i], squares[i]);
    }

    return 0;
}

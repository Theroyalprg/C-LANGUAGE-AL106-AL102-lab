#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements into the array
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements in the array
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the result
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}

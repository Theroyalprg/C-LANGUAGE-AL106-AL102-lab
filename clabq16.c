// #include <stdio.h>

// int main() {
//     int n;

//     // Ask the user to input the number of elements in the array
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];  // Declare an array of size 'n'
//     int sum = 0, max, min;

//     // Ask the user to input the elements of the array
//     printf("Enter elements of array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Initialize max and min to the first element of the array
//     max = arr[0];
//     min = arr[0];

//     // Process the array: calculate sum, find max and min
//     for (int i = 0; i < n; i++) {
//         sum += arr[i]; // Add the current element to the sum

//         if (arr[i] > max) {
//             max = arr[i]; // Update max if the current element is greater
//         }

//         if (arr[i] < min) {
//             min = arr[i]; // Update min if the current element is smaller
//         }
//     }

//     // Display the results
//     printf("Sum of all elements: %d\n", sum);
//     printf("Maximum element: %d\n", max);
//     printf("Minimum element: %d\n", min);

//     return 0;
// }
#include <stdio.h>

// Function to find the maximum element in the array
int formax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum element in the array
int formin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int x;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &x);

    // Declare an array of size n
    int arr[x];

    // Input elements into the array
    printf("Enter %d elements: \n", x);
    for (int i = 0; i < x; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find maximum and minimum elements using functions
    int max = formax(arr, x);
    int min = formin(arr, x);

    // Output the results
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}

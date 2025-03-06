#include <stdio.h>
#include <math.h> // For predefined functions like sqrt

// User-defined function to calculate the cube of a number
int sq(int num) {
    return num * num;
}

int main() {
    int n, power, UDsq;

    // Prompt the user to enter a number
    printf("enter a number: ");
    scanf("%d", &n);

    // Calculate the square root using the predefined function
    power = pow(n,2);

    // Calculate the cube using the user-defined function
    UDsq = sq(n);

    // Display the results
    printf("Square of  %d (Using pre defined function)is: %d\n", n, power);
    printf("Square of %d is: %d\n", n, UDsq);

    return 0;
}

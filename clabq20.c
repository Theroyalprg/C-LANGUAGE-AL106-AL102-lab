#include <stdio.h>

int main() {
    int n = 10;           // Declare an integer variable
    int *ptr = &n;        // Declare a pointer and assign it the address of num

    // Display the value of the variable using the pointer
    printf("Value of num: %d\n", *ptr);

    // Display the address of the variable using the pointer
    printf("Address of num: %p\n", ptr);

    // Display the address of the pointer itself
    printf("Address of pointer: %p\n", &ptr);

    // Modify the value of the variable through the pointer
    *ptr = 20;
    printf("New value of num: %d\n", n);

    return 0;
}

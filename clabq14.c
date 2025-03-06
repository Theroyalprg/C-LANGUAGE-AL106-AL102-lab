#include <stdio.h>

// Function using call by value
int increment(int n ) ;

int main() {
    int x = 5;

    printf("Before function call: x = %d\n", x);
    increment(x); // Call by value (x is passed as an argument)
    printf("After function call: x = %d\n", x);

    return 0;
}
int increment(int n)
{
    n= n+ 1; // Modify the local copy
    printf("Inside function: num = %d\n", n);
    return 0;
}
// #include <stdio.h>

// // Function using call by reference
// void increment(int *num) {
//     *num = *num + 1; // Modify the value at the address
//     printf("Inside function: num = %d\n", *num);
// }

// int main() {
//     int x = 5;

//     printf("Before function call: x = %d\n", x);
//     increment(&x); // Pass the address of x
//     printf("After function call: x = %d\n", x);

//     return 0;
// }

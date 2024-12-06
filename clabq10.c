#include <stdio.h>

int main() {
     int a=10;
    // printf("enter a number: ");
    // scanf("%d",&a);

    for (int i = 1; i <= a; i++) {         // Outer loop for rows (1 to 5)
        for (int j = 1; j <= 10; j++) {     // Inner loop for columns (1 to 5)
            printf("%d\t", i * j);         // Multiply i and j and print the result
        }
            printf("\n");            // Newline after each row
    }
    return 0;
}
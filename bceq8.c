// #include <stdio.h>

// int main() {
//     float celsius, fahrenheit;

//     // Ask the user to enter the temperature in Celsius
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);

//     // Check if the entered temperature is valid
//     if (celsius >= -273.15) { // Absolute zero in Celsius
//         // Convert Celsius to Fahrenheit
//         fahrenheit = (celsius * 9 / 5) + 32;
//         printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
//     } else {
//         printf("Entered temperature is below absolute zero and is invalid.\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main() {
//     float C, F ;
//     printf("enter temp in C ");
//     scanf("%f" , &C);
//     if (0)
//     {
//         F= (C*1.8)+32;
//         printf(" TEMP IN F is :%f ",F);
//     }
//     else
//     {
//         printf("invalid");
//     }
    
// return 0;
// }

/* Q-> F TO C & vice versa */

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    char choice;

    // Ask the user for the type of conversion
    printf("Enter 'C' to convert Celsius to Fahrenheit\n enter 'F' to convert F to C  ");
    printf("choice: ");
    scanf(" %c", &choice);

    // Perform the chosen conversion using if statements
    if (choice == 'C') {
        // Convert Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } 
    else  {
        // Convert Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } 

    return 0;
}

#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 3;

    // Example 1: Using different operators
    int result1 = a + b * c - b / c + a % c;
    // Explanation:
    // 1. Multiplication (*) and division (/) have higher precedence than addition (+) and subtraction (-)
    // 2. The modulus operator (%) has the same precedence as multiplication and division, and is evaluated from left to right.
    // 3. Addition and subtraction are evaluated last.

    // Example 2: Using parentheses to change precedence
    int result2 = (a + b) * (c - b) / a;
    // Explanation:
    // Parentheses () have the highest precedence and force the operations inside to be performed first.

    // Example 3: Combining assignment with arithmetic
    int result3 = a;
    result3 += b * c - b / c + a % c;
    // Explanation:
    // Assignment has the lowest precedence, so first, the arithmetic operation is evaluated, and then the result is assigned to result3.

    // Output the results
    printf("Result 1 : %d\n", result1);
    printf("Result 2 : %d\n", result2);
    printf("Result 3 : %d\n", result3);

    return 0;
}

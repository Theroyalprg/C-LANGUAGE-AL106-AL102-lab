#include <stdio.h>

int main() {
    int a, b;

    printf("Insert two numbers");
    scanf("%d %d",&a,&b);
    // Compare the numbers
    if (a > b) {
        printf("(%d) is greater than (%d).\n", a, b);
    } else if (a < b) {
        printf(" (%d) is greater than (%d).\n",b ,a);
    } else {
        printf("Both numbers are equal");
    }

    return 0;
}


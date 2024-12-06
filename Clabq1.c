// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     printf("Enter the value of b: ");
//     scanf("%d", &b);
   
//     printf(" a = %d, b = %d", b, a);

//     return 0;
// }
#include <stdio.h>

void main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After interchange: a = %d, b = %d\n", a, b);

    
}
#include <stdio.h>

int main() {
    int a = 6, b;
   b= a++;
   printf("value assigned to a and b after post increment is %d and %d repectively",a,b);

   b= ++a;
   printf("\n value assigned to a and b after pre incremnet is %d and %d repectively ",a,b);
return 0;
} 
    
// }
// // #include <stdio.h>

// // int main() {
// //     int a = 5, result;

// //     // Pre-increment
// //     result = ++a;
// //     printf("Pre-increment: result = %d\n",  result);

// //     // Post-increment
// //     result = a++;
// //     printf("Post-increment: %d", result);
// //     return 0;
// // }
// #include <stdio.h>

// int main()
// {
//     int x = 7, y;
    
//     y = ++x;
//     printf("After pre-increment x = %d, y = %d\n", x, y);

//     y = x++;
//     printf("After post-increment x = %d, y = %d\n", x, y);

//     return 0;
// }



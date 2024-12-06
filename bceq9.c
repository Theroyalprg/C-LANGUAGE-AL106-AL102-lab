#include <stdio.h>
void main(){
     int n;
    printf("Enter a number:");
    scanf("%d", &n);
    // using % operator 
    if (n%2==  0)
    {
        printf("NUMBER IS EVEN");
    }
    else{
        printf("number is odd");
    }
 
}
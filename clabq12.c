#include <stdio.h>

int main(){
    int i, reverse = 0, n;
    printf("Enter a number:");
    scanf("%d", &i);
    do{
    n = i % 10;
        reverse = reverse * 10 + n;
        i /= 10;
    } while(i > 0);

    printf("The reversed number is %d\n", reverse);
    
    return 0;
}
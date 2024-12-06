#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter Length (in cm) of 3 sides of triangle: ");
    scanf("%d%d%d" , &a,&b,&c);
    if (a==b && b==c)
    {
        printf("equilateral");
    }
    else if (  a!=b && c != b && a!=c)
    {
        printf("scalene");
    }
    
    else
    {
        printf("isosceles");
    }
    

return 0;
}
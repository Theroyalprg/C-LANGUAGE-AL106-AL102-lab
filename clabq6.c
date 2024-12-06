#include <stdio.h> 
int main() {
    float a;
    printf("Enter your percentage: ");
    scanf("%f",&a);
    if(a>=95){
        printf("GRADE - A");
    }
    else if (a>=85)
    {
        printf("GRADE -B");
    }
    else if(a>=75){
        printf("GRADE -C");
    }
    else if (a>=65){
    printf("GRADE -D");
    }
    else{
        printf("FAIL");
    }
    return 0;
}
#include <stdio.h>
int rec(int n){
    int x;
    if(n==0)
    return(1);
    else
    x=n*rec(n-1);
    return(x);

}
int main(){
    int a, factorial;
    printf("Enter a number: ");
    scanf("%d",&a);
     factorial= rec(a);
     printf("Factorial of number is = %d\n",factorial);
     return 0;
}
#include <stdio.h>
int main(){
    int largest , smallest , a , b ,c;
    printf("Insert any 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
   largest = (a>b)? ((a>c)? a:c): ((b>c)? b:c);
   smallest= (a<b)? ((a<c)? a:c): ((b<c)? b:c);
   printf("%d is the largest number ", largest);
   printf("\n %d is the smallest number" , smallest);
   return 0;

}
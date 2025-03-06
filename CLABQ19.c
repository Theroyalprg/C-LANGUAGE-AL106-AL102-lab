#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p1;
    int(*p2)[5];
    p1=arr;
    p2=&arr;
    printf("p1=%p\n",p1);
    printf("*p2=%p\n\n",p2);
    p1++;
    p2++;
    printf("p1=%p\n",p1);
    printf("*p2=%p",p2);
    return 0;

}
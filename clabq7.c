#include <stdio.h>
int main(){
float a,b;
char operator;
printf("Select operator(+ - * /) ");
scanf("%c",&operator);
printf("enter two numbers : ");
scanf("%f%f", &a,&b);
switch (operator)
{
case '+':
printf("%f + %f=%f \n",a,b,a+b);
    break;
case '-' :
printf("%f-%f=%f",a,b,a-b);
break;
case '*' :
printf("%f*%f=%f",a,b,a*b);
break;
case '/' :
printf("%f/%f=%f",a,b,a*b);
default:
printf("Error");
    break;
}
return 0;
}
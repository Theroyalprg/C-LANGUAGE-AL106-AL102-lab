#include<stdio.h>

#include<string.h>

int main()

{

    char str[10];

    int i, len = 0, flag = 0;

    printf("Enter a string: ");

    scanf("%s",str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {

        if (str[i] == str[len - i - 1])

        flag++;

    }

    if (flag == i)

        printf("String is a Palindrome");

    else

        printf("Not a palindrome");

    return 0;

 

}
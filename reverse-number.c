#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    printf("Enter a Number");
    scanf("%s",&num);

    strrev(num);
    printf("Reverse number%s",num);

    return 0;
}
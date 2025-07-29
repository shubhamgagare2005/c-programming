#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("Enter a number");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        int rem=n%10;
        rev = rev*10+rem;
        n/=10;
    }
    if(rev == temp)
    printf("palindrome number");
else
printf("Not palindrome Number");
return 0;
}
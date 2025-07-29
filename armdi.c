#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    int cnt=0;
    while(n>0)
    
{
    cnt++;
    n=n/10;
}
printf("count is %d",cnt);
return 0;
}
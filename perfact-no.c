#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a num");
    scanf("%d",&n);
    for(i=1 ;i<=n; i++)
    {
        if(n%i == 0)
        printf("\n%d",i);
    }
    return 0;
}
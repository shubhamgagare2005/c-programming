#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 Numbers ");
    scanf("%d%d",&a,&b);
    printf("Before swapping \nA=%d\nB=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n After Swpping \nA=%d\nB=%d",a,b);
    return 0;
}
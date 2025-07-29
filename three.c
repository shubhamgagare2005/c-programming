#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 value \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>c)
    printf("Max is %d",a);
    else 
    if(b>c && b>a)
    printf("Max is %d",b);
    else
    printf("Max is %d",c);
return 0;

}
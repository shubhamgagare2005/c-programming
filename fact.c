#include<stdio.h>
int main()
{
    int i=1,x,y,result=1;
    printf("Enter x:");
    scanf("%d",&x);

    printf("Enter y:");
    scanf("%d",&y);

    while(i<=y)
    {
        result=result*x;
        i++;
    }
        printf("The %d is power %d is %d\n",x,y,result);

        return 0;
        
}
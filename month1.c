#include<stdio.h>
int main()
{
    int mon;
    printf("Enter the month no");
    scanf("%d",&mon);
    switch(mon)
    {
         case 1 :
         case 3 :
         case 5 :
         case 7 :
         case 8 : 
         case 10 :
         case 11 :
         case 12 : printf("31 days");
        break;
        case 2 : printf("28/29 days");
        case 4 :
        case 6 :
        case 9 :
        default:
        printf("Invalid Number");
 }
return 0;

 }
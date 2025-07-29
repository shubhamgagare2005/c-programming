#include<stdio.h>
int main()
{
 
   int a,b,ch;
   printf("\n1.Addition\2.subtraction\3.multiplication\n4.division\nEnter a choice");
   scanf("%d",&ch);
   printf("Enter 2 number ");
   scanf("%d%d",&a,&b);
   switch(ch)
   {
    case 1 : printf("Addition is %d",(a+b));
    break;
    case 2 : printf("substraction is %d",(a-b));
    break;
    case 3 : printf("mltiplication is %d",(a*b));
    break;
    case 4 : printf("Division is %d",(a/b));
    break;
    default :
    printf("Invalid choice");
    return 0;
   }
}
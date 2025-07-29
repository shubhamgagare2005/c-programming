
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any Alphabet");
    scanf("%c",&ch);
    switch(ch)
    {
         case 'a' :
         case 'e' :
         case 'o':
         case 'i':
         case 'u' :
    
        printf("vowel");
        break;

        
        default:
        printf("Constant");
 }
return 0;

 }
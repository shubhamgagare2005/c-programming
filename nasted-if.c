#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter hours :");
    scanf("%d",&h);
    printf("Enter mintes");
    scanf("%d",&m);
    printf("Enter seconds");
    scanf("%d",&s);
      if(h>=0 && h<24)
      {
        if(m>= 0&&m <66)
        {
            if(s>=0 &&s<60)
            printf("Time is valid");
            else
            printf("Seconds are Invalid");
      }
         else
         printf("Minutes are Invalid");
      }
         else
         printf("Hours are Invalid");

      return 0;
      
}
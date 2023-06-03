#include <stdio.h>
#include <stdlib.h>

void Lp(int Y)
{
    if(Y%400==0)
    {
        printf("%d is a leap year",Y);
    }
    else if (Y%400!=0&&Y%100==0)
    {
        printf("%d is not a leap year",Y);
    }
    else if(Y%4==0&&Y%100!=0)
    {
        printf("%d is a leap year",Y);
    }
}
int main()
{
   int Y;
   printf("Enter a year:");
   scanf("%d",&Y);
   Lp(Y);
    return 0;
}

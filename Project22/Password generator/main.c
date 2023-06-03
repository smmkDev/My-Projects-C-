#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char Sp(int spe)
{
   int n;
   srand(time(0));
   for(n=0;n<=7;n++)
  {
    spe=(rand()%(90-0+1))+0;
    if(spe>=0&&spe<=32)
   {
       printf("%d",spe);
   }
    if(spe>=33&&spe<=90)
   {
       printf("%c",spe);
   }
  }

   return spe;
}


int spe;
int main()
{
    printf("Your new password is:");
    Sp(spe);


    return 0;
}

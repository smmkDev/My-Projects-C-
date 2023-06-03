#include <stdio.h>
#include <stdlib.h>
int factorial(int Ans)
{

       int n1=5;
       int n2=1;
        Ans=5;
        for(n2=1;n2<n1;n2++)
        {
            int n3=n1-n2;
            if(n3==0)
            {
                break;
            }
            Ans=Ans*(n3);
        }
        printf("%d",Ans);

    return Ans;
}


int main()
{
  int Ans;
  factorial(Ans);
}



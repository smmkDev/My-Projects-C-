#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nums[]={8,3,2,1,7,6,4,0,9,5};
    int Sto;
    int i,j,k;
    for(i=0;i<=9;i++)
    {

     for(j=0;j<=9;j++)
     {
         for(k=j+1;k<=9;k++)

         if(Nums[j]>Nums[k])
                {
                    Sto=Nums[j];
                    Nums[j]=Nums[k];
                    Nums[k]=Sto;

                }

     }

     printf("%d\n",Nums[i]);
    }
    return 0;
}

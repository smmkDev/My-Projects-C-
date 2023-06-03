#include <stdio.h>
#include <stdlib.h>

int POW(int Base,int Pow,int Ans)
{
    int n=1;
    Ans=1;
    while(n<=Pow)
    {
       Ans=Ans*Base;
       n++;
    }
    printf("The Awnser is %d",Ans);
}
int main()
{
    int Base;
    printf("Enter base number:");
    scanf("%d",&Base);
    int Pow;
    printf("Enter power number:");
    scanf("%d",&Pow);
    int Ans;
    POW(Base,Pow,Ans);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void PER(int Num,int n,int Ans)
{
    Ans=0;
    for (n=1;n<Num;n++)
    {
     if(Num%n==0)
     {
        Ans=Ans+n;
     }
    }
    if (Ans==Num)
    {
        printf("The sum of proper divisors of %d is=%d\n",Num,Ans);
        printf("%d is a perfect number",Num);
    }
    if (Ans!=Num)
    {
        printf("The sum of proper divisors of %d is=%d\n",Num,Ans);
        printf("%d is not a perfect number",Num);
    }
}

int main()
{
    int Num;
    printf("Enter a number:");
    scanf("%d",&Num);
    int n,Ans;
    PER(Num,Ans,n);
    return 0;
}

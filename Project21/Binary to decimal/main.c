#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,num1,Ans=0,count=0;
    printf("Enter a binary number:");
    scanf("%d",&num);
    num1=num;
    for(num1;num1!=0;count++)
    {
        int quo=num1/10;
        int rem=num1%10;
        num1=quo;
        int Pow=pow(2,count);
        int Add=rem*Pow;
        Ans=Ans+Add;
    }
    printf("Decimal conversion of %d is=%d",num,Ans);
    return 0;
}

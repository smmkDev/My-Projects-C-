#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num;
    printf("Enter any number=");
    scanf("%d",&Num);
    int Mul=0;
    int Awnser;
    while(Mul!=13)
    {
        Awnser=Num*Mul;
        printf("%d*%d=%d\n",Num,Mul,Awnser);
        Mul++;
    }
    return 0;
}

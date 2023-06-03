#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num;
    printf("Enter a three digit number=");
    scanf("%d",&Num);
    int counter=0;
    int cube1,cube2,cube3;
    int Num1;
    Num1=Num;
    while(Num1!=0)
    {
    int Rem=Num1%10;
    int quo=Num1/10;
    Num1=quo;
    switch(counter)
   {case 0:cube1=Rem*Rem*Rem;
    break;
    case 1:cube2=Rem*Rem*Rem;
    break;
    case 2:cube3=Rem*Rem*Rem;
    break;}
    counter++;
    }
    printf("%d\n%d\n%d\n",cube3,cube2,cube1);
    int sum=cube1+cube2+cube3;
    if(sum==Num)
    {   printf("sum=%d\n",sum);
        printf("%d is an armstrong number",Num);
    }
    else
       {
        printf("sum=%d\n",sum);
        printf("%d is not an armstong number",Num);}
    return 0;
}

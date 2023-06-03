#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num;
    printf("Enter a three digit Number:");
    scanf("%d",&Num);
    int Num1=Num;
    int count=0;
    int Result;
    while(Num1!=0)
    {
    count++;
    int Rem=Num1%10;
    int Quo=Num1/10;
    Num1=Quo;
    switch(count)
    {
      case 1:Result=Rem*10;
      break;
      case 2:Result=Result+Rem;
      break;
      case 3:Result=(Result*10)+Rem;
             printf("Result=%d\n",Result);
      break;
     }
    }
     if(Result==Num)
     {
         printf("%d is a palindrome number",Num);
     }
     else
         printf("%d is not a palindrome number",Num);


    return 0;
}

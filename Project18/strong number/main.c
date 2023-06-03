#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int num1=num;
    int Ans=0;
    for(num1;num1!=0;)
    {
        int quo=num1/10;
        int rem=num1%10;
        num1=quo;
        //Factorial
        int fact;
        int n1=rem;
        int n2=1;
        fact=rem;
        for(n2=1;n2<n1;n2++)
        {
            int n3=n1-n2;
            if(n3==0)
            {
                break;
            }
            fact=fact*(n3);

        }
        Ans=Ans+fact;
    }
        if(Ans==num)
        {
         printf("The sum of the factorial of each digit is:%d\n",Ans);
         printf("The number you entered (%d) is a strong number ",num);
        }
        else
        {
         printf("The sum of the factorial of each digit is:%d\n",Ans);
         printf("The number you entered (%d) is not a strong number ",num);

        }
    return 0;
}

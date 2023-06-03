#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int UI(int fun,int pin1,int pin)
{
    printf("Enter your pin:");
    scanf("%d",&pin1);
    if(pin1==pin)
    {
        system("cls");
        printf("Welcome\n");
        printf("==============\n");
        printf("1)Check total balance\n2)Withdraw money\n3)Deposit money\n");
        printf("Enter desired function:");
        scanf("%d",&fun);
    }
    return fun;

}

int Balance(int Bal)
{
    system("cls");
    printf("===========\n");
    printf("Your current balance is:%d\n",Bal);
    return Bal;

}

int Withdraw(int Bal,int wid)
{
    system("cls");
    printf("===========\n");
    printf("How much money to be withdrawn:");
    scanf("%d",&wid);
    Bal=Bal-wid;
    printf("Your current balance is:%d\n",Bal);
    return wid;

}

int Deposit(int Bal,int dep)
{
    system("cls");
    printf("===========\n");
    printf("How much money to be deposited:");
    scanf("%d",&dep);
    Bal=Bal+dep;
    printf("Your current balance is:%d\n",Bal);
    return dep;

}

int wid,dep,fun,pin1;

int pin=4578;

int Bal=5000;

int main()
{
    printf("Enter your pin:");
    scanf("%d",&pin1);
    if(pin1==pin)
    {
        system("cls");
        printf("Welcome\n");
        printf("==============\n");
        printf("1)Check total balance\n2)Withdraw money\n3)Deposit money\n");
        printf("Enter desired function:");
        scanf("%d",&fun);
    }

    if(fun==1)
    {
      Balance(Bal);
    }

    if (fun==2)
    {
       Withdraw(Bal,wid);

    }

    if(fun==3)
    {
       Deposit(Bal,dep);
    }
    return 0;
}

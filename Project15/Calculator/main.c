#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("1.(+) 2.(-) 3.(*) 4.(/) 5.Mod 6.Square\n7.Cube 8.log 9.Root 10.Cuberoot\n11.sin 12.cos 13.tan 14.end\n\n");
    int Opt;
    int Count;
    for(Count=0;Opt!=13;Count++)
    {
        printf("Enter a valid operator number:");
        scanf("%d",&Opt);

        if(Opt==1)
        {
           double num1;
            printf("Enter first number");
            scanf("%lf",&num1);
           double num2;
            printf("Enter second number");
            scanf("%lf",&num2);
            double Awnser=num1+num2;
            printf("Awnser=%lf\n",Awnser);
        }
         else if(Opt==2)
        {
            double num1;
            printf("Enter first number");
            scanf("%lf",&num1);
            double num2;
            printf("Enter second number");
            scanf("lf",&num2);
           double Awnser=num1-num2;
            printf("Awnser=lf\n",Awnser);
        }
         else if(Opt==3)
        {
            double num1;
            printf("Enter first number");
            scanf("%lf",&num1);
            double num2;
            printf("Enter second number");
            scanf("%lf",&num2);
            double Awnser=num1*num2;
            printf("Awnser=%lf\n",Awnser);
        }
        else  if(Opt==4)
        {
            double num1;
            printf("Enter first number");
            scanf("%lf",&num1);
            double num2;
            printf("Enter second number");
            scanf("%lf",&num2);
            double Awnser=num1/num2;
            printf("Awnser=%lf\n",Awnser);
        }
        else if(Opt==5)
        {
            int num1;
            printf("Enter first number");
            scanf("%d",&num1);
            int num2;
            printf("Enter second number");
            scanf("%d",&num2);
            int Awnser=num1%num2;
            printf("Awnser=%d\n",Awnser);
        }
        else if(Opt==6)
        {
            double num;
            printf("Enter a number=");
            scanf("%lf",&num);
            double Awnser=num*num;
            printf("Awnser=%f\n",Awnser);
        }
        else if(Opt==7)
        {
            double num;
            printf("Enter a number=");
            scanf("%lf",&num);
            double Awnser=num*num*num;
            printf("Awnser=%f\n",Awnser);
        }
        else if(Opt==8)
        {
            double num;
            printf("Enter a number=");
            scanf("%lf",&num);
            double Awnser=log(num);
            printf("Awnser=%f\n",Awnser);
        }
        else if(Opt==9)
        {
            double num;
            printf("Enter a number=");
            scanf("%lf",&num);
            double Awnser=sqrt(num);
            printf("Awnser=%f\n",Awnser);
        }
        else if(Opt==10)
        {
            double num;
            printf("Enter a number=");
            scanf("%lf",&num);
            double Awnser=cbrt(num);
            printf("Awnser=%f\n",Awnser);
        }
        else if(Opt==11)
        {
            double num;
            printf("Enter a number=");
            scanf("%lf",&num);
            double Awnser=sin(num);
            printf("Awnser=%f\n",Awnser);
        }

        else if(Opt==12)
        {
            double num;
            printf("Enter a number=");
            scanf("%lf",&num);
            double Awnser=cos(num);
            printf("Awnser=%f\n",Awnser);
        }
        else if(Opt==13)
        {
            double num;
            printf("Enter a number=");
            scanf("%lf",&num);
            double Awnser=tan(num);
            printf("Awnser=%f\n",Awnser);
        }
        else
            break;
    }
    return 0;
}

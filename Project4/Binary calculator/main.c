#include <stdio.h>
#include <stdlib.h>

int main()
{   char op;
    printf("Select an operator:");
    scanf("%s",&op);
    double num1;
    printf("Enter first number:");
    scanf("%lf",&num1);
    double num2;
    printf("Enter second number:");
    scanf("%lf",&num2);
   if(op=='=')
   {
       printf("Awnser= %lf",num1+num2);
   }
   else if(op=='-')
     {
         printf("Awnser= %lf",num1-num2);
     }
     else if(op=='*')
     {
         printf("Awnser= %lf",num1*num2);
     }
     else if(op=='/')
     {
         printf("Awnser= %lf",num1/num2);

     }
    return 0;
}

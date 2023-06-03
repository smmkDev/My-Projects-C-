#include <stdio.h>
#include <stdlib.h>

int main()
{   char name[20]="Mustafa";
    printf("%s\n",name);
    char letter;
    printf("Enter a letter=");
    scanf("%c",&letter);
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    switch(num)
    {
        case 1:name[0]=letter;
               printf("%s",name);
        break;
        case 2:name[1]=letter;
               printf("%s",name);
        break;

        case 3:name[2]=letter;
               printf("%s",name);
        break;
        case 4:name[3]=letter;
               printf("%s",name);
        break;
         case 5:name[4]=letter;
               printf("%s",name);
        break;
         case 6:name[5]=letter;
               printf("%s",name);
        break;
         case 7:name[6]=letter;
               printf("%s",name);
        break;
        default:printf("Invalid number\n");}
    return 0;
}

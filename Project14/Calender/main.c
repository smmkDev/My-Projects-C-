#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum days{Mon=1,Tue=2,Wed=3,Thurs=4,Fri=5,Sat=6,Sun=7};

int main()
{
    time_t currenttime;
    time(&currenttime);
    printf("%s\n",ctime(&currenttime));
    int counter=1;
    int date[31]={1,2,3,4,5,6,7,8,9,10,
                  11,12,13,14,15,16,17,
                  18,19,20,21,22,23,24,
                  25,26,27,28,29,30,31};
    int j;
    int MonthNo;
    char Month[25];
    for(MonthNo=1;MonthNo<=12;MonthNo++)
    {
        if(counter%2!=0)
        {
            switch(MonthNo)
            {
                case 1: strcpy(Month,"January");
                        printf("%s\n",Month);
                        for(j=0;j<=30;j++)
                        {

                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 2: strcpy(Month,"February");
                        printf("%s\n",Month);
                        for(j=0;j<=28;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 3: strcpy(Month,"March");
                        printf("%s\n",Month);
                        for(j=0;j<=30;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 4: strcpy(Month,"April");
                        printf("%s\n",Month);
                        for(j=0;j<=29;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 5: strcpy(Month,"May");
                        printf("%s\n",Month);
                        for(j=0;j<=30;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 6: strcpy(Month,"June");
                        printf("%s\n",Month);
                        for(j=0;j<=29;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 7: strcpy(Month,"July");
                        printf("%s\n",Month);
                        for(j=0;j<=30;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 8: strcpy(Month,"August");
                        printf("%s\n",Month);
                        for(j=0;j<=29;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 9: strcpy(Month,"september");
                        printf("%s\n",Month);
                        for(j=0;j<=30;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;

            case 10: strcpy(Month,"October");
                        printf("%s\n",Month);
                        for(j=0;j<=29;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 11: strcpy(Month,"November");
                        printf("%s\n",Month);
                        for(j=0;j<=30;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
                case 12: strcpy(Month,"december");
                        printf("%s\n",Month);
                        for(j=0;j<=29;j++)
                        {
                            printf("%d  ",date[j]);
                        }
                        printf("\n");
                break;
        }
        }
    }
    return 0;
}

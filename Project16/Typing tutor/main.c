#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int session(int choice,int level,char Let,int speed,double accuracy,int score)
{
   system("cls");
   int i;
   clock_t begin;
   double time_spent;
   char small[25]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   begin=clock();
   for(i=0;i<=600;i++)
    {
     rh:
     time_spent=(double)(clock()-begin)/CLOCKS_PER_SEC;
     if(time_spent>=6.0)
      {
        break;
      }
     printf("Time:%f\n\n",time_spent);
     srand(time(0));
     int n=(rand()%(25-0+1))+0;
     printf("%c\n",small[n]);
     printf("start typing:");
     Let=getchar();
     system("cls");
     if(Let==small[n])
     {
      score=score+5;
      goto rh;
     }
     }
     accuracy=(score/i)/i*100;
     speed=score/i;
     printf("\nScore:%d",score);
     accuracy=((score/i)/i)*100;
     speed=score/i;
     printf("\nAccuracy:%f%%",accuracy);
     printf("\nSpeed:%d letter per min",speed);
     return score;
}

int session1(int choice,int level,char Let,int speed,double accuracy,int score)
{
   system("cls");
   int i;
   clock_t begin;
   double time_spent;
   char small[25]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   begin=clock();
   for(i=0;i<=600;i++)
    {
     rh:
     time_spent=(double)(clock()-begin)/CLOCKS_PER_SEC;
     if(time_spent>=6.0)
      {
        break;
      }
     printf("Time:%f\n\n",time_spent);
     srand(time(0));
     int n=(rand()%(25-0+1))+0;
     printf("%c\n",small[n]);
     printf("start typing:");
     Let=getchar();
     system("cls");
     if(Let==small[n])
     {
      score=score+5;
      goto rh;
     }
     }
     printf("\nScore:%d",score);
     accuracy=(score/i)/i*100;
     speed=score/i;
     printf("\nAccuracy:%f%%",accuracy);
     printf("\nSpeed:%d letter per min",speed);
     return score;
}

int session2(int choice,int level,int num,int speed,double accuracy,int score)
{
   system("cls");
   int i;
   clock_t begin;
   double time_spent;
   int small[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
   begin=clock();
   for(i=0;i<=600;i++)
    {
     rh:
     time_spent=(double)(clock()-begin)/CLOCKS_PER_SEC;
     if(time_spent>=6.0)
      {
        break;
      }
     printf("Time:%f\n\n",time_spent);
     srand(time(0));
     int n=(rand()%(25-0+1))+0;
     printf("%d\n",small[n]);
     printf("start typing:");
     scanf("%d",&num);
     system("cls");
     if(num==small[n])
     {
      score=score+5;
      goto rh;
     }
     }
     printf("\nScore:%d",score);
     accuracy=(score/i)/i*100;
     speed=score/i;
     printf("\nAccuracy:%f%%",accuracy);
     printf("\nSpeed:%d letter per min",speed);
     return score;
}

char dataw(int score,char name[20])
{
    system("cls");
    printf("Enter your first name:\n");
    scanf("%s",&name);
    FILE *fp=fopen("Record.txt","r+");
    {
       fprintf(fp,"=========\nName:%s \nScore:%d",name,score);
    }fclose(fp);
    return name;
}

void datar(int score,char name[20])
{
    char line;
    FILE *fp=fopen("Record.txt","r");
    {
       do
         {
           line=fgetc(fp);
           printf("%c",line);
         }while(line!=EOF);

    }fclose(fp);
}


int choice,level,back,num,speed,score=0;
double accuracy;
char Let;
char name[20];
int main()
{
    printf("****************\n");
    printf("Welcome to typing tutor\n");
    printf("****************\n");
    printf("Rules:\nThe time given will be 60 seconds\n");
    printf("correct entry will increase score by (5)\n");
    printf("\nNote: Select level first\n");
    mai:
    printf("Main menu:\n1)start session\n2)Levels\n3)statistics\n4)Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:if ((level==1))
             {
               session(choice,level,Let,accuracy,speed,score);
               int c;
               printf("\nPress 0 to continue:");
               scanf("%d",&c);
               if(c==0)
               {
                 dataw(score,name);
               }
             }
             else if ((level==2))
             {
               session1(choice,level,Let,accuracy,speed,score);
               int c;
               printf("\nPress 0 to continue:");
               scanf("%d",&c);
               if(c==0)
               {
                 dataw(score,name);
               }
             }
             else if ((level==3))
             {
               session2(choice,level,Let,accuracy,speed,score);
               int c;
               printf("\nPress 0 to continue:");
               scanf("%d",&c);
               if(c==0)
               {
                 dataw(score,name);
               }
             }
              break;
      case 2: system("cls");
              printf("1)Level 1 (small letters)\n");
              printf("2)Level 2 (capital letters)\n");
              printf("3)Level 3 (Numbers)\n");
              printf("Enter your level:");
              scanf("%d",&level);
              printf("\nPress 0 to go back:");
              scanf("%d",&back);
              if(back==0)
              {
               goto mai;
              }
              break;
       case 3:datar(score,name);
    }
    return 0;
}

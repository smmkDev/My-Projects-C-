#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    time_t currentTime;
    time(&currentTime);
    printf("%s\n",ctime(&currentTime));
    double runrate;
    double overs;
    for(overs=0.1;overs<=5;overs+=0.1)
    {
        int runs;
        printf("Runs scored=");
        scanf("%d",&runs);
        signed int wickets;
        printf("Wicket fallen=");
        scanf("%d",&wickets);
        int score=score+runs;
        if(wickets!=0)
        {
            wickets=wickets+(wickets-1);
        }


        runrate=score/overs*(0.6);
        printf("%d/%d  overs=%0.1f\n",score,wickets,overs);
        printf("Run rate=%0.2f\n",runrate);

    }



    return 0;
}

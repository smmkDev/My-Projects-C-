#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=20,i=1,n1,n2=2,count=0;
    for(n1=1;n1<=n;)
    {

        if (n1==1)
        {
           printf("%d\n",i);
        }
        n1++;
        i++;
        printf("%d ",i);
        count++;
        if (count==n2)
        {
            printf("\n");
            n2++;
            count=0;
        }

    }

    return 0;
}

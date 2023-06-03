#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,n1,n2,count;
    printf("How many digits in the series:");
    scanf("%d",&n);
    int num=1;
    printf("%d,",num);
    for(count=0;count<n;count++)
    {

        if(count%2==0)
        {

            n1=num;
            if(count<1)
            {
             num=num+n1;
            }else
            {
                num=n1+n2;
            }
            printf("%d,",num);
            continue;
        }
        if(count%2!=0)
        {
            n2=num;
            num=n1+n2;
        }
       printf("%d,",num);



    }


    return 0;
}

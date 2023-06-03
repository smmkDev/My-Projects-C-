#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    for(num=0;num<100;num++)
    {
        if(num%2!=0 || num==2)
        {
            printf("%d\n",num);
        }
    }
    return 0;
}

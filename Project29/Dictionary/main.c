#include <stdio.h>
#include <stdlib.h>


int value[2];
int Key[2];

int add_dict(int key, int val, int count)
{
    Key[count]=key;
    value[count]=val;
    count+=1;
    return count;
}

void call_value(int key)
{
    int i;
    for(i=0;i<=1;i++)
    {
        if (Key[i]==key)
        {
            printf("%d",value[i]);
            break;
        }
    }
}

void print_dict()
{
    int i;
    printf("{");
    for(i=0;i<=1;i++)
    {

        printf(" %d:%d,",Key[i],value[i]);
    }
    printf("}");
}

int main()
{
    int index=0;
    index = add_dict(2,3,index);
    index = add_dict(4,5,index);
    print_dict();
    return 0;
}

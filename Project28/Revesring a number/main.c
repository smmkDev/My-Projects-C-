#include <stdio.h>
#include <stdlib.h>

int reverse(int num,int result)
{
    int mod=num%10;
    int quo=num/10;
    result=mod;
    num=quo;
    printf("%d",result);
    if (quo==0)
    {
      return result;
    }
    result=reverse(num,result);

}

int main()
{
    int x=123;
    int num=reverse(x,0);
    return 0;
}

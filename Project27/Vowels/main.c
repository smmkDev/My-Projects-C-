#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char vow[20]={"aeiouAEIOU"};
    char let[20];
    printf("Enter a phrase:");
    gets(let);
    int count=0;
    int i,n;
    int len=strlen(let);
    for(i=0;i<=len;i++)
    {
        for(n=0;n<=9;n++)
        if(let[i]==vow[n])
        {
            count=count+1;
        }
    }
    int con=len-count;
    printf("There are %d vowels\n",count);
    printf("There are %d consonants",con);
    return 0;
}

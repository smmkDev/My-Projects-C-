#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer=fopen("F:\\Name.txt","w");
    fprintf(fpointer,"Mustafa kazmi");
    fclose(fpointer);
    return 0;
}

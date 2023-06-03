#include <stdio.h>
#include <stdlib.h>
struct Accounts{
    char Name[20];
    int Number;
    int Balance;
    char Type[20];
};

int main()
{
    struct Accounts A1;
    strcpy(A1.Name,"Mustafa");
    A1.Number=1001;
    A1.Balance=1000;
    strcpy(A1.Type,"Credit");

     struct Accounts A2;
    strcpy(A2.Name,"Ali");
    A2.Number=1002;
    A2.Balance=1050;
    strcpy(A2.Type,"joint");
    printf("%s\n%d\n%d\n%s\n",A1.Name,A1.Number,A1.Balance,A1.Type);
    printf("%s\n%d\n%d\n%s\n",A2.Name,A2.Number,A2.Balance,A2.Type);
    return 0;
}

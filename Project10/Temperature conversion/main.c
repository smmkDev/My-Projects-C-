#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Tc;
    printf("Enter temperatue in celsius= ");
    scanf("%lf",&Tc);
    char Unit;
    printf("Which unit for conversion:");
    scanf("%s",&Unit);
    if (Unit="kelvin")
    {
        double Tk;
        Tk=Tc+273;
        printf("Temperature in kelvin=%f",Tk);
    } else if(Unit="farenheit")
    {
        double Tf;
        Tf=(1.8*Tc)+32;
        printf("Temperature in farenheit=%f",Tf);
    }else printf("Invalid unit");

    return 0;
}

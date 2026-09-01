#include <stdio.h>
int main ()
{
    float  t;
    printf("\n Enter temp in degree celsius : ");
    scanf("%f",&t);

    float T = ((t * 9.0/5 ) + 32) ;
    printf("\n Temp in degree fahrenheit is : %f", T);


    return 0;


}
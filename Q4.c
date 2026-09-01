#include <stdio.h>
int main()
{
    float r;
    printf("\n Enter radius : ");
    scanf("%f",&r);

    float pi = 3.14;

    float area = pi*r*r ;
    float coc = 2*pi*r ;

    printf("Area : %f",area);
    printf("\nCircumference : %f",coc); 

    return 0;



}

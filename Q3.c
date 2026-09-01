#include <stdio.h>
int main()
{
    float x ;
    printf("\n Enter length : ");
    scanf("%f",&x);

    float y ;
    printf("\n Enter Breadth : ");
    scanf("%f",&y);

    float area = x*y;
    float per = x+x+y+y;

    printf("Area of rectangle is : %f ", area);
    printf("\n Perimeter of rectangle is : %f",per);
    
    return 0;
    
}
#include <stdio.h>
int main()
{
    int x , y ;
    printf("Enter number : ");
    scanf("%d %d",&x,&y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("After swap : %d %d",x,y);
    return 0;
    

}
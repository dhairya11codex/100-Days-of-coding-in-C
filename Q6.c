#include <stdio.h>
int main()
{
    int x , y , c;
    printf("Enter number : ");
    scanf("%d %d" , &x , &y );
    c = x;
    x = y;
    y = c;

printf("After Swap : %d %d\n5",x , y );
return 0;

}
#include <stdio.h>
int main()
{
    int x ;
    printf("Enter an integer : ", x);
    scanf("%d", &x);


    if (x % 2 == 0)
    { 
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    return 0;
    

}
#include <stdio.h>
int main()
{
    int totalsec ;
    int hours ;
    int minutes ;
    int sec;
    printf("Enter the time in seconds : ",totalsec);
    scanf("%d", &totalsec);

    hours = totalsec/3600;
    totalsec = totalsec % 3600;
    minutes = totalsec / 60 ;
    sec = totalsec % 60 ; 

    printf("%d:%d:%d", hours , minutes , sec);
    return 0;

}
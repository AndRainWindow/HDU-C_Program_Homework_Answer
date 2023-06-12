#include<stdio.h>
int main()
{
    int hour,minutes;
    scanf("%d:%d",&hour,&minutes);
    if (hour>=12)
    {
        if(hour==12&&minutes==0)
        printf("%02d:%02d AM",hour,minutes);
        else
        printf("%02d:%02d PM",hour-12,minutes);
    }
    else
    {
        printf("%02d:%02d AM",hour,minutes);
    }
    return 0;
}
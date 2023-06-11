#include<stdio.h>
int main(){
    int m,h;
    int time_1,time_2;
    scanf("%d %d",&time_1,&time_2);
    h=time_2/100-time_1/100;
    m=time_2%100-time_1%100;
    if (m<0)
    {
        m=m+60;
        h=h-1;
    }
    printf("%02d:%02d",h,m);
    return 0;
}
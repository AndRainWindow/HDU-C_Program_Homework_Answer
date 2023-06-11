#include<stdio.h>
int main()
{
    int year,month,day;
    scanf("%d-%d-%d",&month,&day,&year);
    printf("%02d-%02d-%02d",year,month,day);//输出两位数，不够用0补位。
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,d;
    double sum;
    double average;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    average=sum/4;//注意整数直接除只会保留整数部分。
    printf("Sum = %.0lf; Average = %.1lf",sum,average);
    return 0;
}
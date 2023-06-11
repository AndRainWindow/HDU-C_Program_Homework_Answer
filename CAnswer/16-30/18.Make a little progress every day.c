#include<stdio.h>
#include<math.h>
int main(){
    int day;
    double a,b;
    scanf("%d",&day);
    a=pow(1.01,day);
    b=pow(0.99,day);
    printf("%.2lf %.2lf %.1lf%%",a,b,(a/b)*100);
    return 0;
}
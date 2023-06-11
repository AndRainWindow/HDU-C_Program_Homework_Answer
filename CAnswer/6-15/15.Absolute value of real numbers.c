#include<stdio.h>
#include<math.h>
int main(){
    double a;
    scanf("%lf",&a);
    //a=abs(a);  abs返回的只能是整数形，正解应该是fabs
    a=fabs(a);  //abs返回的只能是整数形，正解应该是fabs
    printf("%.2lf",a);
    return 0;
}
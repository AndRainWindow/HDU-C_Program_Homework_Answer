#include<stdio.h>
#include<math.h>
int main(){
    double x,fx;
    scanf("%lf",&x);
    if (x<0)
    {
        fx=pow((x+1),2)+2*x+1/x;
    }
    else
    {
        fx=sqrt(x);
    }
    printf("f(%.2lf) = %.2lf",x,fx);
    return 0;
}
#include<stdio.h>
int main(){
    int H;
    scanf("%d",&H);
    double weight=((H-100)*0.9)*2;
    printf("%.1lf",weight);
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int Hundredth_place;
    int Ten_place;
    int Unit_place;
    Hundredth_place=(a/100)%10;
    Ten_place=(a/10)%10;
    Unit_place=a%10;
    printf("%d,%d,%d\n",Hundredth_place,Ten_place,Unit_place);
    printf("%d",Hundredth_place*Hundredth_place*Hundredth_place+Ten_place*Ten_place*Ten_place+Unit_place*Unit_place*Unit_place);
}
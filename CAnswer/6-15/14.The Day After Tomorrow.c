#include<stdio.h>
int main(){
    int Day;
    scanf("%d",&Day);
    Day=(Day+2)%7;
    if (Day==0)
    {
        printf("7");
    }
    else{
        printf("%d",Day);
    }
    return 0;
}
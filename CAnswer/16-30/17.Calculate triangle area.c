#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    int area;
    scanf("%d%d",&x,&y);
    area=(100*100-100*y-100*(100-x))/2;
    printf("%d",area);
    return 0;
}
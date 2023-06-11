#include<stdio.h>
int main(){
    double fever;
    scanf("%lf",&fever);
    if(fever>37){
        printf("have a fever");
    }
    else{
        printf("no");
    }
    return 0;
}
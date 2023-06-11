#include<stdio.h>
int main()
{
    int side_length;
    scanf("%d",&side_length);
    int perimetr=4*side_length;
    int area=side_length*side_length;
    printf("%d %d",perimetr,area);
    return 0;
}
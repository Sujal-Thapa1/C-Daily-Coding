#include<stdio.h>
int main(int argc, char const *argv[])
{
    int length,breadth,area;
    printf("Enter the value of length");
    scanf("%d",&length);
    printf("Enter the value of breadth");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("The area of a rectangle having length= %d and breadth= %d is %d",length,breadth,area);
    return 0;
}



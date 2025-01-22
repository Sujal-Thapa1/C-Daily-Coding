#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i=1,j;
    printf("Enter the range and factorial num\n");
    scanf("%d %d",&n,&j);
    while(i<=n){
        if(j%i==0){
            printf("The factorial of %d is %d\n",j,i);
            
        }
        i++;
    }
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,factorial =1;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i=1;i<=n;++i){
        factorial *=i;
    }
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}

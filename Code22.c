#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j=12;
    printf("Enter the table number\n");
    scanf("%d",&n);
    for(i=1;i<=j;i++){
        printf("%d * %d = %d\n",n,i,i*n);
    }
    return 0;
}

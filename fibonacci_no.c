#include<stdio.h>
int main()
{
    int n,n1=1,n2=1,i,next;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",n1);
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    return 0;
}

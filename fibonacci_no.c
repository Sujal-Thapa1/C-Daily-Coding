/**
 * The program generates a Fibonacci sequence up to a specified number entered by the user.
 * 
 * @return The program is returning an integer value of 0.
 */
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

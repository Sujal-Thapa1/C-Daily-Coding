/**
 * The above C program generates and prints Fibonacci numbers up to a specified limit entered by the
 * user.
 * 
 * @return The `main` function is returning an integer value of 0, which typically indicates successful
 * execution of the program.
 */

#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,i,c;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // prints the first n1 number
        printf("%d\n",n1);
        // Adds n1 and n2 and saves the value to c
        c=n2+n1;
        // place the n2 value to n1
        n1=n2;
        // place the c value to n2
        n2=c;
    }
    return 0;
}

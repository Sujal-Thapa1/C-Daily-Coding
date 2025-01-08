/**
 * program to print letter I 
 * This C program prints a pattern with '#' symbols on the first and last rows, '*' in the middle row,
 * and spaces elsewhere in a 10x10 grid.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include<stdio.h>
int main()
{
    int n=10;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i==1||i==10){
                printf("#");
            }else if (j==5){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

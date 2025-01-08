#include<stdio.h>
/**
 * @brief Prints a rectangular pattern of asterisks and spaces.
 *
 * This function prints a 10x10 rectangular pattern where:
 * - The first, fifth, and tenth rows are filled with asterisks.
 * - The first and last columns are filled with asterisks.
 * - The remaining spaces are filled with spaces.
 *
 * @return 0 upon successful execution.
 */
int main()
{
    int n=10;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i==1||i==10||i==5){
                printf("*");
            }else if (j==1||j==10){
                printf("*");
            }else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}


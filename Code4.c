#include<stdio.h>
/**
 * @brief Prints a right-aligned triangle pattern of asterisks
 *
 * This function prints a right-aligned triangle pattern of asterisks
 * with a height of 5 rows. Each row is padded with spaces on the left
 * to create the right-aligned effect.
 *
 * @param argc Number of command-line arguments
 * @param argv Array of command-line argument strings
 * @return 0 on successful execution
 */
int main(int argc, char const *argv[])
{
    int n=5;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            if(i>=j){
                printf("* ");
            }else{
                printf(" ");
            }   
        }
        printf("\n");
    }
    return 0;
}



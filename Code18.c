/**
 * The function star_Pyramid takes an integer input and prints a pyramid pattern of stars with the
 * specified number of rows.
 * 
 * @param n The parameter `n` in the `star_Pyramid` function represents the number of rows in the
 * pyramid. It is the input provided by the user to determine the height of the pyramid.
 */
#include<stdio.h>
int star_Pyramid(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=n; j>=1; j--){
            if(i>=j){
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the range");
    scanf("%d", &num);
    star_Pyramid(num);
    return 0;
}

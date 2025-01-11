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

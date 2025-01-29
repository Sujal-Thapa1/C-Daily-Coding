#include<stdio.h>
int pattern(int n){
    for(int i=0; i<=n; i++){
        for(int j=n; j>=0; j--){
             if(i>=j){
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the range of number\n");
    scanf("%d", &n);
    pattern(n);
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=10;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i==1||i==5||i==n){
                printf("*");
                }   
            else if(j==n){
                for{
                printf("*"); 
                }else{
                    printf(" ");
                } 
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

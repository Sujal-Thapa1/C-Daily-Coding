/**
 * This C program prompts the user to enter a code and if the code matches 1098, it prints "Welcome
 * back".
 * 
 * @return The program will return 0.
 */
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=10,i,j,code;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the code to access");
            scanf("%d",&code);
            if(code==1098){
                goto end;
            }
        }
    }
    end:
    printf("Welcome back");
    return 0;
}

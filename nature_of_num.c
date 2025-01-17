#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    if(num ==0){
        printf("The entered number %d is Zero",num);
    }else if(num>=1){
        printf("The entered number %d is positive",num);
    }else{
        printf("The entered number %d is negative",num);
    }
    return 0;
}

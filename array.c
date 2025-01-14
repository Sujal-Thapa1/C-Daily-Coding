#include<stdio.h>
int main(int argc, char const *argv[]){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(numbers)/sizeof(numbers[0]);
    for(int i=0;i<=n;i++){
        printf("%d\n",numbers[i]);
    }
    return 0;
}

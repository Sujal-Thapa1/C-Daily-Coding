#include<stdio.h>
int main(){
    int num;
    for (int i=0;i<8;i++){
        printf("%d\n",i);
        for(int j=0;j<8;j++){
            printf("Enter the number 0 to exit\n");
            scanf("%d\n",&num);
            if(num == 0){
                goto end;
        }
        }
        end:
            printf("I'm inside end\n");
            return 0;
    }
}
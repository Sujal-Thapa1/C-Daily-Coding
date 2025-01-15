
//example of with arguments and with return value
#include<stdio.h>
int sum(int a, int b){
    return a+b;
}

int main(int argc, char const *argv[])
{
    int a,b,c;
    a=1, b=2;
    c = sum(a,b);
    printf("The sum is %d\n",c);   
    return 0;
}

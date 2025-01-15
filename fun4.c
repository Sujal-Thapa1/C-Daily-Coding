//example of without arguments and without return value
#include <stdio.h>
void subtraction(){
    int a=10,b=20,sub;
    sub=a-b;
    printf("The subtraction of %d and %d is %d",a,b,sub);
}
int main(int argc, char const *argv[])
{
    subtraction();
    return 0;
}

/**
 * The above C program calculates and prints the average of three numbers entered by the user.
 * 
 * @param x The parameter `x` in the `Average` function represents the first number entered by the user
 * in the `main` function.
 * @param y The parameter `y` in the `Average` function is the second integer input provided by the
 * user in the `main` function.
 * @param z The parameter `z` in the `Average` function represents the third integer input by the user
 * in the `main` function.
 */
#include<stdio.h>
int Average(int x, int y,int z){
    int opt;
    opt=(x+y+z)/3;
    printf("Average of %d , %d , %d is %d",x,y,z,opt);

}
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    Average(a,b,c);
    return 0;
}

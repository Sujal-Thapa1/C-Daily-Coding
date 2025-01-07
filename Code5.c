#include<stdio.h>
/**
 * The function prints a pattern of asterisks in a right-angled triangle shape in reverse.
 * 
 * @param argc `argc` is the argument count, which represents the number of arguments passed to the
 * program when it is executed from the command line. It includes the name of the program itself as the
 * first argument.
 * @param argv The `argv` parameter in the `main` function is an array of strings that represent the
 * command-line arguments passed to the program when it is executed. Each element in the `argv` array
 * is a null-terminated C string, and `argv[0]` typically contains the name of the
 * 
 * @return The main function is returning an integer value of 0.
 */
int main(int argc, char const *argv[])
{
    int n=10;
    int i, j;
    for(i=1; i<=n; i++){
        for(j=i;j<=n; j++){
            if(j>=i){
                printf("*");
            }else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}

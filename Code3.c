#include<stdio.h>
/**
 * @brief Prints all even numbers from 0 to 100.
 *
 * This function iterates through numbers from 0 to 100 and prints
 * only the even numbers to the console.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line argument strings.
 * @return 0 on successful execution.
 */
int main(int argc, char const *argv[])
{
    int num=0;
    while (num<=100){
        if(num%2==0){
            printf("%d\n",num);

        }
        num++;
    }
    return 0;
}


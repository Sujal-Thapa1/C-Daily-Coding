#include<stdio.h>
/**
 * @brief This function determines if a given year is a leap year or not.
 *
 * @param year The year to be checked.
 *
 * @return 0 if the year is not a leap year, or 1 if it is a leap year.
 *
 * A leap year is exactly divisible by 4 except for century years (years ending with 00).
 * The century year is a leap year only if it is perfectly divisible by 400.
 */
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d", &year);
    if(year%4==0){
        printf("%d is a leap year",year);
    }else{
        printf("%d is not a leap year",year);
    }
    return 0;
}


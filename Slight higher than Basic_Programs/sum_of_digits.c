/* Sum of 5 digits */
/* By Soham, Date-18/08/2020*/

#include <stdio.h>

int main()
{
    int num, last_digit, total, next_digit;

    printf("Enter your number to calculate it's sum of 5 digits:");
    scanf("%d", &num);

    last_digit = num % 10; /* To get last digit of given num*/   
    total = last_digit;     /* last digit is stored in total */

    next_digit = (num/10) % 10;    
    total = total + next_digit;   

    next_digit = (num/100) % 10;
    total = total + next_digit;   

    next_digit = (num/1000) % 10; 
    total = total + next_digit;

    next_digit = (num/10000) % 10;
    total = total + next_digit;

    printf("Your addition of 5 digits of given number is %d", total);
    return 0;
}
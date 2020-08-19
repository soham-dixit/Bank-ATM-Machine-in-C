/* Reverse of 5 digit number entered by user */
/* By Soham, Date-18/08/2020*/

#include <stdio.h>

int main()
{
    int num, last_digit, next_digit, rev_num;

    printf("Enter your 5 digits number which you wish to reverse:");
    scanf("%d", &num);

    last_digit = num % 10;    /* To get last digit of given num*/   
    rev_num = last_digit;       /* last digit is stored in rev_num */

    next_digit = (num/10) % 10;
    rev_num = (rev_num*10) + next_digit;

    next_digit = (num/100) % 10;
    rev_num = (rev_num*10) + next_digit;

    next_digit = (num/1000) % 10;
    rev_num = (rev_num*10) + next_digit;

    next_digit = (num/10000) % 10;
    rev_num = (rev_num*10) + next_digit;

    printf("Your reversed number is %d", rev_num);
    return 0;
}
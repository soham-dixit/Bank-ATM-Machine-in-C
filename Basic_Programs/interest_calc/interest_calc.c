/* first Program - Simple Interest Calculator */
/* By Soham, Date- 18/08/2020 */

#include <stdio.h>

int main()
{
    int p, n;    /* p=principle amount, n= number of years */
    float si, r; /* si=simple interest, r=rate */

    printf("What is your principle amount?\n");
    scanf("%d", &p);

    printf("For how much years you want to invest?\n");
    scanf("%d", &n);

    printf("What is the rate of interest?\n");
    scanf("%f", &r);

    /*Formula to calculate rate of interest*/
    si = p * n * r / 100;

    printf("\nYour yearly interest amount on given principle amount: %f", si);

    return 0;
}

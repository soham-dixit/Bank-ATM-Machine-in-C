/* Fahrenheit to Centigrade */
/* By Soham, Date- 18/08/2020 */

#include <stdio.h>

int main()
{
    float fahr;
    float centi;

    printf("Enter the temperature in Fahrenheit:");
    scanf("%f", &fahr);

    /* Formula to convert Fahrenheit in Centigrade degrees*/

    centi = (fahr - 32) * 5 / 9;

    printf("Your temperature in Centigrade degrees is %f celsius!", centi);

    return 0;
}
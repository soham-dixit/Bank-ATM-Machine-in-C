/* Interchange numbers of two locations */
/* By Soham, Date- 18/08/2020*/

#include <stdio.h>

int main()
{
    float c, d, temp;

    printf("Enter your first number which would be saved in ""c"" location:");
    scanf("%f", &c);

    printf("Enter your second number which would be saved in ""d"" location:");
    scanf("%f", &d);

    /* Interchange Operation*/

    temp = c;
    c = d;
    d = temp;

    printf("Interchanged numbers are c=%.2f and d=%.2f", c, d);
    return 0;
}
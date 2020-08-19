/* KM To Other Conversion */
/* By Soham, Date- 18/08/2020 */

#include <stdio.h>

int main()
{
    int dis_km;
    float mets, feet, inches, centi;

    printf("What is distance between two cities in Kilometre?\n");
    scanf("%d", &dis_km);

    mets = dis_km * 1000;          /* Formula to convert KM to meters */
    feet = dis_km * 3280.8;        /* Formula to convert KM to feet */
    inches = dis_km * 39370.07874; /* Formula to convert KM to Inches */
    centi = dis_km / 0.000010000;  /* Formula to convert KM to Centimeters */

    /* Print conversions */

    printf("Distance between two cities in meters is %f\n", mets);
    printf("Distance between two cities in feet is %f\n", feet);
    printf("Distance between two cities in inches is %f\n", inches);
    printf("Distance between two cities in centimeters is %f", centi);

    return 0;
}
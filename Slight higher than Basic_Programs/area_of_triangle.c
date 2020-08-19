/* Area of triangle */
/* By Soham, Date- 18/08/2020*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s1, s2, s3, area, semi_peri;

    printf("Enter your side 1, side 2 & side 3 of triangle(For e.g. 10 20 30):");
    scanf("%f %f %f", &s1, &s2, &s3);

    /* Formula to calculate area of triangle */
    semi_peri = (s1+s2+s3)/2;
    area = sqrt(semi_peri*(semi_peri-s1)*(semi_peri-s2)*(semi_peri-s3));

    printf("Area of triangle is %.2f", area);
    return 0;
}
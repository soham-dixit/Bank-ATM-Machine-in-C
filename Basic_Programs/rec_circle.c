/* Rectangle and Circle */
/* By Soham, Date- 18/08/2020 */

#include <stdio.h>

int main()
{

    float len_r, brd_r, area_r, per_r;
    float rad_c, area_c, cir_c;

    /*======== Rectangle ========*/
    printf("Enter the length and breadth of a rectangle(For e.g. 10 30):");
    scanf("%f %f", &len_r, &brd_r);

    /*Calculate area and perimeter of rectangle */
    area_r = len_r * brd_r;
    per_r = 2 * (len_r + brd_r);

    printf("Area of given rectangle is %f and perimeter is %f", area_r, per_r);

    /*========== Circle ==========*/

    printf("\nEnter the radius of a circle:");
    scanf("%f", &rad_c);

    /*Calculate area and circumference of circle */
    area_c = 3.14 * rad_c * rad_c;
    cir_c = 2 * 3.14 * rad_c;

    printf("\nArea of given circle is %f and circumference is %f", area_c, cir_c);
    return 0;
}
/*Aggregate Marks and Percentage Calc*/
/* By Soham, Date- 18/08/2020 */

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5;
    int agg_marks, perc;

    printf("Please enter your marks for 5 subjects(For e.g. 85 90 95 75 70):");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    /*Formula to calculate aggregate marks*/

    agg_marks = sub1 + sub2 + sub3 + sub4 + sub5;

    /*Formula to calculate percentage*/

    perc = agg_marks * 100 / 500;

    printf("Your aggregate marks are %d\n", agg_marks);
    printf("You obtained %d%% in your exam!", perc);

    return 0;
}
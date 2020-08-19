/*Gross Salary Calculator */
/* By Soham, Date- 18/08/2020 */

#include <stdio.h>

int main()
{
    int basic_sal;
    float gross_salary;

    printf("What is your basic salary?\n");
    scanf("%d", &basic_sal);

    /* Formula to calculate gross salary
    40% dearness allowances and 20% house rent */

    gross_salary = basic_sal + (basic_sal * 40 / 100) + (basic_sal * 20 / 100);

    printf("Your gross salary is %f", gross_salary);

    return 0;
}
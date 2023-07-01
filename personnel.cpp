/*******************************************************************************
* AUTHOR        : Dillon Welsh
* ASSIGNMENT1   : Sequence Class
* CLASS         : CS8
* SECTION       : 33776
* DUE DATE      : 02/28/2021
*******************************************************************************/

#include "personnel.h"

/*******************************************************************************
 * getAverageSalary()
 *      This method returns the average salary of the employee
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      double
 ******************************************************************************/

double Personnel::getAverageSalary()
{
    double avg = 0.0;
    for(int i = 0; i < 3; i++)
        avg += this->employeeList[i].getSalary();
    return avg / 3;
}

/*******************************************************************************
 * getAverageWage()
 *      This method returns the average wage of the employee
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      double
 ******************************************************************************/

double Personnel::getAverageWage()
{
    double avg = 0.0;
    for(int i = 0; i < 3; i++)
        avg += this->employeeList[i].getHourlyWage();
    return avg / 3;
}

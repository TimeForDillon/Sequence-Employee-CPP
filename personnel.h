#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "employee.h"

const int MAX_CAPACITY = 30;

class Personnel
{
public:
    /********************************
     ** CONSTRUCTORS & DESTRUCTORS **
     ********************************/
    Personnel(){};

    /***************
     ** ACCESSORS **
     ***************/
    double getAverageSalary();
    double getAverageWage();
    Employee employeeList[MAX_CAPACITY];
};

#endif // PERSONNEL_H

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * Personnel()
 *      This constructs a Personnel Object
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * getAverageSalary()
 *      This method returns the average salary of the employee
 ******************************************************************************/

/*******************************************************************************
 * getAverageWage()
 *      This method returns the average wage of the employee
 ******************************************************************************/

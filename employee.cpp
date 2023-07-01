/*******************************************************************************
* AUTHOR        : Dillon Welsh
* ASSIGNMENT1   : Sequence Class
* CLASS         : CS8
* SECTION       : 33776
* DUE DATE      : 02/28/2021
*******************************************************************************/

#include "employee.h"

/*******************************************************************************
 * Employee()
 *      This constructs an Employee Object
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      none
 ******************************************************************************/

Employee::Employee(){}

/*******************************************************************************
 * Employee(string name, int idNumber, double hourlyWage)
 *      This constructs an Employee Object with given parameters
 * _____________________________________________________________________________
 * INPUT:
 *      string name
 *      int idNumber
 *      double hourlyWage
 * OUTPUT:
 *      none
 ******************************************************************************/

Employee::Employee(string name,
                   int idNumber,
                   double hourlyWage)
{
    this->name = name;
    this->idNumber = idNumber;
    this->hourlyWage = hourlyWage;
    this->salary = 0.0;
    this->hoursWorked = 0;
    this->payCheck = 0.0;
}

/*******************************************************************************
 * getPayCheck() const
 *      This method returns the employee's paycheck
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      double
 ******************************************************************************/

double Employee::getPayCheck() const
{
    double overtime = 0;
    overtime = this->calculateOvertime();
    return (this->hourlyWage * 80) + overtime;
}

/*******************************************************************************
 * calculateOvertime() const
 *      This method calculates the employee's overtime
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      double
 ******************************************************************************/

double Employee::calculateOvertime() const
{
    int overtime = 0;

    if(this->hoursWorked > 40)
    {
        overtime = this->hoursWorked - 40;
        return (this->hourlyWage + (this->hourlyWage/2) * overtime);
    }
    return overtime;
}

/*******************************************************************************
 * calculateSalary()
 *      This method calculates the employee's salary
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      double
 ******************************************************************************/

double Employee::calculateSalary()
{
    this->salary = (this->hourlyWage * 40) * 52;
    return this->salary;
}

/*******************************************************************************
 * incrementSalary(double percent)
 *      This method increments the employee's salary
 * _____________________________________________________________________________
 * INPUT:
 *      double percent
 * OUTPUT:
 *      double
 ******************************************************************************/

double Employee::incrementSalary(double percent)
{
    return this->salary + (this->salary * percent);
}

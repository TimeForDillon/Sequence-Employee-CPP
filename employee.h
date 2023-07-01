#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    int hoursWorked;
    double salary;
    double hourlyWage;
    double payCheck;

public:
    /********************************
     ** CONSTRUCTORS & DESTRUCTORS **
     ********************************/
    Employee();
    Employee(string name, int idNumber, double hourlyWage);

    /**************
     ** MUTATORS **
     **************/
    void setName(string name) { this->name = name; };
    void setSalary(double salary) { this->salary = salary; };
    void setIDNum(int idNumber) { this->idNumber = idNumber; };
    void setHoursWorked(int hoursWorked) { this->hoursWorked = hoursWorked; };
    void setHourlyWage(double hourlyWage) { this->hourlyWage = hourlyWage; };
    void setPayCheck(double payCheck) { this->payCheck = payCheck; };

    /***************
     ** ACCESSORS **
     ***************/
    string getName() const { return this->name; };
    double getSalary() const { return this->salary; };
    int getIDNum() const { return this->idNumber; };
    int getHoursWorked() const { return this->hoursWorked; };
    double getHourlyWage() const { return this->hourlyWage; };
    double getPayCheck() const;
    double calculateOvertime() const;
    double incrementSalary(double percent);
    double calculateSalary();
};

#endif // EMPLOYEE_H

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * Employee()
 *      This constructs an Employee Object
 ******************************************************************************/

/*******************************************************************************
 * Employee(string name, int idNumber, double hourlyWage)
 *      This constructs an Employee Object with given parameters
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * getPayCheck() const
 *      This method returns the employee's paycheck
 ******************************************************************************/

/*******************************************************************************
 * calculateOvertime() const
 *      This method calculates the employee's overtime
 ******************************************************************************/

/**************
 ** MUTATORS **
 **************/

/*******************************************************************************
 * calculateSalary()
 *      This method calculates the employee's salary
 ******************************************************************************/

/*******************************************************************************
 * incrementSalary(double percent)
 *      This method increments the employee's salary
 ******************************************************************************/


#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std; 

class Employee {
protected:
    int id;
    string name;
    double salary;

public:
    //constructor
    Employee();

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    void setId(int i)
    {
        id=i;
    }
    void setName(string n)
    {
        name=n;
    }

    //parametrised constructor
    Employee(int empId,string& empName,  double empSalary);

    //function
    virtual void displayInfo();

   //destructor 
    ~Employee(); 
};
#endif // EMPLOYEE_H
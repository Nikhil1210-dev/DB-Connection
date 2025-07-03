# include <iostream>
# include <string>  
# include "../include/employee.h"
#include"../include/SalesEmployee.h"

int main() {
   
    string name1="Alice";
    string name2="Bob";
    Employee emp1(101, name1, 75000.0);
    // Employee emp2(102, name2, 85000.0);

    //emp1.displayInfo();
    // emp2.displayInfo();

    salesEmployee semp(101,name1,156155,5,50000);
    semp.displayInfo();

    return 0;
}   //g++ ./src/employee.cpp ./src/SalesEmployee.cpp ./src/main.cpp -o ./build/test.exe
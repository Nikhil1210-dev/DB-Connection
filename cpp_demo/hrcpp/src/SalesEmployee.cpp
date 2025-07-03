#include"../include/SalesEmployee.h"
#include<iostream>
using namespace std;
salesEmployee::salesEmployee(){
    target =0;
    insentive=0.0;
}
salesEmployee::salesEmployee(int id, string name, double salary,int target , double Insentive):Employee(id,name,salary){

    target=target;
    insentive=Insentive;
}
void salesEmployee::displayInfo(){
    Employee::displayInfo();
    cout<<"\ntarget"<<target<<"\ninsentive"<<insentive;
}
salesEmployee::~salesEmployee() {
    // Destructor implementation (if needed)
    cout << "Sales Employee object having target " << target << " is being destroyed." << endl;
}
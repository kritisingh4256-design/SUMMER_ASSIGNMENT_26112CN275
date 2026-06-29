#include <iostream>
using namespace std;

int main()
{
    int empId;
    string name;
    float basicSalary, hra, da, pf, grossSalary, netSalary;

    cout << "===== Salary Management System =====" << endl;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

  
    hra = basicSalary * 0.20;   //20%
    da = basicSalary * 0.10;    // 10% DA
    pf = basicSalary * 0.08;    // 8% PF Deduction

    grossSalary = basicSalary + hra + da;
    netSalary = grossSalary - pf;

    cout << "\n===== Salary Details =====" << endl;
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "HRA (20%)     : " << hra << endl;
    cout << "DA (10%)      : " << da << endl;
    cout << "PF (8%)       : " << pf << endl;
    cout << "Gross Salary  : " << grossSalary << endl;
    cout << "Net Salary    : " << netSalary << endl;

    return 0;
}
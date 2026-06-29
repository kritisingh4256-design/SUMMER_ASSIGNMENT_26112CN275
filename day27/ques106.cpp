#include <iostream>
using namespace std;

struct Employee
{
    int empId;
    string name;
    string department;
    float salary;
};

int main()
{
    int n;

    cout << "===== Employee Management System =====" << endl;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> emp[i].empId;

        cout << "Name: ";
        cin >> emp[i].name;

        cout << "Department: ";
        cin >> emp[i].department;

        cout << "Salary: ";
        cin >> emp[i].salary;
    }

 
    cout << "\n===== Employee Records =====" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << emp[i].empId << endl;
        cout << "Name        : " << emp[i].name << endl;
        cout << "Department  : " << emp[i].department << endl;
        cout << "Salary      : " << emp[i].salary << endl;
    }

    return 0;
}
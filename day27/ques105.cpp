#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    int n;

    cout << "===== Student Record Management System =====" << endl;
    cout << "Enter the number of students: ";
    cin >> n;

    Student s[n];

   
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> s[i].rollNo;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

   
    cout << "\n===== Student Records =====" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number: " << s[i].rollNo << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}
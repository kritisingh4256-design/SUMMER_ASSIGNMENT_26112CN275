#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "===== Marksheet Generation System =====" << endl;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks of 5 subjects (out of 100):" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n===== MARKSHEET =====" << endl;
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;
    cout << "----------------------------------" << endl;
    cout << "Subject 1 : " << m1 << endl;
    cout << "Subject 2 : " << m2 << endl;
    cout << "Subject 3 : " << m3 << endl;
    cout << "Subject 4 : " << m4 << endl;
    cout << "Subject 5 : " << m5 << endl;
    cout << "----------------------------------" << endl;
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade : A+" << endl;
    else if (percentage >= 80)
        cout << "Grade : A" << endl;
    else if (percentage >= 70)
        cout << "Grade : B" << endl;
    else if (percentage >= 60)
        cout << "Grade : C" << endl;
    else if (percentage >= 50)
        cout << "Grade : D" << endl;
    else
        cout << "Grade : F (Fail)" << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX], marks[MAX];
string name[MAX];
int n = 0;

// Function to Add Student
void addStudent()
{
    cout << "\nEnter Roll Number: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student Record Added Successfully!\n";
}

// Function to Display Students
void displayStudent()
{
    if (n == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\nRoll\tName\t\tMarks\n";
    cout << "---------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << roll[i] << "\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }
}

// Function to Search Student
void searchStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            cout << "\nRecord Found\n";
            cout << "Roll Number : " << roll[i] << endl;
            cout << "Name        : " << name[i] << endl;
            cout << "Marks       : " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record Not Found!\n";
}

// Function to Update Student
void updateStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number to Update: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "Record Updated Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record Not Found!\n";
}

// Function to Delete Student
void deleteStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            for (int j = i; j < n - 1; j++)
            {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            n--;
            cout << "Record Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudent();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
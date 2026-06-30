#include <iostream>
#include <string>
using namespace std;

int main()
{
    int roll[100], marks[100];
    string name[100];
    int n = 0, choice, searchRoll;
    bool found;

    do
    {
        cout << "\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student Record\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll[n];
                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, name[n]);

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Records Found!\n";
                }
                else
                {
                    cout << "\nRoll No\tName\t\tMarks\n";
                    cout << "---------------------------------\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << roll[i] << "\t"
                             << name[i] << "\t\t"
                             << marks[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Roll Number to Search: ";
                cin >> searchRoll;
                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        cout << "\nStudent Found\n";
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Record Not Found!\n";
                break;

            case 4:
                cout << "Enter Roll Number to Update: ";
                cin >> searchRoll;
                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
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

                if(!found)
                    cout << "Record Not Found!\n";
                break;

            case 5:
                cout << "Enter Roll Number to Delete: ";
                cin >> searchRoll;
                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        for(int j = i; j < n - 1; j++)
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

                if(!found)
                    cout << "Record Not Found!\n";
                break;

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}
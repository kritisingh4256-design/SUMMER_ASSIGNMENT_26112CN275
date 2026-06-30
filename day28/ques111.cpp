#include <iostream>
using namespace std;

int main()
{
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Tickets\n";
        cout << "2. Check Available Seats\n";
        cout << "3. Cancel Tickets\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter number of tickets to book: ";
                cin >> seats;

                if(seats <= (totalSeats - bookedSeats) && seats > 0)
                {
                    bookedSeats += seats;
                    cout << seats << " ticket(s) booked successfully.\n";
                }
                else
                {
                    cout << "Sorry! Not enough seats available.\n";
                }
                break;

            case 2:
                cout << "Total Seats      : " << totalSeats << endl;
                cout << "Booked Seats     : " << bookedSeats << endl;
                cout << "Available Seats  : " << totalSeats - bookedSeats << endl;
                break;

            case 3:
                cout << "Enter number of tickets to cancel: ";
                cin >> seats;

                if(seats > 0 && seats <= bookedSeats)
                {
                    bookedSeats -= seats;
                    cout << seats << " ticket(s) cancelled successfully.\n";
                }
                else
                {
                    cout << "Invalid number of tickets.\n";
                }
                break;

            case 4:
                cout << "Thank you for using the Ticket Booking System!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while(choice != 4);

    return 0;
}
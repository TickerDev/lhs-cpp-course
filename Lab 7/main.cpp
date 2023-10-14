#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout
        << setiosflags(ios_base::fixed)
        << setiosflags(ios_base::showpoint) << setprecision(2);
    char choice;
    double hours, income, taxes;
    string firstName, lastName;
    bool open_menu = true;
    cout << "Welcome to Five Babbage Burgers and Fries Payroll Calculator!" << endl;
    cout << "Do you have an employee to pay? (Y or N) ";
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
        do
        {

            char profession;
            cout << "\nWhat is their First Name? ";
            cin >> firstName;
            cout << "What is their Last Name? ";
            cin >> lastName;

            cout << "\nWhat is their role here at Five-Babbage Burgers and Fries Inc.?\n";
            cout << "\nA. Counter Staff\nK. Kitchen Cook\nD. Dishwasher\nM. Manager";
            cout << "\n\nPlease choose an option: ";
            cin >> profession;

                        if (profession == 'K' || profession == 'k')
            {
                cout << "\nEnter number of hours worked: ";
                cin >> hours;
                taxes = 28.0;
                double hourly_payment = 15.75;
                double x = hours * hourly_payment;
                double x_with_tax = (x * taxes) / 100;
                income = (x - x_with_tax) - 0.01;
            }
            else if (profession == 'A' || profession == 'a')
            {
                cout << "\nEnter number of hours worked: ";
                cin >> hours;
                taxes = 28.0;
                double hourly_payment = 10.50;
                double x = hours * hourly_payment;
                double x_with_tax = (x * taxes) / 100;
                income = x - x_with_tax;
            }
            else if (profession == 'D' || profession == 'd')
            {
                cout << "\nEnter number of hours worked: ";
                cin >> hours;
                taxes = 28.0;
                double hourly_payment = 10.50;
                double x = hours * hourly_payment;
                double x_with_tax = (x * taxes) / 100;
                income = x - x_with_tax;
            }
            else if (profession == 'M' || profession == 'm')
            {
                taxes = 33.0;
                double annual_payment = 48000;
                double weekly_payment = annual_payment / 52;
                double x_with_tax = (weekly_payment * taxes) / 100;
                income = weekly_payment - x_with_tax;
            }
            else
            {
                cout << "Invalid role choice. No payment information available\n." << endl;
                continue;
            }
            cout << "\nPaycheck Information: " << firstName << " " << lastName << " . . . . . "
                 << "$" << income;
            char choice2;
            cout << "\n\nDo you have another employee to pay? (Y or N) ";
            cin >> choice2;
            if (choice2 == 'N' || choice2 == 'n')
            {
                open_menu = false;
                break;
            }
        } while (open_menu);
    }

    cout << "\nThanks for using our software, hope you have a wonderful day!" << endl;

    return 0;
}

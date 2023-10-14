// Name:
// Block:
// Lab 6: Five-Babbage Burgers and Fries

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios_base::fixed)
         << setiosflags(ios_base::showpoint)
         << setprecision(2);
    double hourly_payment = 7.72;
    double tax = 33.0;
    double total_payment = 0.0;
    int weeks, hours;
    cout << "How many weeks in this pay period? ";
    cin >> weeks;
    for (int i = 1; i <= weeks; i++)
    {
        double hours_worked;
        cout << "\nHow many hours did you work this week? ";
        cin >> hours_worked;
        double x = hours_worked * hourly_payment;
        double x_with_tax = (x * tax) / 100;
        double weekly_payment = x - x_with_tax;

        total_payment += weekly_payment;
        cout << "Your take-home pay is $" << weekly_payment << endl;
    }
    cout << "\nYour total pay for the pay period is $" << total_payment << endl
         << "Hope you enjoy working at Babbage Burgers.";
    return 0;
}
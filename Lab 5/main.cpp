// Name:
// Block:
// Lab 5: Slope

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setiosflags(ios_base::fixed)
         << setiosflags(ios_base::showpoint)
         << setprecision(2);

    double x1, y1, x2, y2;
    cout << "Enter the coordinates of point 1 (x, y): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of point 2 (x, y): ";
    cin >> x2 >> y2;
    if (x1 == x2 && y1 == y2)
    {
        cout << "Alert! These points do not form a line.";
    }
    else if (x1 == x2)
    {
        cout << "Alert! The line is vertical." << endl
             << "The equation of the line is x = " << x1;
    }
    else if (y1 == y2)
    {
        cout << "Alert! The line is horizontal." << endl
             << "The equation of the line is y = " << y1;
    }
    else
    {
        double slope = (y2 - y1) / (x2 - x1);
        double y_intercept = (y1 - slope * x1);
        cout << "The slope of the line is " << slope << endl
             << "The slope-intercept form is y = " << slope << "x + " << y_intercept << endl;
    }
    return 0;
}
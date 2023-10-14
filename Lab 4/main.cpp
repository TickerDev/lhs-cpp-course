// Name:
// Block:
// Lab 4: Gallons of Paint

#include <iostream>
using namespace std;

int main()
{
    int length, width, height;
    int windows, doors, con;
    double SA, gallons;
    cout << "Enter dimensions (length width height): ";
    cin >> length >> width >> height;
    cout << "Enter number of windows and doors: ";
    cin >> windows >> doors;
    SA = length * height * 2 + width * height * 2 - 15 * windows - 21 * doors;
    gallons = SA / 400;
    con = gallons + 1;
    cout << "\nThat room will take " << gallons << " gallons of paint.\n"
         << con << " gallon-containers of paint will be required." << endl;

    return 0;
}
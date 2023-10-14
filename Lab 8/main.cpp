// Name:
// Block:
// Lab 8: Birthday Baffler

#include <iostream>

int main()
{
    int day, month, year;
    int x, y, z, k, j, l;
    bool leap;
    std::cout << "Enter your birth date (month day year): ";
    std::cin >> month >> day >> year;
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1752 || year > 2099)
    {
        std::cout << "This is an invalid date";
    }
    else
    {
        x = 2 * (3 - ((year / 100) % 4));
        y = year % 100;
        z = y / 4;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            leap = true;
        else
            leap = false;
        switch (month)
        {
        case 1:
            if (leap)
                k = 0;
            else
                k = 1;
            break;
        case 2:
            if (leap)
                k = 3;
            else
                k = 4;
            break;
        case 3:
            k = 4;
            break;
        case 4:
            k = 0;
            break;
        case 5:
            k = 2;
            break;
        case 6:
            k = 5;
            break;
        case 7:
            k = 0;
            break;
        case 8:
            k = 3;
            break;
        case 9:
            k = 6;
            break;
        case 10:
            k = 1;
            break;
        case 11:
            k = 4;
            break;
        case 12:
            k = 6;
            break;
        }
        j = x + y + z + k + day;
        l = j % 7;
        switch (l)
        {
        case 1:
            std::cout << "You were born on a Sunday.";
            break;
        case 2:
            std::cout << "You were born on a Monday.";
            break;
        case 3:
            std::cout << "You were born on a Tuesday.";
            break;
        case 4:
            std::cout << "You were born on a Wednesday.";
            break;
        case 5:
            std::cout << "You were born on a Thursday.";
            break;
        case 6:
            std::cout << "You were born on a Friday.";
            break;
        case 0:
            std::cout << "You were born on a Saturday.";
            break;
        }
    }
}
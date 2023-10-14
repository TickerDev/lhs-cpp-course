#include <iostream>

int getFavorite(int old);

int main()
{
    int myFavorite = -3;
    int LFavorite = -3;

    myFavorite = getFavorite(LFavorite);
    std::cout << "Your favorite number in main() is" << myFavorite << std::endl;
    return 0;
}

int getFavorite(int LFavorite)
{
    int myFavorite;
    std::cout << "Enter your favorite number: ";
    std::cin >> myFavorite;
    std::cout << "Ms. LeBlanc’s favorite is: " << LFavorite << std::endl;
    std::cout << "Your favorite number is: " << myFavorite << std::endl
              << std::endl;
    return myFavorite;
}

#include <iostream>
#include <string>

int main()
{
    std::string password = "sivasai123";
    std::string guess;
    do
    {
        std::cout << "Guess the password: ";
        std::cin >> guess;

    } while (guess != password);
    return 0;
}
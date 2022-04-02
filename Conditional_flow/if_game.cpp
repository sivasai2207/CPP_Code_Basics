#include <iostream>
#include <string>
int main()
{
    std::string answer = "siva";
    int age_answer = 22;
    std::string guess;
    std::cout << "Guess my name: ";
    std::cin >> guess;
    int age_guess;
    std::cout << "Guess my age: ";
    std::cin >> age_guess;

    if(guess == answer && age_guess == age_answer)
    {
        std::cout << "You got it correctly!\n";
    }
    else
    {
        std::cout << "You are wrong \n";
    }

    return 0;
}
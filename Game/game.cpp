 #include <iostream>
 #include <string>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 151;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";
    while(true) {
        int guess;
        std::cin >> guess;
        if(guess == random) {
            std::cout << "You win!\n" << std::endl;
            break;
        }
        else if(guess < random){
            std::cout << guess <<" Too Low\n";
        }
        else {
            std::cout << guess << " Too High\n";
        }
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit\n"<< "1. PlayGame\n";
        std::cin >> choice;
        switch (choice)
        {
            case 0:
                std::cout << "Thanks for your time!\n";
                return 0;
            case 1:
                play_game();
                break;
        }
    } while (choice != 0);
    
}
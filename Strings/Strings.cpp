#include<iostream>
// #include<string>

int main()
{
    std::string greeting = "Sivasai";
    std::cout << greeting.length() << std::endl;
    // std::cout << greeting[3] << std::endl;
    // std::string new_name;
    // std::cout << "whats your name: ";
    // std::cin >> new_name;
    // std::cout << new_name << std::endl;

    // To get the whole line from the cin we use getline();
    std::string new_line;

    getline(std::cin, new_line);
    std::cout << new_line << std::endl;

    std::string newstring = "hello";
    // newstring.append(" there!");
    newstring += " there!";
    // newstring.insert(3, " ");
    // newstring.erase(3);
    std::cout << newstring << std::endl;


    
}
#include<iostream>
#include<string>

int main()
{
    // We search the string and replace.. 
    std::string name = "what the hell?";
    name.replace(name.find("hell"), 4, "****");
    std::cout << name << std::endl;


    // std::string name = "what the hell?";
    // name.replace(9, 4, "****");
    // std::cout << name << std::endl;

    std::string new_name = "Hello world";
    std::cout << new_name.substr(0, 5) << std::endl;

    
}

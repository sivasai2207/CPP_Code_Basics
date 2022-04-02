#include<iostream>

int main()
{
    int age = 10; 
    if(age > 13)
    {
        std::cout << "You're not old enough \n";
    }
    else if(age < 16){
        std::cout << "You are almost 19\n";
    }
    else{
    std::cout << "0" <<std::endl;
    }
    // std::cout << "Always" <<std::endl;
    return 0;
}
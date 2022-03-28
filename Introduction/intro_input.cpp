#include <iostream>
int main() // Its a main function
{
    int slices;
    std::cout << "How many slices did u eat?: "; //Here we are throwing a question to the user here...
    std::cin >> slices; // After we see the question using cin and we take input and store the data to the specified variable (slices) in this case..
    std::cout << "You  Have "  << slices << " slices of pizza."<<std::endl;
    return 0;
}
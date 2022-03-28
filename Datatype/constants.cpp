#include <iostream>

// #define X 10 ---> this is "macros" type of declaraion

using std::cin;
using std::cout;
using std::endl;

int main() // Its a main function

{
    const int x = 5; // --> He we used normal "constrant"; 

    // x = 7;  We cannot reassign the value if it has a const keyword.

    cout << x << endl;

    enum { y = 100}; // In this we use "enum" key word instead of const keyword

    cout << y << endl;
}

// closing 2:21:00 
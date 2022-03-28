#include <iostream>
#include <float.h>
using std::cin;
using std::cout;
using std::endl;

int main() // Its a main function

{
    float a = 10.0 / 3;
    a = a * 10000000;
    double b;
    long double c;

    cout << std::fixed << a << std::endl;
    cout << LDBL_DIG << std::endl;
}
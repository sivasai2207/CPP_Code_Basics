#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int base, exponent, result, new_result;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result << std::endl;

    new_result = pow(base, exponent) * 2;
    
    cout << base << "^" << exponent << "* 2" << " = " << new_result;

    return 0;
}
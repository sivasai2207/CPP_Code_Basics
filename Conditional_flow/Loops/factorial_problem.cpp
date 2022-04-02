#include <iostream>
using namespace std;

int main()
{
    /*
    int factorial;
    cout << "Enter a value for Factorial: ";
    cin >> factorial;
    for (int i = factorial - 1; i > 0; i--)
    {
        factorial *= i;
    }
    cout << "factorial: " << factorial << endl;
    */

    int factorial;
    cout << "Enter a value for Factorial: ";
    cin >> factorial;
    int i = factorial - 1;
    while (i > 1)
    {
        factorial *= i;
        i--;
    }
    cout << "factorial: " << factorial << endl;
    return 0;
}
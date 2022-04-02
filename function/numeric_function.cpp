#include<iostream>
#include<cmath>

int main()
{
    std::cout << sqrt(25) << std::endl;
    std::cout << sqrt(-25) << std::endl; // nan - not a number
    std::cout << pow(9, 999) << std::endl; // Infinity
    std::cout << pow(-9, 999) << std::endl; // -infinity
    std::cout << NAN << std::endl; // nan
    std::cout << INFINITY << std::endl; // infinity
    std::cout << remainder(10,3) << std::endl; // this gives the remainder in fraction value but % cannot give the fraction value.. if we calculate 10 % 3.25 = it gives error. 
    // If we use remainder(10,3.25) we get an output.
    std::cout << fmin(10,3) << std::endl; // to find min of given numbers.
    std::cout << floor(fmin(10,3)) << std::endl;
    std::cout << ceil(fmin(10,3)) << std::endl;
    std::cout << fmax(10, 3.25) << std::endl; // to find max of given numbers.
    std::cout << trunc(fmax(10,3.25)) << std::endl;
    std::cout << round(10.51) << std::endl;
    std::cout << round(10.49) << std::endl;
} 
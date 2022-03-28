#include<iostream>
// #include<cmath>
// using namespace std;
// using std::cout;
#include<cstdio>

double power(double base, int exponent){
    
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    double result = power(base, exponent);

    // This is used for rectifying the e value (10^10 = 1e+10 -> 10000000000.000000)
    // std::cout << std::fixed << result << std::endl;

    std::cout<< result << std::endl;
}

int addition (int a, int b)
{
    int c = a + b;
    std::cout << c << std::endl;
    return c;
}

int main()
{
    double base;
    int exponent;
    // int result;
    std::cout << "whats is Base?: ";
    std::cin >> base;
    std::cout << "whats is Power?: ";
    std::cin >> exponent;
    print_pow(base, exponent);
    // std::cout << result << std::endl;

    // int result = addition(10,2);
}
/*
#include <cstdio>

int main()
{
    int num = 5;
    char my_name[] = "Lincoln";

    // print string and int variable
    printf("num = %d \n", num);

    // print string and char array
    printf("My name is %s", my_name);

    return 0;
}
*/
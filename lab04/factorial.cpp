#include <iostream>
#include <cmath>
using namespace std;

unsigned long long factorial(unsigned long long num) 
{
    unsigned long long result = 1;

    for (unsigned long long i = 1; i <= num; ++i) 
    {
        result *= i;
    }

    return result;
}

int main() 
{
    unsigned long long num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 65)
    {
        cout <<"MATH ERROR!";
        return 0;
    }

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
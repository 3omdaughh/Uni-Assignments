#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

int main()
{
    int num;
    unsigned long long result = 1;

    cout <<"Enter a number: ";
    cin >>num;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "Invalid Input.";
        return 0;
    }
    if (num >= 65)
    {
        cout <<"MATH ERROR!";
        return 0;
    }

    if (num < 0)
    {
        cout <<"MATH ERROR!";
        return 0;
    }
    else if (num == 0)
    {
        cout <<"Factorial of "<< num <<" = " << num + 1;
        return 0;
    }

    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }

    cout <<"Factorial of "<< num <<" = " << result;
}
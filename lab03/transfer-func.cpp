#include <iostream>
#include <cctype> // include this library for islower and isupper functions
using namespace std;

int main()
{
    char x; 
    cout <<"Enter Char: ";
    cin >> x;

    if (isupper(x))
    {
        x = x + 32;
    }
    else if (islower(x))
    {
        x = x - 32;
    }

    cout <<"Char is "<< x;
}
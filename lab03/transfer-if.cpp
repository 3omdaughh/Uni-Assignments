#include <iostream>
using namespace std;

int main()
{
    char x; 
    cout <<"Enter Char: ";
    cin >> x;

    if (x >= 'A' || x <= 'Z')
    {
        x = x + 32;
    }
    else if (x >= 'a' || x <= 'z')
    {
        x = x - 32;
    }

    cout <<"Char is "<< x;
}
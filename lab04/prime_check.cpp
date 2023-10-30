#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) 
    {
        return false;
    }
    if (num == 2) 
    {
        return true;
    }
    if (num % 2 == 0) 
    {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cerr<<"Invalid Input";
        return 0;
    }

    if (isPrime(num))
    {
        cout << num << " is a prime number." << endl;
    } 
    else 
    {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
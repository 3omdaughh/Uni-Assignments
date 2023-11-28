#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
      if (cin.fail())
      {
        cout <<"Invalid Input.";
        return 0;
      }
      else if (decimal < 0)
      {
        cout << "Invalid Input."<<endl;
        cout <<"This program convert positive numbers only!";
        return 0;
      }

    int wholePart = decimal;
    double fraction = decimal - wholePart;

    string binary = "";

    // Convert whole number part to binary
    while (wholePart > 0) 
    {
      binary = to_string(wholePart % 2) + binary;
      wholePart /= 2;
    }

    // Convert fraction part to binary
  
    binary += ".";
  
    for (int i = 0; i < 4; i++)
    {  
        if (fraction >= 0.5)
        {
          binary += "1";
        }
        else if (fraction < 0.5)
        {
          binary += "0";
        }  
      
        fraction = fraction*2;
      
        if (fraction >= 1)
        {
          double new_fraction = fraction - floor (fraction);
            fraction = new_fraction;
        }
    }

    cout << binary << endl;
    return 0;
}

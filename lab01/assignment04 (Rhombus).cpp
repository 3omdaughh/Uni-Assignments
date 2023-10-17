#include <iostream>
using namespace std;

int main()
{
    int highet;

    do
    {
        cout << "Enter Highet: ";
        cin >> highet;
    }
    while (highet < 1 || highet > 20);

    for (int line = 0; line < highet; line++)
    {
        for (int spaces = highet; spaces > line; spaces--)
        {
            cout << " ";
        }
        for (int stars = 0; stars < line * 2 - 1; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int line = 0; line < highet; line++)
    {
        for (int spaces = 0; spaces < line; spaces++)
        {
            cout << " ";
        }
        for (int stars = 0; stars < (highet - line) * 2 - 1; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
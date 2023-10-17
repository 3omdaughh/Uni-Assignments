#include <iostream>
#include <limits>
using namespace std;
int main ()
{
int height = 2;
int length = 6;


//top star lenght 

for (int space_top = 0; space_top < 6; space_top++)
{       
    cout <<" ";
}
for (int star = 0; star < length; star++)
{
    cout << "*";
}

cout << endl;

//star curve 

for (int space_mid1 = 0; space_mid1 <= 3-1; space_mid1++)
{
    cout <<" ";
}
for (int star = 0; star <= 1; star++)
{
    cout <<"*";
    for (int space_bet = 0; space_bet <= length+3; space_bet++)
    {
        cout <<" ";
    }
}

cout << endl;

//Height stars

for (int star_high = 0; star_high <= height; star_high++)
{
    cout <<" *";
    for (int inner_space = 0; inner_space <= (length+9)-2; inner_space++)
    {
        cout <<" ";
    }
    cout <<"*";
    cout << endl;
}

//bottom curve 

for (int space_mid2 = 0; space_mid2 <= 3-1; space_mid2++)
{
    cout <<" ";
}
for (int star = 0; star <= 1; star++)
{
    cout <<"*";
    for (int space_bet = 0; space_bet <= length+3; space_bet++)
    {
        cout <<" ";
    }
}

cout << endl; 

//bottom star lenght 

for (int space_bot = 0; space_bot < 6; space_bot++)
{       
    cout <<" ";
}
for (int star = 0; star < length; star++)
{
    cout << "*";
}
cout << endl;
cout << endl;

//area and circumference

cout << "Imagine we have a circle and we want to calculate its circumference and area";
cout << endl;
cout << endl;

cout << "Please input the radius so we can determine both the area and the circumference.";
cout << endl;
cout << endl;

    float pi = 3.14;
    float r; 

    cout << endl;
    cout << endl;

    do
    {
        cout << "Enter radius: ";
        cin >> r;

        // Check if the user input is a character
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Invalid input. Please enter a number." << endl;
        }
    }
    while (r < 1);

    float area = pi*r*r;
    float cir = 2*pi*r;

    cout << endl;
    cout << endl;

    cout << "Area = " << area;
    cout << endl;
    cout << endl;

    cout << "circumference = " << cir;
    cout << endl;
    cout << endl;

}
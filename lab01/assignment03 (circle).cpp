#include <iostream>
using namespace std;
int main ()
{
int height;
int length;

//user input 
do 
{
    cout <<"Enter Height: ";
    cin >>height;
}
while (height < 1 || height > 15);

do 
{
    cout <<"Enter Length: ";
    cin >>length;
}
while (length < 1 || length > 15);

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

}
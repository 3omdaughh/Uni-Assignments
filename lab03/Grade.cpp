#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

int main()
{
    int marks;



    do
    {
        cout <<"Enter your mark: ";
        cin >>marks;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cerr <<"Invalid Input."<<endl;
            }
    }
    while (marks == 0);

    int numMarks = (marks/10);
    
    switch (numMarks)
        {
            case 10:
            case 9:
                cout <<"Your Grade is A";
                break;
            case 8:
                cout <<"Your Grade is B";
                break;
            case 7:
                cout <<"Your Grade is C";
                break;
            case 6:
                cout <<"Your Grade is D";
                break;
            case 5:
                cout <<"Your Grade is E";
                break;
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                cout <<"Your Grade is F";
                break;
            default:
                cout <<"Invalid Input.";
            
        }

    return 0;
}
#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

int calculate_discount(int total_cost) 
{
    int discount = 0;
    if (total_cost >= 1000) 
    {
        discount = 10; // 10% discount for purchases over 1000$
    }
    return discount;
}

int if_negative(int quantity) 
{
    int negative_discount = 0;
    do 
    {
        if (quantity < 0) 
        {
            negative_discount = -1;
            break;
        }
        // Calculate discount based on quantity of books purchased
        negative_discount = (int) (0.1 * quantity);
    }
    while (quantity <= 0);
    return negative_discount;
}


int main() 
{
    int book = 100;
    int quantity; 

    do 
    {
    cout <<"How many books You buy: ";
    cin >> quantity;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cerr <<"Invalid Input."<<endl;
        }
    }
    while (quantity == 0);

    int total_price = book*quantity;
    int negative_discount = if_negative(quantity);
    int discount = calculate_discount(total_price);

    if (negative_discount < 0)
    {
        cout<<"Invalid Input, please enter a positive number.";
    }
    if (quantity > 0)
    {
        if (discount == 0)
        {
            cout <<"Sorry You Can't have a discount.";
        } 
        else if(discount > 0)
        {
            cout <<"You will pay "<<total_price*(1-discount/100.0)<<"$ after the discount sir.";
        }
    }
    return 0;
}
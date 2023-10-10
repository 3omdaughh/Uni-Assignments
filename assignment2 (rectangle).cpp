#include <iostream>
int main()
{
    int width;
    int lenght;
    
    do
    {
    std::cout <<"Enter Lenght: ";
    std::cin >> lenght;
    }
    while (lenght < 1 || lenght > 15);

    do 
    {
    std::cout <<"Enter Width: ";    
    std::cin >> width;
    }
    while (width < 1 || width > 15);

  
    for (int x = 0; x < lenght; x++)
    {
        std::cout << "*";
    }

    for (int y = 0; y < width; y++)
    {
      std::cout <<"\n*";
      for (int space = 0; space < lenght-2; space++)
        {
          std::cout <<" ";
        }
      std::cout <<"*";
    }
  
std::cout <<"\n";
  
      for (int x = 0; x < lenght; x++)
    {
        std::cout << "*";
    }
    return 0;
}
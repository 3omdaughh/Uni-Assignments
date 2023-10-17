#include <iostream>

int main()
{
    int highet;
    int line;
    do
    {
        std::cout << "Enter the highet: ";
        std::cin >> highet;
    }
    while (highet < 1 || highet > 10);

    for (line = 0; line < highet; line++)
    {
        for (int space = highet; space > line; space--)
        {
            std::cout << " ";
        }
        for (int star = 0; star < line * 2 - 1; star++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int line1 = 0; line1 <= 6; line1++)
    {
      for (int space1 = 0; space1 < line-1 ; space1++)
        {
          std::cout << " ";
        }
        std::cout << "*";
        std::cout << std::endl;
    }
}
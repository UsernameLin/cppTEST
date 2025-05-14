#include <iostream>
#include "add.h"   
#include <string>
#include <string_view>



class Car
{
private: std::string name;

public: Car(std::string name)
{
    this->name = name;
}

      std::string getCarName() {
          return name;
      }
};


std::string evenOrOdd(int num)
{
    bool even { false};
    if (num % 2 == 0)
    {
        even ={ true };
    }
    if (even)
    {
        return "even";
    }
    else
    {
        return "odd";
    }
}

int main()
{
    std::string studentNames[] = { "jones", "harry", "grej", "lary" };
    std::string comment{};

    Car hundia{ "kiadf" };
    bool menu{ true };
    int yes{ 1 };
    int &pnt { yes };
    int num{};

    for (int i{ 0 }; i < sizeof(studentNames) / sizeof(studentNames[0]); i++)
    {
        std::cout << studentNames[i] << std::endl;
    }

    std::cout << pnt<< "\n";
    std::cout << yes << "\n";

    pnt = { 2 };
    std::cout << pnt << "\n";

    std::cout << yes << "\n";


    std::cout << hundia.getCarName();

    while (menu)
    {
        std::cout << " 1 to continue" << std::endl;
        std::cin >> yes;
        if (yes != 1)
        {
            return 0;
        }
        std::cout << "a num to check even" << std::endl;
        std::cin >> num;
        std::cout << evenOrOdd(num) << std::endl;
        std::cout << add(num, num) << std::endl;
        std::cout << "enter a commenta" << "\n";
        std::getline(std::cin >> std::ws, comment);
        std::cout << "Your comment '" << comment << "'\n";

    }

    return 0;
}

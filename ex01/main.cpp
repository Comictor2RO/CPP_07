#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void Print(T const &x)
{
    std::cout << x << "    ";
}

int main()
{
    {
        std::cout << BOLD << UNDERLINE << BG << GREEN << "-----Tests INT-----" << RESET << "\n\n";
        int arr[] = {1, 2, 3, 4, 5};
        int size = 5;

        std::cout << BG << BLUE <<"Test 1: Normal Functions" << RESET << '\n';
        ::iter(arr, size, Print<int>);
        std::cout << "\n\n"; 

        /* C++11 lambda + lambda 
        std::cout << BG << BLUE << "Test 2(standard C++11): Lambda Functions" << RESET << '\n';
        ::iter(arr, size, [](int x) {
            std::cout << x << "    ";
        });
        std::cout << "\n\n";

        std::cout << BG << BLUE << "Test 3(standard C++11): Capturing Lambda Functions" << RESET << '\n';
        int factor = 3;
        ::iter(arr, size, [factor](int x) {
            std::cout << x + factor << "    ";
        });
        std::cout << "\n\n";
        */
    }

    {
        std::cout << BOLD << UNDERLINE << BG << GREEN << "-----Tests STRING-----" << RESET << "\n\n";
        std::string arr[] = {"Vlad", "Yousef", "Dario", "Gabi", "Elias"};
        int size = 5;

        std::cout << BG << BLUE << "Test 1: Normal Functions" << RESET << '\n';
        ::iter(arr, size, Print<std::string>);
        std::cout << "\n\n";

        /* C++11 lambda + lambda
        std::cout << BG << BLUE << "Test 2(standard C++11): Lambda Functions" << RESET << '\n';
        ::iter(arr, size, [](std::string name) {
            std::cout << name + " Lambda" << "    ";
        });
        std::cout << "\n\n";

        std::cout << BG << BLUE << "Test 3(standard C++11): Capturing Lambda Functions" << RESET << '\n';
        std::string factor = " GAY";
        ::iter(arr, size, [factor](std::string name) {
            std::cout << name + factor << "    ";
        });
        std::cout << "\n\n";
        */
    }
    return 0;
}
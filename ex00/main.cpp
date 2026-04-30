#include <iostream>
#include <string>
#include "whatever.hpp"

int main()
{
    {
        int a = 5;
        int b = 9;
        ::swap(a, b);
        std::cout << a << " " << b << '\n';

        int min = ::min(a, b);
        std::cout << min << '\n';

        int max = ::max(a, b);
        std::cout << max << '\n';
    }

    {
        std::string a = "Vlad";
        std::string b = "Sanja";
        ::swap(a, b);
        std::cout << a << " " << b << '\n';

        std::string min = ::min(a, b);
        std::cout << min << '\n';

        std::string max = ::max(a, b);
        std::cout << max << '\n';
    }

    {
        double a = 10.11;
        double b = 10.12;
        ::swap(a, b);
        std::cout << a << " " << b << '\n';

        double min = ::min(a, b);
        std::cout << min << '\n';

        double max = ::max(a, b);
        std::cout << max << '\n';
    }
    return 0;
}

// Subject Main
/*
int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
*/
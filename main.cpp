#include <cstdint> // for fixed-width integers
#include <iostream>

int main()
{
    std::int8_t x{ 98 }; // int8_t is usually a typedef for signed char
    std::cout << x << '\n';

    return 0;
}
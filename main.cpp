#include <iostream>
#include <cassert>
#include <cstdlib>

bool isLowerVowel(char c)
{
    switch (c) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

int Vowel()
{
    #ifdef NDEBUG
    // If NDEBUG is defined, asserts are compiled out.
    // Since this function requires asserts to not be compiled out, we'll terminate the program if this function is called when NDEBUG is defined.
    std::cerr << "Tests run with NDEBUG defined (asserts compiled out)";
    std::abort();
#endif

assert(isLowerVowel('a'));
assert(isLowerVowel('i'));
return 0;
}

int main()
{
    Vowel();

    // If we reached here, all tests must have passed
    std::cout << "All tests succeeded\n";

    return 0;
}
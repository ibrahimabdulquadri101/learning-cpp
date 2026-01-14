#include <iostream>
#include <cstdlib>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getChar()
{
    while(true)
        {
            std::cout << "Enter your Number:";
            double x{};
            std::cin >> x;
            if(std::cin.eof())
                std::exit(0);
            if(std::cin.fail())
            {
                std::cin.clear();
                ignoreLine();
                std::cout << "Oops, that was invalid. Try again.\n";
            }
            else
            {
                ignoreLine();
                return x;
            }
        }
}

char getOp()
{
    while(true)
    {
        std::cout << "ENTER THE OPERATION OF YOUR CHOICE: \n"; 
        char x{};
        std::cin >> x;
        if(std::cin.eof())
            std::exit(0);
        ignoreLine();
        if(x=='+'||x=='-'||x=='*'||x=='/')
            return x;
        std::cout << "Invalid operator. Please use +, -, *, or /.\n";
    }
}

void Calculate(double x , char op , double y)
{
    switch (op){
        case '+':
            std::cout << x + y << std::endl;
            break;
        case '-':
            std::cout << x - y << std::endl;
            break;
        case '*':
            std::cout << x * y << std::endl;
            break;
        case '/':
            if(y==0)
                std::cout << "Undefined (cannot divide by zero)";
            std::cout << x / y << std::endl;
            break;
    }
}

int main()
{
    double x{getChar()};
    char op{getOp()};
    double y{getChar()};
    Calculate(x,op,y);
    return 0;
}
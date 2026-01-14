#include <iostream>

double getChar()
{
    std::cout << "Enter the number you like:"<<std::endl;
    double x;
    std::cin >> x;
    return x;
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or /: " <<std::endl;
    char x;
    std::cin >> x;
    return x;
}

void Calculate(double x , char op , double y)
{
    std::cout << x << ' ' << op << ' ' << y << " is ";
    switch (op)
    {
    case '+':
        std::cout << x + y << std::endl;
        return;
    case '-':
        std::cout << x - y << std::endl;
        return;
    case '*':
        std::cout << x * y << std::endl;
        return;
    case '/':
        std::cout << x/y  << std::endl;
        return;
    }
}

int main()
{
    double x{getChar()};
    char op{getOperator()};
    double y{getChar()};
    Calculate(x,op,y);
    return 0;
}
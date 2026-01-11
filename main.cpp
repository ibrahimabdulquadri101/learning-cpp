#include <iostream>
#include "Random.h"

int main()
{
    bool playAgain = true;
    
    while(playAgain)
    {
        int rand = Random::get(1, 100);
        std::cout << "Enter a number: ";
        bool correct = false;
        
        for(int i{}; i < 7; ++i)
        {
            int guess;
            std::cin >> guess;
            
            if(guess < rand)
            {
                std::cout << "Too low\n";
            }
            else if(guess > rand)
            {
                std::cout << "Too high\n";
            }
            else
            {
                correct = true;
                std::cout << "You got it right!\n";
                break;
            }
        }
        
        if(!correct)
            std::cout << "Sorry, you lose. The correct number was: " << rand << '\n';
        
        std::cout << "Do you want to play again? (y/n): ";
        char yn;
        bool validInput = false;
        
        while(!validInput)
        {
            std::cin >> yn;
            if(yn == 'n' || yn == 'N')
            {
                std::cout << "Thanks for playing!\n";
                playAgain = false;
                validInput = true;
            }
            else if(yn == 'y' || yn == 'Y')
            {
                playAgain = true;
                validInput = true;
            }
            else
            {
                std::cout << "Please enter 'y' or 'n': ";
            }
        }
    }
    
    return 0;
}
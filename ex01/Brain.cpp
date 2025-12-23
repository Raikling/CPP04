#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "Default";
    std::cout << "Brain's Default constructor called" << std::endl;
}

Brain::Brain(std::string &idea) //why the & here?
{
    for (int i= 0; i < 100; i++)
        _ideas[i] = idea;
    std::cout << "Brain's Parametric constructor called." << std::endl;
}



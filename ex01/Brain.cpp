#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "Default";
    std::cout << "Brain's Default constructor called" << std::endl;
}

Brain::Brain(std::string& idea)
{
    for (int i= 0; i < 100; i++)
        _ideas[i] = idea;
    std::cout << "Brain's Parametric constructor called." << std::endl;
}


Brain::Brain(Brain const& other)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    std::cout << "Brain's Copy constructor called." << std::endl;
}

Brain& Brain::operator=(Brain const& other)
{
    if(this != &other)
    {
        std::cout << "Brain's Copy assignment operator called." << std::endl;
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain's Deconstructor called." << std::endl;
}

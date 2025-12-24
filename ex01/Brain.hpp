#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
       std::string _ideas[100]; 

    public:
        Brain();
        Brain(std::string idea);
        Brain(Brain const& other);
        Brain& operator=(Brain const& other);
        ~Brain();
};



#endif
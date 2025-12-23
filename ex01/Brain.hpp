#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
       std::string _ideas[100]; 

    public:
        Brain();
        Brain(std::string &idea); //should i add const here?
        Brain(Brain const& other);
        Brain& operator=(Brain const& other);
        ~Brain();
};



#endif
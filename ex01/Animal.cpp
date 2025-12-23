#include "Animal.hpp"

Animal::Animal(): _type("DEFAULT")
{
   std::cout << "Animal's default constructor called." << std::endl;
}

Animal::Animal(std::string ty):_type(ty)
{
   std::cout << "Animal's Parametric Constuctor called." << std::endl;
}

std::string Animal::getType() const
{
   return this->_type;
}

Animal::Animal(Animal const& other)
{
   std::cout << "Animal's Copy constructor called." << std::endl;
   *this = other;
}

Animal& Animal::operator=(Animal const& rhs)
{
   std::cout << "Animal's Copy Assignement called." << std::endl;
   if (this != &rhs)
      this->_type = rhs.getType();
   return *this;
}


Animal::~Animal()
{
   std::cout << "Animal's Deconstructor called" << std::endl;
}



void Animal::makeSound() const
{
   std::cout << "Some EERIE Animal sound" << std::endl;
}
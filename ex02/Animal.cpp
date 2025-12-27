#include "Animal.hpp"

AAnimal::AAnimal(): _type("DEFAULT")
{
   std::cout << "Animal's default constructor called." << std::endl;
}

AAnimal::AAnimal(std::string ty):_type(ty)
{
   std::cout << "Animal's Parametric Constuctor called." << std::endl;
}


AAnimal::AAnimal(AAnimal const& other)
{
   std::cout << "Animal's Copy constructor called." << std::endl;
   *this = other;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs)
{
   std::cout << "Animal's Copy Assignement called." << std::endl;
   if (this != &rhs)
      this->_type = rhs.getType();
   return *this;
}


AAnimal::~AAnimal()
{
   std::cout << "Animal's Deconstructor called" << std::endl;
}


std::string AAnimal::getType() const
{
   return this->_type;
}

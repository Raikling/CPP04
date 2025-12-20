#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("WRONG_DEFAULT")
{
   std::cout << "WrongAnimal's default constructor called." <<  std::endl;
}

WrongAnimal::WrongAnimal(std::string ty) : type(ty)
{
   std::cout << "WrongAnimal's Parametric Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other)
{
   std::cout << "WrongAnimal's Copy constructor called." << std::endl;
   *this = other;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
   std::cout << "WrongAnimal's Copy Assignement called." << std::endl;
   if (this != &rhs)
      this->type = rhs.getType();
   return *this;
}

WrongAnimal::~WrongAnimal()
{
   std::cout << "WrongAnimal's Deconstructor called." << std::endl;
}

std::string WrongAnimal::getType() const
{
   return this->type;
}

void WrongAnimal::makeSound() const
{
   std::cout << "Some WRONG Animal sound" << std::endl;
}

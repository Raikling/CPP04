#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat")
{
   std::cout << "WrongCat's Default Constructor called." <<  std::endl;
}

WrongCat::WrongCat(std::string ty) : WrongAnimal(ty)
{
   std::cout << "WrongCat's Parametric Constructor called." <<  std::endl;
}

WrongCat::WrongCat(WrongCat const& other) : WrongAnimal(other)
{
   std::cout << "WrongCat's Copy Constructor called." <<  std::endl;
   *this = other;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
   std::cout << "WrongCat's Copy Assignement called." << std::endl;
   WrongAnimal::operator=(rhs);
   return *this;
}

void WrongCat::makeSound() const
{
   std::cout << "Meow (wrongly)" << std::endl;
}

WrongCat::~WrongCat()
{
   std::cout << "WrongCat's Deconstructor called." <<  std::endl;
}
#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
   std::cout << "Cat's Default Constructor called." << std::endl;
}
Cat::Cat(std::string ty) : Animal(ty)
{
   std::cout << "Cat's Parametric Constructor called." << std::endl;
}

Cat::~Cat()
{
   std::cout << "Cat's Deconstructor called." << std::endl;
}

Cat::Cat(Cat const& other) : Animal(other)
{
   std::cout << "Cat's Copy Constructor called." << std::endl;
}

Cat& Cat::operator=(Cat const& rhs)
{
   std::cout << "Cat's Copy Assignement called." << std::endl;
   Animal::operator=(rhs);
   return *this;
}

void Cat::makeSound() const
{
   std::cout << "Meow" << std::endl;
}

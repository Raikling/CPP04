#include "Dog.hpp"


Dog::Dog() : Animal("Dog")
{
   std::cout << "Dog's Default constructor called." << std::endl;
}

Dog::Dog(std::string ty) : Animal(ty)
{
   std::cout << "Dog's Parametric construcotr called." << std::endl;
}
Dog::Dog(Dog const& other) : Animal(other)
{
   std::cout << "Dog's Copy Construcotr called." << std::endl;
}

Dog& Dog::operator=(Dog const& rhs)
{
   std::cout << "Dog's Copy Assignement called." << std::endl;
   Animal::operator=(rhs);
   return *this;
}

Dog::~Dog()
{
   std::cout << "Dog's Deconstructor called." << std::endl;
}

void Dog::makeSound() const
{
   std::cout << "Woof" << std::endl;
}
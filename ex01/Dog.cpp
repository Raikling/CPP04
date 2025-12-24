#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
   std::cout << "Dog's Default construcotr called." << std::endl;
}

Dog::Dog(std::string type, Brain& brain) : Animal(type)
{
   _brain = new Brain(brain);
   std::cout << "Dog's Parametric Constructor called." << std::endl;
}

Dog::Dog(Dog const& other) : Animal(other)
{
   _brain = new Brain(*other._brain);
   std::cout << "Dog's Copy constructor called." << std::endl;
}

Dog& Dog::operator=(Dog const& other)
{
   if (this != &other)
   {
      std::cout << "Dog's Copy assignement called." << std::endl;
      Animal::operator=(other);
      if (_brain)
         delete _brain;
      _brain = new Brain(*other._brain);
   }
   return *this;
}

Dog::~Dog()
{
   delete _brain;
   std::cout << "Dog's Deconstructor called." << std::endl;
}

void Dog::makeSound() const
{
   std::cout << "Woof" << std::endl;
}

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
   _brain = new Brain();
   std::cout << "Dog's Default construcotr called." << std::endl;
}

Dog::Dog(std::string type, Brain& brain) : AAnimal(type)
{
   _brain = new Brain(brain);
   std::cout << "Dog's Parametric Constructor called." << std::endl;
}

Dog::Dog(Dog const& other) : AAnimal(other)
{
   _brain = new Brain(*other._brain);
   std::cout << "Dog's Copy constructor called." << std::endl;
}

Dog& Dog::operator=(Dog const& other)
{
   if (this != &other)
   {
      AAnimal::operator=(other);
      if (_brain)
         delete _brain;
      _brain = new Brain(*other._brain);
      std::cout << "Dog's Copy assignement called." << std::endl;
   }
   return *this;
}

Dog::~Dog()
{
   std::cout << "Dog's Deconstructor called." << std::endl;
   delete _brain;
}

void Dog::makeSound() const
{
   std::cout << "Woof" << std::endl;
}

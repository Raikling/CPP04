#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
   _brain = new Brain();
   std::cout << "Cat's Default Constructor called." << std::endl;
}

Cat::Cat(std::string type, Brain& brain) : AAnimal(type)
{
   _brain = new Brain(brain);
   std::cout << "Cat's Parametric Construcot called." << std::endl;
}

Cat::Cat(Cat const& other) : AAnimal(other)
{
   _brain = new Brain(*other._brain);
   std::cout << "Cat's Copy constructor Called." << std::endl;
}

Cat& Cat::operator=(Cat const& other)
{
   if (this != &other)
   {
      AAnimal::operator=(other);
      if(_brain)
         delete _brain;
      _brain = new Brain(*other._brain);
      std::cout << "Cat's Copy assignement called." << std::endl;
   }
   return *this;
}

Cat::~Cat()
{
   std::cout << "Cat's Deconstructor called." << std::endl;
   delete _brain;
}

void Cat::makeSound() const
{
   std::cout << "Meow" << std::endl;
}

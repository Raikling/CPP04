#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
   _brain = new Brain;
   std::cout << "Cat's Default Constructor called." << std::endl;
}

Cat::Cat(std::string type, Brain& brain) : Animal(type)
{
   _brain = new Brain(brain);
   std::cout << "Cat's Parametric Construcot called." << std::endl;
}

Cat::Cat(Cat const& other) : Animal(other)
{
   _brain = new Brain(*other._brain); //why the star here
   std::cout << "Cat's Copy constructor Called." << std::endl;
}

Cat& Cat::operator=(Cat const& other)
{
   if (this != &other)
   {
      std::cout << "Cat's Copy assignement called." << std::endl;
      Animal::operator=(other);
      if(_brain)
         delete _brain;
      _brain = new Brain(*other._brain);
   }
   return *this;
}

Cat::~Cat()
{
   delete _brain;
   std::cout << "Cat's Deconstructor called." << std::endl;
}

void Cat::makeSound() const
{
   std::cout << "Meow" << std::endl;
}

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"





int main(void)
{
   Cat c;
   Dog d;
   //AAnimal a; //throws error since AAnimal is abstract
   //AAnimal *anim = new AAnimal(); //here too

   c.makeSound();
   d.makeSound();
   

   return 0;


}



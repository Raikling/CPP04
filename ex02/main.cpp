#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"





int main(void)
{
   Cat c;
   std::cout << "------------------" << std::endl;
   Dog d;
   std::cout << "------------------" << std::endl;
   //AAnimal a; //throws error since AAnimal is Abstract
   //AAnimal *anim = new AAnimal(); //here too
   AAnimal *ani_dog = new Dog();
   std::cout << "------------------" << std::endl;
   AAnimal *ani_cat = new Cat();
   std::cout << "------------------" << std::endl;


   c.makeSound();
   d.makeSound();
   ani_dog->makeSound();
   ani_cat->makeSound();
   std::cout << "------------------" << std::endl;
   delete ani_dog;
   std::cout << "------------------" << std::endl;
   delete ani_cat;
   std::cout << "------------------" << std::endl;


  
   return 0;
}

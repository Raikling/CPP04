#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"





int main(void)
{
   const int size = 4;
   Animal* animals[size];

   for (int i = 0; i < size; i++)
   {
      if (i < (size / 2))
         animals[i] = new Cat();
      else
         animals[i] = new Dog();
   }

   std::cout <<"------- SOUNDS----------" << std::endl;
   for (int i = 0; i < size; i++)
   {
      std::cout << animals[i]->getType() << " NR " << i + 1 << ": ";
      animals[i]->makeSound();
   }

   std::cout << "--------DELETING----------" << std::endl;
   for (int i = 0; i < size; i++)
   {
      delete animals[i];
   }

   std::cout << "--------Testing Shallow----------" << std::endl;
   Dog OgDog;
   std::cout <<"---------------------------------" << std::endl;
   Dog CopyDog = OgDog;
   std::cout <<"---------------------------------" << std::endl;
   CopyDog = OgDog;
   std::cout <<"---------------------------------" << std::endl;

   std::cout <<"---------------------------------" << std::endl;
   std::cout <<"---------------------------------" << std::endl;
   Cat OgCat;
   std::cout <<"---------------------------------" << std::endl;
   Cat CopyCat(OgCat);
   std::cout <<"---------------------------------" << std::endl;
   CopyCat = OgCat;
   std::cout <<"---------------------------------" << std::endl;

   

   
   return 0;
}



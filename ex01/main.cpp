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

   Cat cat1;
   std::cout << "------------------" << std::endl;
   Cat cat2;
   cat2 = cat1;
   std::cout << "------------------" << std::endl;
   Cat cat3(cat2);
   std::cout << "------------------" << std::endl;
   std::cout << "cat 1 brain address: " << cat1.getBrain() << std::endl;
   std::cout << "------------------" << std::endl;
   std::cout << "cat 2 brain address: " << cat2.getBrain() << std::endl;
   std::cout << "------------------" << std::endl;
   std::cout << "cat 3 brain address: " << cat3.getBrain() << std::endl;
   std::cout << "------------------" << std::endl;
   if (cat1.getBrain() != cat2.getBrain() && cat3.getBrain() != cat2.getBrain() && cat3.getBrain() != cat1.getBrain())
      std::cout << "Deep Copy Success - Different Brain object" << std::endl;
   else
      std::cout << "Shallow copy PROBLEM - Same Brain object" << std::endl;
   std::cout << "------------------" << std::endl;
   return 0;
}


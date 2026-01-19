#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main(void)
{
   const Animal* meta = new Animal();
   std::cout << "------------------" << std::endl;
   const Animal* j = new Dog();
   std::cout << "------------------" << std::endl;
   const Animal* i = new Cat();
   std::cout << "------------------" << std::endl;
   std::cout << j->getType() << " " << std::endl;
   std::cout << i->getType() << " " << std::endl;
   std::cout << "------------------" << std::endl;
   i->makeSound(); //will output cat sound!
   j->makeSound(); //will output dog sound!
   meta->makeSound();
   std::cout << "------------------" << std::endl;

   delete meta;
   std::cout << "------------------" << std::endl;
   delete i;
   std::cout << "------------------" << std::endl;
   delete j;

   return 0;
}



// //wrong _animal_test
// int main(void)
// {
//    const WrongAnimal *wr = new WrongAnimal();
//    std::cout << "------------------" << std::endl;
//    const WrongAnimal *wrc = new WrongCat();

//    std::cout << "WR type is: " << wr->getType() << std::endl;
//    std::cout << "WRC type is: " << wrc->getType() << std::endl;
//    wr->makeSound();
//    wrc->makeSound();

//    delete wr;
//    delete wrc;

//    return 0;
// }
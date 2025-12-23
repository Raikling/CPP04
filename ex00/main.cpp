#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main(void)
{
   const Animal* meta = new Animal();
   const Animal* j = new Dog();
   const Animal* i = new Cat();
   std::cout << j->getType() << " " << std::endl;
   std::cout << i->getType() << " " << std::endl;
   i->makeSound(); //will output the cat sound!
   j->makeSound();
   meta->makeSound();

   delete meta;
   delete i;
   delete j;

   return 0;
}



//wrong _animal_test
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
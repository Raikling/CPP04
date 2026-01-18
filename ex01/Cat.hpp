#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
   private:
      Brain* _brain;
   public:
      Cat();
      Cat(std::string type, Brain& brain); // why the Brain& here? wont just std::string work here ?
      Cat(Cat const& other);
      Cat& operator=(Cat const& other);
      ~Cat();

      void makeSound() const;
      Brain* getBrain() const;
      

};

#endif
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal
{
   protected:
      std::string type;
   public:
      WrongAnimal();
      WrongAnimal(std::string ty);
      WrongAnimal(WrongAnimal const& other);
      WrongAnimal& operator=(WrongAnimal const& rhs);
      ~WrongAnimal();

      std::string getType() const;
      void makeSound() const;
};


#endif
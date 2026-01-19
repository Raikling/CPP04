#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class AAnimal
{
   protected:
      std::string _type;


   public:
      AAnimal();
      AAnimal(std::string ty);
      AAnimal(AAnimal const& other);
      AAnimal& operator=(AAnimal const& rhs);
      virtual ~AAnimal();

      std::string getType()const;
      virtual void makeSound() const = 0;
};



#endif
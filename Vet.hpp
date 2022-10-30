//
// Created by Eden on 30/10/2022.
//

#ifndef VET_PROGRAM_VET_HPP
#define VET_PROGRAM_VET_HPP
#include "Animal.hpp"
#include <vector>
#include <memory>

class Vet {
public:
    void add_animal(Animal * &&);
    void show_sick();
    void show_sick_dogs();
    Vet &get_instance();
private:
    std::vector< std::unique_ptr<Animal> > animals;

};


#endif //VET_PROGRAM_VET_HPP

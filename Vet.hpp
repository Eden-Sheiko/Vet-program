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
    static Vet &get_instance();

    Vet(const Vet&) = delete;
    Vet(Vet&&) = delete;
    Vet& operator=(Vet &&) = delete;
    Vet& operator=(Vet const&) = delete;
private:
    std::vector< std::unique_ptr<Animal> > animals;
    Vet() = default;
};


#endif //VET_PROGRAM_VET_HPP

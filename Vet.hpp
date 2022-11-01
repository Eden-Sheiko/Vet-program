//
// Created by Eden on 30/10/2022.
//

#ifndef VET_PROGRAM_VET_HPP
#define VET_PROGRAM_VET_HPP
#include "Animal.hpp"
#include <vector>
#include <memory>
#include <iostream>
#include "Dog.hpp"

class Vet {
public:
    void add_animal(Animal * &&ref) {
        m_animals.emplace_back(ref);
    }
    void show_sick() {
        for (auto & animal : m_animals) {
            if (!animal->check_health()){
                std::cout << "sick animal:" << animal->m_name << std::endl;
            }
        }
    }

    void show_sick_dogs() {
        for (auto & animal : m_animals) {
            try {
                auto tmp = dynamic_cast<Dog&>(*animal);
                if(!tmp.check_health()){
                    std::cout << "sick dog:" << tmp.m_name << std::endl;
                }
            }

            catch (...) {
                std::cout << "not a dog:" << animal->m_name << std::endl;
            }

        }
    }

    static Vet &get_instance() { //todo: to return instance of the class
        return s_Instance;
    }

    Vet(const Vet&) = delete;
    Vet(Vet&&) = delete;
    Vet& operator=(Vet &&) = delete;
    Vet& operator=(Vet const&) = delete;
private:
    Vet() = default;
    std::vector< std::unique_ptr<Animal> > m_animals;
    static Vet s_Instance;
};

// way one to define static private function
// to init it in cpp file or below class
// and return the instance
#endif //VET_PROGRAM_VET_HPP

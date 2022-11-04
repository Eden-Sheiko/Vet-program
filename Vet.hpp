
#ifndef VET_PROGRAM_VET_HPP
#define VET_PROGRAM_VET_HPP

#include "Animal.hpp"
#include <vector>
#include <memory>
#include <iostream>
#include "Dog.hpp"


/**
 * \class vet
 */
class Vet {
public:
    /**
     * \brief add animal obj to the vector via emplace_back func
     *
     * @param ref
     *
     * @see vector
     * @see emplace_back
     */
    void add_animal(Animal *&&ref) {
        m_animals.emplace_back(ref);
    }

    /**
     * \brief prints all the sick animals in the vector
     *
     */
    void show_sick() {
        for (auto &animal: m_animals) {
            if (!animal->check_health()) {
                std::cout << "sick animal: " << animal->m_name << std::endl;
            }
        }
    }

    /**
     * \brief prints all the sick dogs in the vector
     * uses dynamic_cast
     * has try block that determines if the animal is a dog or not
     */
    void show_sick_dogs() {
        for (auto &animal: m_animals) {
            try {
                auto tmp = dynamic_cast<Dog &>(*animal);
                if (!tmp.check_health()) {
                    std::cout << "sick dog: " << tmp.m_name << std::endl;
                }
            }

            catch (...) {
                std::cout << "not a dog: " << animal->m_name << std::endl;
            }
        }
    }

    /**
     *
     * \brief return the s_Instance of the class
     */
    static Vet &get_instance() {
        return s_Instance;
    }

    /**
     *  removed cpy ctor
     *  removed cpy assignment
     *  removed move ctor
     *  removed move assignment
     */
    Vet(const Vet &) = delete;

    Vet(Vet &&) = delete;

    Vet &operator=(Vet &&) = delete;

    Vet &operator=(Vet const &) = delete;

private:
    Vet() = default;

    std::vector<std::unique_ptr<Animal> > m_animals;
    static Vet s_Instance;
};

#endif //VET_PROGRAM_VET_HPP

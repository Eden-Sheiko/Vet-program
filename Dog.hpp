//
// Created by Eden on 29/10/2022.
//

#ifndef VET_PROGRAM_DOG_HPP
#define VET_PROGRAM_DOG_HPP
#include <utility>

#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog(std::string name, double temp, double breath, double heart, bool is_large)
        : Animal{std::move(name),temp,breath,heart} , m_is_large{is_large}
    {}
    bool m_is_large {};
    bool check_health() override;
};


#endif //VET_PROGRAM_DOG_HPP

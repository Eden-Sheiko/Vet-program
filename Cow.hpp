//
// Created by Eden on 29/10/2022.
//

#ifndef VET_PROGRAM_COW_HPP
#define VET_PROGRAM_COW_HPP
#include <utility>

#include "Animal.hpp"

class Cow : public Animal{
public:
    Cow(std::string name, double temp, double breath, double heart, double liters)
        : Animal{std::move(name),temp,breath,heart} , m_milk{liters}
    {}

    double m_milk {};
    bool check_health() override;

};


#endif //VET_PROGRAM_COW_HPP

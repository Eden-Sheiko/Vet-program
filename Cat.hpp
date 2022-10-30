//
// Created by Eden on 29/10/2022.
//

#ifndef VET_PROGRAM_CAT_HPP
#define VET_PROGRAM_CAT_HPP
#include "Animal.hpp"
class Cat : public Animal{
public:
    Cat(std::string name, double temp, double breath, double heart)
        : Animal{name,temp,breath,heart}
    {}
    bool check_health() override;

};


#endif //VET_PROGRAM_CAT_HPP

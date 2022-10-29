//
// Created by Eden on 29/10/2022.
//

#ifndef VET_PROGRAM_ANIMAL_HPP
#define VET_PROGRAM_ANIMAL_HPP
#include <string>

class Animal {
public:
    Animal(std::string name, double temp, double breath, double heart)
        :m_name{name},m_temp{temp},m_breath{breath},m_heart{heart}
        {}


    std::string m_name {};
    double m_temp {};
    double m_breath {};
    double m_heart {};
    virtual bool check_health() = 0;
};


#endif //VET_PROGRAM_ANIMAL_HPP

#ifndef VET_PROGRAM_CAT_HPP
#define VET_PROGRAM_CAT_HPP

#include <utility>
/**
 * \class cat \inherit Animal
 * the class uses Animal ctor @see Animal
 *
 */
#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat(std::string name, double temp, double breath, double heart)
            : Animal{std::move(name), temp, breath, heart} {}

    /**
     * \overload check_health of cat
     * @return bool
     */
    bool check_health() override;
};


#endif //VET_PROGRAM_CAT_HPP

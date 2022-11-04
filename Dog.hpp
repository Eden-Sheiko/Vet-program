#ifndef VET_PROGRAM_DOG_HPP
#define VET_PROGRAM_DOG_HPP

#include <utility>

#include "Animal.hpp"

/**
 * \class Dog \inherit Animal
 * the class uses Animal ctor @see Animal
 * and adds m_is_large data member
 *
 *
 */

class Dog : public Animal {
public:
    Dog(std::string name, double temp, double breath, double heart, bool is_large)
            : Animal{std::move(name), temp, breath, heart}, m_is_large{is_large} {}

    bool m_is_large{};

    /**
     * @overload check_health()
     *
     * @return bool
     */
    bool check_health() override;
};


#endif //VET_PROGRAM_DOG_HPP

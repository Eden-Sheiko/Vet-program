#ifndef VET_PROGRAM_COW_HPP
#define VET_PROGRAM_COW_HPP
#include <utility>

#include "Animal.hpp"
 /**
 * \class Cow \inherit Animal
 * the class uses Animal ctor @see Animal
 * and adds m_milk data member
 *
 *
 */
class Cow : public Animal{
public:
    Cow(std::string name, double temp, double breath, double heart, double liters)
        : Animal{std::move(name),temp,breath,heart} , m_milk{liters}
    {}

    double m_milk {};
    /**
     * @overload check_health()
     * @return bool
     */
    bool check_health() override;

};


#endif //VET_PROGRAM_COW_HPP

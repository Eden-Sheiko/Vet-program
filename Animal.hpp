
#ifndef VET_PROGRAM_ANIMAL_HPP
#define VET_PROGRAM_ANIMAL_HPP

#include <string>
#include <utility>
#include <stdexcept>
#include <iostream>

static constexpr double ZERO = 0;

/**
 * \class  Animal
 *
 */
class Animal {
public:
    /**
     * \brief ctor that gets 4 params
     *
     * deals with zero case params less then zero
     * deals with null/empty name
     *
     * @param std::string name
     * @param double temp
     * @param double breath
     * @param double heart
     */
    Animal(std::string name, double temp, double breath, double heart)
    try: m_name{std::move(name)}, m_temp{temp}, m_breath{breath}, m_heart{heart} {
        if (m_name.empty()) {
            throw std::invalid_argument("An animal cannot be without a name");
        }
        if (m_temp < ZERO || m_breath < ZERO || m_heart < ZERO) {
            throw std::invalid_argument("An animal cannot with less then zero value");
        }
    }
    catch (...) {

    }

    /**
     *  \brief virtual dtor inorder to
     *  destroy objects that  inherits from animals
     */
    virtual ~Animal() = default;

    std::string m_name{};
    double m_temp{};
    double m_breath{};
    double m_heart{};

    /**
     * \brief check_health() Pure Virtual Function
     * each class (dog,cat,cow) inherits from class animal
     * and overrides this function for his own features
     * @return bool if the animal is sick or not
     * @see Dog.hpp
     * @see Cat.hpp
     * @see Cow.hpp
     */
    virtual bool check_health() = 0;

};


#endif //VET_PROGRAM_ANIMAL_HPP

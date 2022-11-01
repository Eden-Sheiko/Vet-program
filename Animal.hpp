//
// Created by Eden on 29/10/2022.
//

#ifndef VET_PROGRAM_ANIMAL_HPP
#define VET_PROGRAM_ANIMAL_HPP
#include <string>
#include <utility>
/**
 * \class  Animal
 *
 */
class Animal {
public:
    /**
     * \brief ctor that gets 4 params
     * @param std::string name
     * @param double temp
     * @param double breath
     * @param double heart
     */
    Animal(std::string name, double temp, double breath, double heart)
        :m_name{std::move(name)},m_temp{temp},m_breath{breath},m_heart{heart}
        {}
        /**
         *  \brief virtual dtor inorder to
         *  destroy objects that  inherits from animals
         */
    virtual ~Animal() = default;
    std::string m_name {};
    double m_temp {};
    double m_breath {};
    double m_heart {};
    /**
     * \brief check_health() Pure Virtual Function
     * @return bool
     */
    virtual bool check_health() = 0;
};


#endif //VET_PROGRAM_ANIMAL_HPP

//
// Created by Eden on 29/10/2022.
//

#include "Dog.hpp"

bool Dog::check_health()
{
    if (m_is_large)
    {
        return (m_temp >= 38 && m_temp <= 39.2)
               && (m_breath >= 10 && m_breath <= 35 )
               && (m_heart >= 60 && m_heart <= 100);
    }
    else
    {
        return (m_temp >= 38 && m_temp <= 39.2)
               && (m_breath >= 10 && m_breath <= 35 )
               && (m_heart >= 100 && m_heart <= 140);
    }
}

//
// Created by Eden on 29/10/2022.
//

#include "Cat.hpp"

bool Cat::check_health() {
    return (m_temp >= 38 && m_temp <= 39.2)
           && (m_breath >= 16 && m_breath <= 40 )
           && (m_heart >= 120 && m_heart <= 140);
}

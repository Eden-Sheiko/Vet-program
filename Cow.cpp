//
// Created by Eden on 29/10/2022.
//

#include "Cow.hpp"

bool Cow::check_health() {
    return (m_temp >= 38.5 && m_temp <= 39.5)
           && (m_breath >= 26 && m_breath <= 50 )
           && (m_heart >= 48 && m_heart <= 84)
           && (m_milk >= 30);
}

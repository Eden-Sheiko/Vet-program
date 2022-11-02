#include "Cat.hpp"

static constexpr double MAX_TMP = 39.2;
static constexpr double MIN_TMP = 38;
static constexpr double MIN_BREATH = 16;
static constexpr double MAX_BREATH = 40;
static constexpr double MIN_HEART = 120;
static constexpr double MAX_HEART = 140;

bool Cat::check_health() {
    return (m_temp >= MIN_TMP && m_temp <= MAX_TMP)
           && (m_breath >= MIN_BREATH && m_breath <= MAX_BREATH )
           && (m_heart >= MIN_HEART && m_heart <= MAX_HEART);
}

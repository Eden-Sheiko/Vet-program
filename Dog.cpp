#include "Dog.hpp"

static constexpr double MIN_TMP = 38;
static constexpr double MAX_TMP = 39.2;
static constexpr double MIN_BREATH = 10;
static constexpr double MAX_BREATH = 35;
static constexpr double MIN_HEART_SMALL = 100;
static constexpr double MAX_HEART_SMALL = 140;
static constexpr double MIN_HEART_LARGE = 60;
static constexpr double MAX_HEART_LARGE = 100;

/**
 * \brief check_health of the dog
 *
 *
 * @return bool
 */
bool Dog::check_health() {
    if (m_is_large) {
        return (m_temp >= MIN_TMP && m_temp <= MAX_TMP)
               && (m_breath >= MIN_BREATH && m_breath <= MAX_BREATH)
               && (m_heart >= MIN_HEART_LARGE && m_heart <= MAX_HEART_LARGE);
    } else {
        return (m_temp >= MIN_TMP && m_temp <= MAX_TMP)
               && (m_breath >= MIN_BREATH && m_breath <= MAX_BREATH)
               && (m_heart >= MIN_HEART_SMALL && m_heart <= MAX_HEART_SMALL);
    }
}

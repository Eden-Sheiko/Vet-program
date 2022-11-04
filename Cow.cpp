#include "Cow.hpp"

static constexpr double MIN_TMP = 38.5;
static constexpr double MAX_TMP = 39.5;
static constexpr double MIN_BREATH = 26;
static constexpr double MAX_BREATH = 50;
static constexpr double MIN_HEART = 48;
static constexpr double MAX_HEART = 84;
static constexpr double MIN_MILK = 30;

/**
 * \brief check health of the cow
 *
 * @return bool
 */

bool Cow::check_health() {
    return (m_temp >= MIN_TMP && m_temp <= MAX_TMP)
           && (m_breath >= MIN_BREATH && m_breath <= MAX_BREATH)
           && (m_heart >= MIN_HEART && m_heart <= MAX_HEART)
           && (m_milk >= MIN_MILK);
}

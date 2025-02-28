#include "Stats.h"
#include "Common.h"

Stats::Stats() {}

void Stats::applyStatBoosts(Stats& boost)
{
    if (boost.m_boostIsPercentage)
    {
        increaseByPercent(m_maxHealth,       boost.m_maxHealth);
        increaseByPercent(m_attack,          boost.m_attack);
        increaseByPercent(m_specialAttack,   boost.m_specialAttack);
        increaseByPercent(m_defense,         boost.m_defense);
        increaseByPercent(m_specialDefense,  boost.m_specialDefense);
        increaseByPercent(m_speed,           boost.m_speed);
        increaseByPercent(m_thorns,          boost.m_thorns);
        increaseByPercent(m_magicThorns,     boost.m_magicThorns);
        increaseByPercent(m_selfHealing,     boost.m_selfHealing);
    }
    else  // Increase by flat amount
    {
        m_maxHealth      +=  boost.m_maxHealth;
        m_attack         +=  boost.m_attack;
        m_specialAttack  +=  boost.m_specialAttack;
        m_defense        +=  boost.m_defense;
        m_specialDefense +=  boost.m_specialDefense;
        m_speed          +=  boost.m_speed;
        m_thorns         +=  boost.m_thorns;
        m_magicThorns    +=  boost.m_magicThorns;
        m_selfHealing    +=  boost.m_selfHealing;
    }
        
    for (int i; i<NUM_ELEMENTS; ++i)
    {
        m_elementalBoost[i] += boost.m_elementalBoost[i];
    }
        
    for (int i; i<NUM_TYPES; ++i)
    {
        m_typeBoost[i] += boost.m_typeBoost[i];
    }
}








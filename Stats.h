#ifndef STATS_H
#define STATS_H

#include "Enums.h"

class Stats
{
    public:
    
    Stats();
    
    // [0-9999]  boosts can be either flat or percentage
    int m_maxHealth;
    int m_attack;
    int m_specialAttack;
    int m_defense;
    int m_specialDefense;
    int m_speed;
    int m_thorns;           // flat physical damage value applied if hit by a physical attack
    int m_magicThorns;
    int m_selfHealing;

    bool m_boostIsPercentage;

    // [0%-100%]  boosts must be flat but the value represents a percentage
    int m_accuracy;    // this value gets added to the card's accuracy
    int m_elusiveness;
    int m_lifesteal;
    int m_physicalReflect;
    int m_magicReflect;
    int m_healBoost;

    int m_elementalBoost[NUM_ELEMENTS];
    int m_typeBoost[NUM_TYPES];

  
    void applyStatBoosts(Stats& boost);  
};

#endif
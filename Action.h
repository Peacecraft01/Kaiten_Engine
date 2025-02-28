#ifndef ACTION_H
#define ACTION_H

#include "Enums.h"
#include "Status.h"
#include "Stats.h"

#include <vector>

class Action
{
    int m_damage;
    int m_specialDamage;
    int m_selfDamage;               // Self damage ignores defenses
    int m_backlineDamage;
    int m_backlineSpecialDamage;
    
    int accuracy;
    
    int m_damageBlock;
    int m_specialDamageBlock;
    int m_bothDamageBlock;
    
    int m_selfHeal;
    int m_backlineHeal;
    int m_enemyHeal;
    
    int m_critChance;
    int m_critDamage;
    int m_pierce;
    
    int m_damagePerStack;
    int m_specialDamagePerStack;
    int m_perStackStatus;
    
    Stats m_selfStatMods;
    Stats m_enemyStatMods;
    
    std::vector<Status> m_playerStatusMods;
    std::vector<Status> m_enemyStatusMods;
    
    std::vector<int> m_playerStatusesToApply;
    std::vector<int> m_enemyStatusesToApply;
    int m_statusApplyChance;
};

#endif
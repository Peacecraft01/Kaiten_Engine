#ifndef STATUS_H
#define STATUS_H

#include "Stats.h"

class Status
{
    public:
    
    Status();
    
    int m_id;
    
    bool m_isActive;
    bool m_isPermanent;
    
    int m_count;
    int m_duration;
    
    Stats m_statBoosts;
    
    int m_damage;
    int m_stacks;
    int m_maxStacks;
    bool m_damagePerStack;
    
    bool checkActive();
};

#endif
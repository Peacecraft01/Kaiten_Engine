#ifndef CHARACTER_H
#define CHARACTER_H

#include "Enums.h"
#include "Stats.h"
#include "Card.h"
#include <string>
using std::string;

class Character
{
    public:
        // Setters
        void setName        (const string& name)    { m_name = name; }
        void setId          (int id)                { m_id = id; }
        void setHealth      (int health)            { m_health = health; }
        void setArmor       (int armor)             { m_armor = armor; }
        void setBaseStats   (Stats base)            { m_baseStats = base; }

        // Getters
        const string&       getName()               const { return m_name; }
        int                 getId()                 const { return m_id; }
        int                 getHealth()             const { return m_health; }

        
    
    std::string m_name;
    int m_id;
    
    Card m_currentCard;
    
    int m_health;
    int m_armor;
    
    Stats m_baseStats;
    Stats m_permanentStats;
    Stats m_tempStats;
    
    Status m_statuses[NUM_STATUSES];
    Status m_frontLineHitStatus;
    Status m_backLineHitStatus;
};

#endif
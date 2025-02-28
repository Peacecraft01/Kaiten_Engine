#include "Enums.h"
#include "Battle.h"
#include "Character.h"
#include "Action.h"
#include "Stats.h"
#include "Status.h"

Battle::Battle() {}

void Battle::executeTurn(Character& attacker,          Character& defender,
                         Character& attackerBacklineL, Character& attackerBacklinR,
                         Character& defenderBacklineL, Character& defenderBacklineR)
{
    attacker.m_tempStats = attacker.m_permanentStats;
    
    applyStatusStatBoosts(attacker);
    applyStatusStatBoosts(defender);
        
        
}
    
void Battle::applyStatusStatBoosts(Character& character)
{
    for (int i; i<NUM_STATUSES; ++i)
    {
        if (character.m_statuses[i].checkActive())
        {
            character.m_tempStats.applyStatBoosts(character.m_statuses[i].m_statBoosts);
        }
    }
}
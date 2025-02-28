#include "Character.h"

class Battle
{
    public:
        Battle();
        void executeTurn(Character& attacker,          Character& defender,
                         Character& attackerBacklineL, Character& attackerBacklinR,
                         Character& defenderBacklineL, Character& defenderBacklineR);
                         
        void applyStatusStatBoosts(Character& character);
};
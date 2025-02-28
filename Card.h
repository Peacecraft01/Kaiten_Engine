#ifndef CARD_H
#define CARD_H

#include "Enums.h"
#include "Action.h"

#include <string>

class Card
{
    std::string m_name;
    int m_id;
    
    Action m_mainAction;
    Action m_conditionalAction;
    int m_condition;
    
    std::vector<int> m_type;
    std::vector<int> m_element;
};

#endif
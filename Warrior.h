#pragma once
#include "Character.h"

class Warrior : virtual public Character {
public:
    Warrior();
    virtual ~Warrior();
    void Say() const override;
};
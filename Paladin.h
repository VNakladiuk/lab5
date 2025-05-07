#pragma once
#include "Warrior.h"
#include "Mage.h"

class Paladin : public Warrior, public Mage {
public:
    Paladin();
    ~Paladin() override;
    void Say() const override;
};

#pragma once
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"

class UltimateHero : public Warrior, public Mage, public Archer {
public:
    UltimateHero();
    ~UltimateHero() override;
    void Say() const override;
};
#pragma once
#include "Character.h"

class Mage : virtual public Character {
public:
    Mage();
    virtual ~Mage();
    void Say() const override;
};

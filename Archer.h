#pragma once
#include "Character.h"

class Archer : virtual public Character {
public:
    Archer();
    virtual ~Archer();
    void Say() const override;
};
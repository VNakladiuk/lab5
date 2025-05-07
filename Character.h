#pragma once
#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    string name;
    int level;

public:
    Character();
    virtual ~Character();
    virtual void Say() const;
};

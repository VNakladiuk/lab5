#include "Paladin.h"

Paladin::Paladin() {
    cout << "Paladin Constructor\n";
    name = "Uther";
    level = 10;
}

Paladin::~Paladin() {
    cout << "Paladin Destructor\n";
}

void Paladin::Say() const {
    cout << "I protect with faith and magic.\n";
}
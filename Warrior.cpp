#include "Warrior.h"

Warrior::Warrior() {
    cout << "Warrior Constructor\n";
}

Warrior::~Warrior() {
    cout << "Warrior Destructor\n";
}

void Warrior::Say() const {
    cout << "I fight with honor.\n";
}

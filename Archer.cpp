#include "Archer.h"

Archer::Archer() {
    cout << "Archer Constructor\n";
}

Archer::~Archer() {
    cout << "Archer Destructor\n";
}

void Archer::Say() const {
    cout << "I strike from the shadows.\n";
}
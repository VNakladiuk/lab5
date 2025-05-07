#include "Character.h"

Character::Character() {
    cout << "Character Constructor\n";
}

Character::~Character() {
    cout << "Character Destructor\n";
}

void Character::Say() const {
    cout << "I am a character.\n";
}
#include "Mage.h"

Mage::Mage() {
    cout << "Mage Constructor\n";
}

Mage::~Mage() {
    cout << "Mage Destructor\n";
}

void Mage::Say() const {
    cout << "I cast spells.\n";
}

#include "UltimateHero.h"

UltimateHero::UltimateHero() {
    cout << "UltimateHero Constructor\n";
    name = "HeroX";
    level = 99;
}

UltimateHero::~UltimateHero() {
    cout << "UltimateHero Destructor\n";
}

void UltimateHero::Say() const {
    cout << "I master all paths: strength, magic, precision.\n";
}

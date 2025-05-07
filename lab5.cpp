#include "Paladin.h"
#include "UltimateHero.h"

int main() {
    cout << "Creating Paladin:\n";
    Character* pal = new Paladin();
    pal->Say();
    delete pal;

    cout << "\nCreating UltimateHero:\n";
    Character* hero = new UltimateHero();
    hero->Say();
    delete hero;

    return 0;
}
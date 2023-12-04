#include <iostream>
#include "Planet.h"

int main()
{
    const Planet planet1 = Planet("Aurora", 0, 0, 0, 50, 36, false);
    const Planet planet2 = Planet("Beaver", 12, 14, 16, 18, 20, true);
    const Planet planet3 = Planet("Crocodile", 1, 1, 1, 4, 1, true);
    const Planet planet5 = Planet("Lebron", 23, 23, 23, 6, 6, false);
    const Planet planet6 = Planet("Lebron", 23, 23, 23, 6, 6, false);
    const Planet planet7 = Planet("Lebron", 23, 23, 23, 6, 6, false);
    const Planet planet8 = Planet("Lebron", 23, 23, 23, 6, 6, false);
    const Planet planet9 = Planet("Lebron", 23, 23, 23, 6, 6, false);
    const Planet planet10 = Planet("Lebron", 23, 23, 23, 6, 6, false);

    Planet *planets = new Planet[4];
    return 0;
}

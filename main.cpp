#include <iostream>
#include "Planet.h"

int main()
{
    char memes[] = "memes";
    const Planet planet1 = Planet("1", 1, 1, 1, 1, 1, true);
    const Planet planet2 = Planet("2", 1, 1, 1, 2, 1, true);
    const Planet planet3 = Planet("3", 1, 1, 1, 4, 1, true);
    const Planet planet4 = Planet(memes, 1, 1, 1, 3, 1, true);

    Planet *planets = new Planet[4];
    planets[0] = planet1;
    planets[1] = planet2;
    planets[2] = planet3;
    planets[3] = planet4;

    sort_by_density(planets, 4);
    for (int i = 0; i < 4; i++)
        std::cout << "JOPA " << planets[i].get_name() << std::endl;
    std::cout << "ABOBA " << planets[2].get_name() << std::endl;

    return 0;
}

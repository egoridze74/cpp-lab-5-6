#include <iostream>
#include "Planet.h"

int main() {
    std::cout << "Create planets" << std::endl;
    Planet planet1 = Planet("Aurora", 0.0, 0.0, 0.0, 50.0, 36.0, false);
    Planet planet2 = Planet("Beaver", 12.0, 14.0, 16.0, 18.0, 20.0, true);
    Planet planet3 = Planet("Crocodile", 1.0, 1.0, 1.0, 1.0, 1.0, true);
    Planet planet4 = Planet("Lebron", 23.0, 23.0, 23.0, 6.0, 6.0, false);
    Planet planet5 = Planet("Jupiter", 100.0, -50.0, -75.0, 1000.0, 100.0, false);
    Planet planet6 = Planet("Diduk", 11.0, 48.0, 34.0, 84.5, 57.0, true);
    Planet planet7 = Planet("Kavkazium", 500.0, 500.0, -500.0, 5000.0, 200.0, false);
    Planet planet8 = Planet("Kicks", 10.0, 10.0, 10.0, 10.0, 10.0, false);
    Planet planet9 = Planet("Opticon", -50.0, -30.0, -40.0, 3.0, 2.0, true);

    std::cout << "Example of planet output:" << std::endl;
    std::cout << planet1 << std::endl;

    Planet planets[] = {planet1, planet2, planet3, planet4, planet5, planet6, planet7, planet8, planet9};
    std::cout << "Unsorted list:" << std::endl;
    for (int i = 0; i < 9; i++)
        std::cout << i + 1 << ". " << planets[i].get_name() << "    density: " << planets[i].get_density() << std::endl;

    sort_by_density(planets, 9);
    std::cout << "Sorted list:" << std::endl;
    for (int i = 0; i < 9; i++)
        std::cout << i + 1 << ". " << planets[i].get_name() << "    density: " << planets[i].get_density() << std::endl;

    std::cout << "Number of planets closer to X(20, 20, 20) than 50 conventional units:" << std::endl;
    std:: cout << closer_than(20, 20, 20, planets, 9, 50) << std::endl;

    std::cout << "Livable planets average mass:" << std::endl;
    std::cout << livable_average_mass(planets, 9) << std::endl;
    return 0;
}

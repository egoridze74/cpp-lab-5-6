//
// Created by Egor on 03.12.2023.
//

#include "Planet.h"
#include <cstring>
#include <iostream>


//Constructors, destructor
Planet::Planet() //default constructor
{
    name = "";
    x = y = z = mass = volume = 0.0;
    livable = false;
}

Planet::Planet(const Planet &other) //copy constructor
{
    x = other.x;
    y = other.y;
    z = other.z;
    mass = other.mass;
    volume = other.volume;
    name = new char[std::strlen(other.name)];
    std::strcpy(name, other.name);
}

Planet::Planet(char *name, double x, double y, double z, double mass, double volume, bool livable)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->mass = mass;
    this->volume = volume;
    this->name = new char[std::strlen(name)];
    std::strcpy(this->name, name);
}

Planet::~Planet() //destructor
{
    if (mass != 0.0) delete[] name;
    x = y = z = mass = volume = 0;
    livable = false;

}

Planet& Planet::operator=(const Planet &other)
{
    if (this != &other)
    {
        this->name = new char[std::strlen(other.name)];
        std::strcpy(this->name, other.name);
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
        this->mass = other.mass;
        this->volume = other.volume;
    }
    return *this;
}


//Sortings
void sort_by_density(Planet *planets, size_t n)
{
    for (size_t i = 0; i < n - 1; i++)
        for (size_t j = 0; j < n - i - 1; j++)
        {
            double dens1 = planets[j].get_density();
            double dens2 = planets[j + 1].get_density();
            if (dens1 > dens2)
            {
                std::swap(planets[j], planets[j + 1]);
            }
        }
}

int closer_than(double x, double y, double z, Planet *planets, size_t n, double distance)
{
    int k = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (planets[i].get_distance(x, y, z) < distance)
            ++k;
    }
    return k;
}

double livable_average_mass(Planet *planets, size_t n)
{
    double total_mass = 0;
    int k = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (planets[i].get_livable() == true)
        {
            ++k;
            total_mass += planets[i].get_mass();
        }
    }
    return total_mass / k;
}
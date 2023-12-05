//
// Created by Egor on 03.12.2023.
//
#include <cstring>
#include <cmath>
#include <iostream>
#ifndef CPP_LAB_5_6_PLANET_H
#define CPP_LAB_5_6_PLANET_H

class Planet {
private:
    char *name;
    double x, y, z;
    double mass;
    double volume;
    bool livable;
public:
    //Constructors, destructor
    Planet(); //default constructor

    Planet(const Planet &); //copy constructor

    Planet(char *name, double x, double y, double z, double mass, double volume, bool livable);

    ~Planet(); //destructor

    Planet& operator=(const Planet &other);

    //Getters, setters
    inline const char* get_name() const {
        return name;
    }

    inline double get_x() const {
        return x;
    }

    inline double get_y() const {
        return y;
    }

    inline double get_z() const {
        return z;
    }

    inline double get_mass() const {
        return mass;
    }

    inline double get_volume() const {
        return volume;
    }

    inline bool get_livable() const {
        return livable;
    }

    double get_distance(Planet &other) const {
        double dist = sqrt(pow(x - other.get_x(), 2) + pow(y - other.get_y(), 2) + pow(z - other.get_z(), 2));
        return dist;
    }

    double get_distance(double newX, double newY, double newZ) const {
        double dist = sqrt(pow(this->x - newX, 2) + pow(this->y - newY, 2) + pow(this->z - newZ, 2));
        return dist;
    }

    double get_density() const {
        double dens = mass / volume;
        return dens;
    }

    inline void set_name(char* newName) {
        this->name = new char[std::strlen(newName)];
        std::strcpy(this->name, newName);
    }

    void set_x(double newX) {
        this->x = newX;
    }

    void set_y(double newY) {
        this->y = newY;
    }

    void set_z(double newZ) {
        this->z = newZ;
    }

    void set_mass(double newMass) {
        this->mass = newMass;
    }

    void set_volume(double newVolume) {
        this->volume = newVolume;
    }

    void set_livable(bool newLivable) {
        this->livable = newLivable;
    }
};

//Sortings
void sort_by_density(Planet *planets, size_t n);
int closer_than(double x, double y, double z, Planet *planets, size_t n, double distance);
double livable_average_mass(Planet *planets, size_t n);

//Output
std::ostream & operator<<(std::ostream &o, const Planet &p);

#endif //CPP_LAB_5_6_PLANET_H

//
// Created by Egor on 03.12.2023.
//
#include <cstring>
#include <cmath>
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

    Planet(char *name, double x, double y, double z, double volume, double weight, bool livable);

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

    double get_distance(double x, double y, double z) const {
        double dist = sqrt(pow(this->x - x, 2) + pow(this->y - y, 2) + pow(this->z - z, 2));
        return dist;
    }

    double get_density() const {
        double dens = mass / volume;
        return dens;
    }

    inline void set_name(char* name) {
        this->name = new char[std::strlen(name)];
        std::strcpy(this->name, name);
    }

    void set_x(double x) {
        this->x = x;
    }

    void set_y(double y) {
        this->y = y;
    }

    void set_z(double z) {
        this->z = z;
    }

    void set_mass(double mass) {
        this->mass = mass;
    }

    void set_volume(double volume) {
        this->volume = volume;
    }

    void set_livable(bool livable) {
        this->livable = livable;
    }
};

//Sortings
void sort_by_density(Planet *planets, size_t n);
int closer_than(double x, double y, double z, Planet *planets, size_t n, double distance);
double livable_average_mass(Planet *planets, size_t n);

#endif //CPP_LAB_5_6_PLANET_H

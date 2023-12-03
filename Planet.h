//
// Created by Egor on 03.12.2023.
//

#ifndef Planet_h
#define Planet_h
#define MAX_LENGTH = 100


class Planet
{
private:
    char *name;
    double x, y, z;
    double weight;
    double volume;
    bool livable;
public:
    //Constructors, destructor
    Planet(); //default constructor

    Planet(const Planet&); //copy constructor

    Planet(char *name, double x, double y, double z, double volume, double weight, bool livable);

    ~Planet(); //destructor

    //Getters
    inline char* get_name() const;
    inline double get_x() const;
    inline double get_y() const;
    inline double get_z() const;
    inline double get_mass() const;
    inline double get_volume() const;
    inline bool get_livable() const;

    //
};


#endif //Planet_h

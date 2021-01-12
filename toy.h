#ifndef CLASE_TOY_H
#define CLASE_TOY_H
#include <iostream>
#include <string>
#include "Mos_Craciun.h"

using namespace std;

class toy{

    string nume, material;
    int age_limit;
public:
    toy();
    void set_new_toy( string newtoy, string newmaterial, int newagelimit );
    void get_the_toy();
    friend class child;
};

#endif //CLASE_TOY_H

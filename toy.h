#ifndef CLASE_TOY_H
#define CLASE_TOY_H
#include <iostream>
#include <string>

using namespace std;

class toy{

    string nume, material;
    int age_limit;
public:
    toy();
    void set_new_toy( string newtoy, string newmaterial, int newagelimit );
    friend class child;
};

#endif //CLASE_TOY_H

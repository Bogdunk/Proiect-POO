#ifndef CLASE_CHILD_H
#define CLASE_CHILD_H
#include "toy.h"
#include "birthday_gift.h"
#include "Mos_Craciun.h"
#include <iostream>
#include <string>

using namespace std;

class child : public toy{   ///mostenire
    string child_name;
    int age;
    bool a_fost_cuminte;
public:
    child();
    void set_new_child( string name, int ages, bool cuminte );
    void show_child_and_toy( toy& jucarie );
    int get_a_fost_cuminte();
    void get_name();
    birthday_gift cadou;
    Mos_Craciun primeste_de_Craciun_cadou;
    friend class toy;
};
#endif //CLASE_CHILD_H

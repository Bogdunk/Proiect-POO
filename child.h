#ifndef CLASE_CHILD_H
#define CLASE_CHILD_H
#include "toy.h"
#include "birthday_gift.h"
#include "sacul_lui_Mos_Craciun.h"
#include <iostream>
#include <string>

using namespace std;

class child{
    string child_name;
    int age;
public:
    child();
    void get_new_child( string name, int ages );
    //void show_new_toy();
    void show_child_and_toy( toy& jucarie );
    birthday_gift cadou;
    sacul_lui_Mos_Craciun primeste_de_Craciun_cadou;
    friend class toy;
};

#endif //CLASE_CHILD_H

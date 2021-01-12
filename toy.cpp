#include <iostream>
#include <string>
#include "toy.h"

toy::toy() {
    string nume = "jucarie";
    material = "material";
    age_limit = 0;
}

void toy::set_new_toy(string newtoy, string newmaterial, int newagelimit) {
    nume = newtoy;
    material = newmaterial;
    age_limit = newagelimit;
}

void toy::get_the_toy() {
    cout << "un/o" << nume << " de " << material << " pentru copii de peste " << age_limit << " ani.\n";
}

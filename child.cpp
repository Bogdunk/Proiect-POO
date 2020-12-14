#include "child.h"
#include <iostream>
#include <string>

child::child(){
    child_name = "copil";
    age = 0;
    a_fost_cuminte = 1;
}

void child::get_new_child(string name, int ages, bool cuminte) {
    child_name = name;
    age = ages;
    a_fost_cuminte = cuminte;
}

void child::show_child_and_toy( toy& jucarie ) {
    cout << child_name << " are o/un " << jucarie.nume << " din " << jucarie.material << " pentru copii de peste " << jucarie.age_limit << " ani.\n\n";
}

int child::get_a_fost_cuminte() {
   return a_fost_cuminte;
}

void child::get_name() {
    cout << child_name;
}


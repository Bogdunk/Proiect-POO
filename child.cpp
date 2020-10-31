#include "child.h"
#include <iostream>
#include <string>

child::child(){
    child_name = "copil";
    age = 0;
}

void child::get_new_child(string name, int ages) {
    child_name = name;
    age = ages;
}

void child::show_child_and_toy( toy& jucarie ) {
    cout << child_name << " are o/un " << jucarie.nume << " din " << jucarie.material << " pentru copii de peste " << jucarie.age_limit << " ani.\n\n";
}
#ifndef CLASE_BIRTHDAY_GIFT_H
#define CLASE_BIRTHDAY_GIFT_H
#include <iostream>
#include <string>

using namespace std;

class birthday_gift{
    string birthday_gift_name;
public:
    void new_gift( string gift_name ){
        birthday_gift_name = gift_name;
    }
    void show_the_gift(){
        cout << "Noua jucarie a copilului este o/un " << birthday_gift_name << "." << "\n";
    }
};
#endif //CLASE_BIRTHDAY_GIFT_H

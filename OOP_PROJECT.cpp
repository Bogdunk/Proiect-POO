#include "toy.h"
#include "child.h"
#include <iostream>

using namespace std;

int main(){

    child Bogdan;      ///declar un copil pt child
    toy dinosaur;       ///declar o noua jucarie

    Bogdan.get_new_child("Bogdan", 19);                                          ///Adaug datele unui copil
    dinosaur.set_new_toy("dinozaur","plus",3);                  ///Adaug o jucarie noua
    Bogdan.show_child_and_toy(dinosaur);                                                    ///Afisez jucaria copilului Bogdan
    cout << "****************************************\n";       ///delimitator

    Bogdan.cadou.new_gift("robot Transformers");    ///Aici utilizez compunerea claselor child si birthday_gift, evident copilul primeste o jucarie=)
    Bogdan.cadou.show_the_gift();               ///Aici se afiseaza noua jucarie a copilului Bogdan

    cout << "****************************************\n";       ///delimitator
    ///Ca si mai devreme am folosti compunere
    ///Pentru construirea sacului am folosit o stiva de string-uri
    Bogdan.primeste_de_Craciun_cadou.init();
    Bogdan.primeste_de_Craciun_cadou.pop();
    Bogdan.primeste_de_Craciun_cadou.push("ciocolata");
    Bogdan.primeste_de_Craciun_cadou.push("o carte");
    Bogdan.primeste_de_Craciun_cadou.push("bomboane");
    Bogdan.primeste_de_Craciun_cadou.pop();
    Bogdan.primeste_de_Craciun_cadou.push("hainute");
    Bogdan.primeste_de_Craciun_cadou.show();


    return 0;
}

///In acest proiect am folosit clasele toy, child, sacul_lui_Mos_craciun si birthday_gift
/// intre toy si child am realizat o relatie friend
/// am folosit fisierele .h pentru a-mi organiza spatiul de lucru
/// am folosit si compunerea claselor child-birthday_gift si child-sacul_lui_Mos_Craciun
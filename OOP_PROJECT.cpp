#include "toy.h"
#include "child.h"
#include <iostream>

using namespace std;

void delimitator(){
    cout << "****************************************\n";       ///delimitator
}

///aici am incercat sa aplic ideea ta cu copilul care a fost cuminte sau nu
int ai_fost_cuminte( child copil ){
    if( copil.get_a_fost_cuminte() ){
        copil.get_name();
        cout <<" a fost cuminte si va primi de la Mosu cadouri multe.\n";
    }
    else{
        copil.get_name();
        cout << " nu va primi de la Mosu cadouri pentru ca nu a fost cuminte\n";
    }
}

void copilul_primeste_o_noua_jucarie( child &copil, toy &juc ){

    string nume_jucarie, material_jucarie;
    int varsta;
    cout << "Ce jucarie iti doresti?\n";    cin >> nume_jucarie;
    cout << "Din ce material ai vrea sa fie?\n";    cin >> material_jucarie;
    cout << "Ce varsta minima ai vrea sa aiba?\n";  cin >> varsta;

    juc.set_new_toy(nume_jucarie, material_jucarie, varsta );
    copil.show_child_and_toy( juc );
}

int main(){

    child Bogdan, Catalin;
    toy dinozaur, soldat;

    ///aici e mostenirea intre toy si child
    Catalin.get_new_child("Catalin", 10, 1);
    copilul_primeste_o_noua_jucarie( Catalin, soldat );

    Bogdan.get_new_child("Bogdan", 5, 1);                                          ///Adaug datele unui copil
    dinozaur.set_new_toy("dinozaur", "plus", 3 );
    Bogdan.show_child_and_toy(dinozaur);                                                    ///Afisez jucaria copilului Bogdan

    delimitator();

    Bogdan.cadou.new_gift("robot Transformers");    ///Aici utilizez compunerea claselor child si birthday_gift, evident copilul primeste o jucarie=)
    Bogdan.cadou.show_the_gift();                           ///Aici se afiseaza noua jucarie a copilului Bogdan

    delimitator();

    if( ai_fost_cuminte( Bogdan ) ){
        Bogdan.primeste_de_Craciun_cadou.init();
        ///Bogdan.primeste_de_Craciun_cadou.pop();
        Bogdan.primeste_de_Craciun_cadou.push("ciocolata");
        Bogdan.primeste_de_Craciun_cadou.push("o carte");
        Bogdan.primeste_de_Craciun_cadou.push("bomboane");
        ///Bogdan.primeste_de_Craciun_cadou.pop();
        Bogdan.primeste_de_Craciun_cadou.push("hainute");
        Bogdan.primeste_de_Craciun_cadou.show();
    }
    else ;
    return 0;
}

///In acest proiect am folosit clasele toy, child, Mos_craciun si birthday_gift
/// intre toy si child am realizat o relatie friend
/// am folosit fisierele .h pentru a-mi organiza spatiul de lucru
/// am folosit si compunerea claselor child-birthday_gift si child-sacul_lui_Mos_Craciun

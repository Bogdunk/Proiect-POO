#include "toy.h"
#include "child.h"
#include <iostream>
#include <vector>

using namespace std;

///mostenire pt tema 2
class copilbun: public child{
    string dorinta;                                     ///in string memoreaza numele jucariei pe care si-o doreste
public:
    copilbun(){
        this->dorinta = "-";
    }
    void set_dorinta( string dor ){
        this->dorinta = dor;
    }
    void get_dorinta(){
        cout << dorinta;
    }
};

///aici am creat builderul
class CopilBunBuilder{
    copilbun copil;
public:
    CopilBunBuilder& dorinta( string dor ){
        copil.set_dorinta( dor );
        return *this;
    }
    CopilBunBuilder& copil_bun_nou( string nume, int ani ){
        copil.set_new_child(nume, ani, 1);
        return *this;
    }
    copilbun build(){
        return copil;
    }
};

/// si aici am facut o functie speciala pt a lucra cu buiderul
void builder_copil_bun( copilbun Mihai ){
    CopilBunBuilder c;
    Mihai = c.copil_bun_nou("Mihai",17).dorinta("playstation 4").build();
    Mihai.get_name();   cout << " isi doreste sa primeasca un/o ";   Mihai.get_dorinta();
}

void mostenire( copilbun Matei  ){

    Matei.get_name();    cout << " a fost cuminte si va primi o jucarie.\n";
    Matei.set_dorinta( "masinuta" );
    Matei.get_name();    cout << " isi doreste o ";  Matei.get_dorinta();    cout << ".\n";

    toy masinuta;
    masinuta.set_new_toy("masinuta", "plastic", 3 );

    Matei.show_child_and_toy(masinuta );
}

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

   /* child Bogdan, Catalin;
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
    else ;*/

   ///pana la <<mos3.show>> am facut copy con, atribuire = si citire cu operator
    //Mos_Craciun mos1;
    //mos1.push("papusa");
    //mos1.push("masinuta");
    ///cout << mos1;        aici imi da eroare si nu inteleg dc/// Mos_Craciun.h
    //mos1.show();
    //------------------------------------
    /*cout << "\n";
    mos2 = mos1;
    mos2.show();
    cout << "\nUrmeaza mos3\n1";
    Mos_Craciun mos3( mos1);
    mos3.show();*/

    ///aici si in functia mostenire lucrez cu mosteniri
    copilbun Matei;
    /*Matei.set_new_child( "Matei", 5, 1 );
    if( Matei.get_a_fost_cuminte() )
        mostenire( Matei );
    */

    builder_copil_bun(Matei);   ///apelez functia cu builderul( scris la linia 40)
    return 0;
}

///In acest proiect am folosit clasele toy, child, Mos_craciun si birthday_gift
/// intre toy si child am realizat o relatie friend
/// am folosit fisierele .h pentru a-mi organiza spatiul de lucru
/// am folosit si compunerea claselor child-birthday_gift si child-sacul_lui_Mos_Craciun

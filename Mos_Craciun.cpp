#include "Mos_Craciun.h"
#include <iostream>
#include <string>

/// stiu ca am in STL <stack>
/// am vrut sa implementez eu o stiva, ai mult pentru exercitiu

void Mos_Craciun::init(){
    vf = 0;
    cout << "Spuneti cate jucarii sa aduca Mos Craciun->\n";
    cin >> SIZE;
}

Mos_Craciun::Mos_Craciun(){
    vf = 0;
    SIZE = 0;
    init();
}

Mos_Craciun::Mos_Craciun( const Mos_Craciun &Mos ) {
    SIZE = Mos.SIZE;
    vf = Mos.vf;
}

void Mos_Craciun::push( string str ) {
    if(vf == SIZE ) {
        cout << "\nSacul lui Mosu este plin.\n";
    }
    else{
        stck.push_back(str);
        vf++;
    }
}

void Mos_Craciun::pop()
{
    if(vf==0) {
        cout << "Sacul este gol. Copilul are nevoie de jucarii.\n";
    }
    else{
        vf--;
        stck.pop_back();
    }
}

void Mos_Craciun::show() {

    if( vf == 0 )
        cout << "Mosu nu are nici o jucarie in sac!\n";
    else{
        cout << "Mos Craciun aduce daruri la fetite si baieti: ";
        if ( vf > 0 ){
            int contor = vf - 1;
            while ( contor >= 0 ){
                cout << stck[ contor ] << " ";
                contor--;
            }
        }
        cout <<"\n";
    }
}

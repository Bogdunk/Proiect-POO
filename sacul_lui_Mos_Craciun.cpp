#include "sacul_lui_Mos_Craciun.h"
#include <iostream>
#include <string>
#define SIZE 3

void sacul_lui_Mos_Craciun::init(){
    vf = 0;
}

void sacul_lui_Mos_Craciun::push( string str ) {
    if(vf == SIZE ) {
        cout << "\nSacul este plin. Copilul a primit pre multe jucarii!\n";
    }
    else{
        stck.push_back(str);
        vf++;
    }
}

void sacul_lui_Mos_Craciun::pop()
{
    if(vf==0) {
        cout << "Sacul este gol. Copilul are nevoie de jucarii.\n";
    }
    else{
        vf--;
        stck.pop_back();
    }
}

void sacul_lui_Mos_Craciun::show() {

    if( vf == 0 )
        cout << "Sacul nu are niciun cadou!!\n";
    else{
        cout << "Sacul lui Mos Craciun contine: ";
        if ( vf > 0 ){
            int contor = vf - 1;
            while ( contor >= 0 ){
                cout << stck[ contor ] << " ";
                contor--;
            }
    }

    }
}
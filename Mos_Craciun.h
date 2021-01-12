#ifndef CLASE_MOS_CRACIUN_H
#define CLASE_MOS_CRACIUN_H
#include <iostream>
#include <string>
#include <vector>
#include "toy.h"

using namespace std;

class Mos_Craciun{
    vector < string > stck;
    int vf;
    int SIZE;
public:
    Mos_Craciun();
    void init();
    Mos_Craciun( const Mos_Craciun& );
    void push( string str );
    void pop();
    void show();
    /*friend ostream& oprerator<<( ostream& out , const Mos_Craciun& mos ){

        if ( mos.vf == 0 )
            out << "Sacul este gol!\n";
        else{
            if( mos.vf > 0 ){
                int contor = mos.vf - 1;
                while (contor >= 0 ){
                    out << mos.stck[ contor ] << ", ";
                    contor--;
                }
            }
            out << "\n";
        }
        return out;
    }*/
};
#endif //CLASE_SACUL_LUI_MOS_CRACIUN_H

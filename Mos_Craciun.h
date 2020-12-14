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
    void init();
    void push(string str);
    void pop();
    void show();
};
#endif //CLASE_SACUL_LUI_MOS_CRACIUN_H

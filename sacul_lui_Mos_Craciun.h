#ifndef CLASE_SACUL_LUI_MOS_CRACIUN_H
#define CLASE_SACUL_LUI_MOS_CRACIUN_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class sacul_lui_Mos_Craciun {
    vector < string > stck;
    int vf;
public:
    void init();
    void push(string str);
    void pop();
    void show();
};

#endif //CLASE_SACUL_LUI_MOS_CRACIUN_H

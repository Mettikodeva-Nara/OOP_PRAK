#include <iostream>
#include "rumus.h"
using namespace std;

int main(){
    double jari_jari = 2;
    double jarak_pusat_massa = 2;
    PeriodeBandul p(jari_jari, jarak_pusat_massa);
    cout<<" perioda bandul : "<< p.getResult() << endl;
    return 0;
}
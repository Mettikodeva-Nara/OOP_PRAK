#pragma once
#include <iostream>

using namespace std;

#define RADIATOR    0
#define OLI_MESIN   1
#define OLI_GEARBOX 2
#define MINYAK_REM  3
#define PASANG_AKI  4
#define ABS         5
#define PENDINGIN   6

const string nama_keterangan3[7] = {"radiator",\
"oli mesin", "oli gearbox", "minyak rem",\
"pasang aki", "abs", "pendingin"};

class QCmesin{
    private:
        int qc[7]= {-1,-1,-1,-1,-1,-1,-1};
    public:
        void setQC(int,int);
        float getnilai();
        void menu();
        void showInfo();
};
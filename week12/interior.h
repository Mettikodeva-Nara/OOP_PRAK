#pragma once
#include <iostream>
#include "inputException.h"
#define JOK_DEPAN       0
#define JOK_BELAKANG    1
#define SABUK_PENGAMAN  2
#define KACA_FILM       3
#define HEAD_UNIT       4   
#define DASKBOARD       5
#define KARPET_BAWAH    6

const string nama_keterangan[7] = {"jok depan",\
"jok belakang", "sabuk pengaman", "kaca film",\
"head unit", "daskboard", "karpet bawah"};

class QCinterior{
    private:
        int qc[7]= {-1,-1,-1,-1,-1,-1,-1};
    public:
        void setQC(int,int);
        float getnilai();
        void menu();
        void showInfo();
};
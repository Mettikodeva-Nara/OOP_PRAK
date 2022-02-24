#pragma once
#include <iostream>
#include "inputException.h"
#define LAMPU_UTAMA          0
#define LAMPU_SEIN           1
#define LAMPU_BELAKANG       2
#define PINTU_DEPAN          3
#define PINTU_BELAKANG       4   
#define RODA                 5
#define KAP_DEPAN            6

const string nama_keterangan2[7] = {"lampu utama",\
"lampu sein", "lampu belakang", "pintu depan",\
"pintu belakang", "roda", "kap depan"};

class QCeksterior{
    private:
        int qc[7]= {-1,-1,-1,-1,-1,-1,-1};
    public:
        void setQC(int,int);
        float getnilai();
        void menu();
        void showInfo();
};


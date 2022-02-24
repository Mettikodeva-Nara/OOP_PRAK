#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <string>
#include <cstdlib>
#include "inputException.h"
#include "interior.h"
#include "eksterior.h"
#include "mesin.h"

using namespace std;

typedef struct QCk QCkendaraan;
struct QCk
{
    string id;
    QCinterior* interior;
    QCeksterior* eksterior;
    QCmesin* mesin;
};

class QC{
private:
    vector<QCkendaraan> kendaraan;
    int checkId(string id);

public:
    QC();
    QC(string);
    void cetakKendaraan();
    void tambahKendaraan();
    void hapusKendaraan();
    QCkendaraan *setQC();
    void ubahQCKendaraan(string id);
    void menu();
    void getHasilQC();
};
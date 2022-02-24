#include <iostream>
#include "inputException.h"
#include "eksterior.h"
#include "interior.h"
#include "mesin.h"
#ifndef INPUTEXCEPTION_H
#define INPUTEXCEPTION_H
#endif
struct QCk
{
    QCinterior *interior =  new QCinterior();
    QCeksterior *eksterior = new QCeksterior();
    QCmesin *mesin = new QCmesin();
};

void getHasilQC(QCk*);
int menu();
void destroyQC(QCk *);
using namespace std;
int main(){
    QCk QC;

    while (true){
        int pilihan = menu();
        switch (pilihan){
        case 1:
            QC.interior->menu();
            break;
        case 2:
            QC.eksterior->menu();
            break;
        case 3:
            QC.mesin->menu();
            break;
        case 4:
            getHasilQC(&QC);
            break;
        case 5:
            cout << "exiting.."<<endl;
            destroyQC(&QC);
            return 0;
        default:
            break;
        }
        system("cls");
    }
}

void destroyQC(QCk* QC){
    delete QC->interior;
    delete QC->eksterior;
    delete QC->mesin;
}

void getHasilQC(QCk *data){
    float hasil = 0;
    hasil += data->interior->getnilai();
    hasil += data->eksterior->getnilai();
    hasil += data->mesin->getnilai();
    hasil /= 3;
    if(hasil < 98){
        cout << "Hasil QC : "<< hasil <<endl<<"tidak layak untuk di jual" << endl;
    }
    else{
        cout << "Hasil QC : " << hasil << endl << "layak untuk di jual" << endl;
    }
    data->interior->showInfo();
    data->eksterior->showInfo();
    data->mesin->showInfo();
}

int menu()
{
    cout << "=== menu QC ===" << endl;
    cout << " 1. menu QC interior" << endl;
    cout << " 2. menu QC eksterior" << endl;
    cout << " 3. menu QC mesin" << endl;
    cout << " 4. get hasil QC" << endl;
    cout << " 5. Keluar" << endl;
    cout << " pilih menu diatas : ";
    return inputException<int>(1,5);
}
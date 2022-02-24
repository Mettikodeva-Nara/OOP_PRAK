#pragma once
#include <iostream>
#include "QC.h"

using namespace std;

QC::QC()
{
    
}

QCk* QC::setQC(){
    QCk* kendaraan =  new QCk;
    cout << "=== QC kendaraan ===" << endl;
    cout << " masukkan id kendaraan : ";
    getline(cin,kendaraan->id);
    kendaraan->interior = new QCinterior();
    kendaraan->eksterior = new QCeksterior();
    kendaraan->mesin = new QCmesin();
    return kendaraan;
}

void QC::menu(){
    string id;
    cout << "=== menu QC ===" << endl;
    cout << " masukkan id kendaraan" << endl;
    getline(cin, id);
    if(checkId(id) == -1){
        cout << " id kendaraan tidak ditemukan" << endl;
        cout << " tambah kendaraan baru 1. yes, 2 no: ";
        int pilihan = inputException<int>(1,2);
        if(pilihan == 1){
            tambahKendaraan();
            
        }
        else if(pilihan ==2){
            cout << ""<<endl;
        }
    }
    else{
        cout << " id kendaraan ditemukan" << endl;
        cout << " 1. cetak hasil QC kendaraan" << endl;
        cout << " 2. ubah hasil QC kendaraan" << endl;
        cout << " pilih : ";
        int pilihan = inputException<int>(1,2);
        if(pilihan == 1){
            cetakKendaraan();
        }
        else if(pilihan == 2){
            tambahKendaraan();
        }
        else if(pilihan == 3){
            hapusKendaraan();
        }
        else if(pilihan == 4){
            getHasilQC();
        }
    }

    
}

int QC::checkId(string id){
    for(int i=0;i<kendaraan.size();i++){
        if(kendaraan[i].id.compare(id)==0){
            return i;
        }
    }
    return -1;
}

void tambahKendaraan(string id){
    QCk* kendaraan =  new QCk();
    cout << "=== tambah kendaraan ===" << endl;
    kendaraan->id = id;
    kendaraan->interior = new QCinterior();
    kendaraan->eksterior = new QCeksterior();
    kendaraan->mesin = new QCmesin();
}

int main(){
    QC qc;
    while (true)
    {
        qc.menu();
    }
    
    return 0;
}

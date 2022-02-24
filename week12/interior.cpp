#include "interior.h"
using namespace std;
void QCinterior::setQC(int keterangan, int nilai)
{
    switch (keterangan)
    {
    case JOK_DEPAN:
        this->qc[JOK_DEPAN] = nilai;
        break;
    case JOK_BELAKANG:
        this->qc[JOK_BELAKANG] = nilai;
        break;
    case SABUK_PENGAMAN:
        this->qc[SABUK_PENGAMAN] = nilai;
        break;
    case KACA_FILM:
        this->qc[KACA_FILM] = nilai;
        break;
    case HEAD_UNIT:
        this->qc[HEAD_UNIT] = nilai;
        break;
    case DASKBOARD:
        this->qc[DASKBOARD] = nilai;
        break;
    case KARPET_BAWAH:
        this->qc[KARPET_BAWAH] = nilai;
        break;  

    default:
        break;
    }
}

float QCinterior::getnilai()
{
    float total = 0;
    for (int i = 0; i < 7; i++)
    {
        if(this->qc[i] == -1)
        {
            total += 0;
            continue;
        }
        total += this->qc[i];
    }
    return total / 7;
}

void QCinterior::menu()
{
    int pilihan,nilai;
    while(true){
        cout << "||==== Menu QC interior ====||" << endl;
        cout << " 1. Jok Depan" << endl;
        cout << " 2. Jok Belakang" << endl;
        cout << " 3. Sabuk Pengaman" << endl;
        cout << " 4. Kaca Film" << endl;
        cout << " 5. Head Unit" << endl;
        cout << " 6. Daskboard" << endl;
        cout << " 7. Karpet Bawah" << endl;
        cout << " 8. Kembali ke menu utama" << endl;
        cout << " Pilih layanan diatas : ";
        pilihan = inputException<int>(1,8);
        if (pilihan == 8)
        {
            break;
        }
        cout << " Masukkan nilai : ";
        nilai = inputException<int>(0,100);
        this->setQC(pilihan-1,nilai);
        system("cls");
    }
}

void QCinterior::showInfo(){
    for ( int i =0 ; i <7 ; i++){
        if(this->qc[i] == -1){
            cout << "QC interior " << i+1 << " "<< nama_keterangan[i] << " : " << "belum dilakukan" << endl;
        }
    }
}
#include "eksterior.h"
using namespace std;
void QCeksterior::setQC(int keterangan, int nilai)
{
    switch (keterangan)
    {
    case LAMPU_UTAMA:
        this->qc[LAMPU_UTAMA] = nilai;
        break;
    case LAMPU_SEIN:
        this->qc[LAMPU_SEIN] = nilai;
        break;
    case LAMPU_BELAKANG:
        this->qc[LAMPU_BELAKANG] = nilai;
        break;
    case PINTU_DEPAN:
        this->qc[PINTU_DEPAN] = nilai;
        break;
    case PINTU_BELAKANG:
        this->qc[PINTU_BELAKANG] = nilai;
        break;
    case RODA:
        this->qc[RODA] = nilai;
        break;
    case KAP_DEPAN:
        this->qc[KAP_DEPAN] = nilai;
        break;  

    default:
        break;
    }
}

float QCeksterior::getnilai()
{
    float total = 0;
    for (int i = 0; i < 7; i++)
    {
        total += this->qc[i];
    }
    return total / 7;
}

void QCeksterior::menu()
{
    int pilihan,nilai;
    while(true){
        cout << "||==== Menu QC eksterior ====||" << endl;
        cout << " 1. Lampu Utama" << endl;
        cout << " 2. Lampu Sein" << endl;
        cout << " 3. Lampu Belakang" << endl;
        cout << " 4. Pintu Depan" << endl;
        cout << " 5. Pintu Belakang" << endl;
        cout << " 6. Roda" << endl;
        cout << " 7. Kap Depan" << endl;
        cout << " 8. Kembali ke menu utama" << endl;
        cout << " Pilih layanan diatas : ";
        pilihan = inputException<int>(1,8);
        if (pilihan == 8)
        {
            break;
        }
        cout << " Nilai QC : ";
        nilai = inputException<int>(0,100);
        setQC(pilihan-1,nilai);
        system("cls");
    }
}

void QCeksterior::showInfo(){
    for ( int i =0 ; i <7 ; i++){
        if(this->qc[i] == -1){
            cout << "QC eksterior " << i+1 << " "<< nama_keterangan2[i] << " : " << "belum dilakukan" << endl;
        }
    }
        cout << endl;
}
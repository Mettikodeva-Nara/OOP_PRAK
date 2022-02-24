#include "mesin.h"
#include "inputException.h"
using namespace std;
void QCmesin::setQC(int keterangan, int nilai)
{
    switch (keterangan)
    {
    case RADIATOR:
        this->qc[RADIATOR] = nilai;
        break;
    case OLI_MESIN:
        this->qc[OLI_MESIN] = nilai;
        break;
    case OLI_GEARBOX:
        this->qc[OLI_GEARBOX] = nilai;
        break;
    case MINYAK_REM:
        this->qc[MINYAK_REM] = nilai;
        break;
    case PASANG_AKI:
        this->qc[PASANG_AKI] = nilai;
        break;
    case ABS:
        this->qc[ABS] = nilai;
        break;
    case PENDINGIN:
        this->qc[PENDINGIN] = nilai;
        break;  

    default:
        break;
    }
}

float QCmesin::getnilai()
{
    float total = 0;
    for (int i = 0; i < 7; i++)
    {
        total += this->qc[i];
    }
    return total / 7;
}

void QCmesin::menu()
{
    int pilihan,nilai;
    while (true){

        cout << "||==== Menu QC Mesin ====||" << endl;
        cout << " 1. Radiator" << endl;
        cout << " 2. Oli Mesin" << endl;
        cout << " 3. Oli Gearbox" << endl;
        cout << " 4. Minyak Rem" << endl;
        cout << " 5. Pemasangan Aki" << endl;
        cout << " 6. ABS" << endl;
        cout << " 7. Sistem Pendingin" << endl;
        cout << " 8. Kembali ke menu utama" << endl;
        cout << " Pilih layanan diatas : ";
        pilihan = inputException<int>(1,8);
        if (pilihan == 8){
            break;
        }
        cout << " Masukkan nilai : ";
        nilai = inputException<int>(0,100);
        this->setQC(pilihan-1,nilai);
        system("cls");
    }
}

void QCmesin::showInfo(){
    for ( int i =0 ; i <7 ; i++){
        if(this->qc[i] == -1){
            cout << "QC mesin " << i+1 << " "<< nama_keterangan3[i] << " : " << "belum dilakukan" << endl;
        }
    }
    cout << endl;
}
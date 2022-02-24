#include <iostream>
#include <limits.h>
#include<cmath>
using namespace std;

class Gaji{
    private:
    long gajiTeknisi = 1800000;
    long gajiRnd = 2300000;
    long kepalaDivisi = 2700000;
    long gajiLembur = 20000;
    long gajiDinas = 400000;
    long gajiPresensi = 50000;
    string jabatan;
    string nama;
    int dinasLuar;
    int presensi;
    int lembur;

    public:
    Gaji(string nama, string jabatan, 
        int dinas, int presensi, int lembur){
        this->nama = nama;
        this->jabatan = jabatan;
        this->presensi = presensi;
        this->dinasLuar = dinas;
        this->lembur = lembur;
    }
    Gaji(string nama, string jabatan,
         int presensi, int lembur)
    {
        this->nama = nama;
        this->jabatan = jabatan;
        this->presensi = presensi;
        this->dinasLuar = dinas;
        this->lembur = lembur;
    }

    string get_nama(){
        return nama;
    }

    string get_jabatan()
    {
        return jabatan;
    }

    double totalGaji(){
        if (!(jabatan.compare("teknisi"))){
            return (gajiTeknisi+ (dinasLuar*gajiDinas)+
                    (presensi*gajiPresensi)+(lembur*gajiLembur));
        }
        else if (!(jabatan.compare("rnd"))){
            return (gajiRnd + (dinasLuar * gajiDinas) + 
                    (presensi * gajiPresensi)+(lembur*gajiLembur));
        }
        else if(!(jabatan.compare("kepala"))){
            return (kepalaDivisi + (dinasLuar * gajiDinas) + 
                    (presensi * gajiPresensi)+(lembur*gajiLembur));
        }
    }
};

int main(){
    cout.precision(0);
    cout << fixed << pow(2, 31);
    string nama;
    string jabatan;
    int dinas, presensi, lembur;
    cout<<endl;
    cout<< "masukkan nama : ";
    getline(cin, nama);
    cout << "masukkan jabatan : ";
    getline(cin, jabatan);
    cout << "jumlah dinas : ";
    cin>>dinas;
    cout << "jumlah presensi : ";
    cin>>presensi;
    cout << "jumlah lembur : ";
    cin >> lembur;
    // nama, jabatan, dinas, presensi, lembur
    if(!jabatan.compare(kepala)){
        Gaji orang1(nama, jabatan, dinas, presensi, lembur); 
    }
    else{
        Gaji orang1(nama, jabatan, presensi, lembur)
    }
    cout <<"nama : " << orang1.get_nama() << endl;
    cout <<"jabatan : " << orang1.get_jabatan() << endl;
    cout << "total gaji : " << orang1.totalGaji();   
}
#include <iostream>
using namespace std;

class Gaji
{
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
    Gaji(string nama, string jabatan, int dinas, int presensi, int lembur)
    {
        this->nama = nama;
        this->jabatan = jabatan;
        this->presensi = presensi;
        this->dinasLuar = dinas;
        this->lembur = lembur;
    }

    string get_nama()
    {
        return nama;
    }

    string get_jabatan()
    {
        return jabatan;
    }

    double totalGaji()
    {
        if (!(jabatan.compare("teknisi")))
        {
            return (gajiTeknisi + (dinasLuar * gajiDinas) + (presensi * gajiPresensi) + (lembur * gajiLembur));
        }
        else if (!(jabatan.compare("rnd")))
        {
            return (gajiRnd + (dinasLuar * gajiDinas) + (presensi * gajiPresensi) + (lembur * gajiLembur));
        }
        else if (!(jabatan.compare("kepala")))
        {
            return (kepalaDivisi + (dinasLuar * gajiDinas) + (presensi * gajiPresensi) + (lembur * gajiLembur));
        }
    }
};

Gaji karyawan_baru(){
    string nama;
    string jabatan;
    int dinas, presensi, lembur;
    getline(cin, nama);
    getline(cin, jabatan);
    cin >> dinas;
    cin >> presensi;
    cin >> lembur;
    Gaji *karyawan = new Gaji(nama, jabatan, dinas, presensi, lembur);
    return *karyawan;
}

int main(){
    
}
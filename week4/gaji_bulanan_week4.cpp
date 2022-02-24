#include <iostream>
#include <limits.h>
#include<cmath>
#include <string>
using namespace std;

class Gaji{
    private:
    long gajiTeknisi = 1800000;
    long gajiRnd = 2300000;
    long kepalaDivisi = 2700000;
    long gajiLembur = 20000;
    long gajiDinas = 400000;
    long gajiPresensi = 50000;
    string m_nama;
    string m_jabatan;
    int m_dinasLuar;
    int m_presensi;
    int m_lembur;

    public:
    Gaji(string t_nama){
        m_nama = t_nama;
    }


    string getNama(){
        return m_nama;
    }

    string getJabatan()
    {
        return m_jabatan;
    }
    void inputData(string t_jabatan, int t_presensi, int t_lembur, int t_dinasLuar)
    {
        m_jabatan = t_jabatan;
        m_dinasLuar = t_dinasLuar;
        m_presensi = t_presensi;
        m_lembur = t_lembur;
    }

    void inputData(string t_jabatan, int t_presensi, int t_lembur){
        m_jabatan = t_jabatan;
        m_presensi = t_presensi;
        m_lembur = t_lembur;
    }

    void showInfo(){
        cout << " nara : " << m_nama <<endl;
        cout << " jabatan : " << m_jabatan <<endl;
        cout << " jumlah presensi : " << m_presensi <<endl;
        cout << " jumlah lembur : " << m_lembur <<endl;
        if(!m_jabatan.compare("kepala")){
            cout << " jumlah dinas : " << m_dinasLuar <<endl;
        }
        cout << " total gaji : " << totalGaji() << endl;
    }

    double totalGaji(){
        if (!(m_jabatan.compare("teknisi"))){
            return (gajiTeknisi+ m_presensi*gajiPresensi + m_lembur*gajiLembur);
        }
        else if (!(m_jabatan.compare("rnd"))){
            return (gajiRnd + m_presensi * gajiPresensi + m_lembur*gajiLembur);
        }
        else if(!(m_jabatan.compare("kepala"))){
            return (kepalaDivisi + (m_dinasLuar * gajiDinas) + 
                    (m_presensi * gajiPresensi)+(m_lembur*gajiLembur));
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
    Gaji orang1(nama);
    cout << "masukkan jabatan : ";
    getline(cin, jabatan);
    cout << "jumlah presensi : ";
    cin>>presensi;
    cout << "jumlah lembur : ";
    cin >> lembur;
    if(!(jabatan.compare("kepala"))){
        cout << "jumlah dinas : ";
        cin>>dinas;
        orang1.inputData(jabatan, presensi, lembur, dinas);
    }
    else{
        orang1.inputData(jabatan, presensi, lembur);
    }
    orang1.showInfo();
}
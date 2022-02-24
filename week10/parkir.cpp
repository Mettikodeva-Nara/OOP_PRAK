#include "parkir.h"
#include <string>

ParkirApp::ParkirApp(string nama) {
    m_nama = nama;
    cout << "======================="<<endl;
    cout << "Selamat Datang di Parkir "<< m_nama <<endl;
}

void ParkirApp::masuk() {
    kendaraan_t *kendaraan = new kendaraan_t;
    cout << "Masukkan Plat Nomor Kendaraan : ";
    getline(cin, kendaraan->plat);
    cout << "masukkan jam masuk : ";
    getline(cin, kendaraan->jam_masuk);
    m_parkir.push_back(*kendaraan);
}

string ParkirApp::lower(string text) {
    for(int i = 0; i < text.length(); i++)
        text[i] = tolower(text[i]);
    return text;
}

void ParkirApp::keluar() {
    string plat, jam_keluar;

    cout << "Masukkan Plat Nomor Kendaraan : ";
    getline(cin, plat);
    cout << "masukkan jam keluar : ";
    getline(cin, jam_keluar);
    for(int i = 0; i < m_parkir.size(); i++) {
        if(lower(m_parkir[i].plat).compare(lower(plat)) == 0) {
            m_parkir[i].jam_keluar = jam_keluar;
            cout << "======================="<<endl;
            cout << "Kendaraan dengan plat nomor " << plat << " telah keluar" << endl;
            cout << "======================="<<endl;
            m_saved.push_back(m_parkir[i]);
            m_parkir.erase(m_parkir.begin() + i);
            break;
        }
    }
}

void ParkirApp::printParkir(){
    cout << "======================="<<endl;
    cout << "Data Parkir "<< m_nama <<endl;
    cout << "======================="<<endl;
    for(int i = 0; i < m_parkir.size(); i++) {
        cout << "Plat Nomor : " << m_parkir[i].plat << endl;
        cout << "Jam Masuk : " << m_parkir[i].jam_masuk << endl;
        cout << "Jam Keluar : " << m_parkir[i].jam_keluar << endl;
        cout << "======================="<<endl;
    }
}
    
int ParkirApp::strJam2int(string jam_masuk, string jam_keluar){
    int jam_masuk_int = stoi(jam_masuk.substr(0,2));
    int jam_keluar_int = stoi(jam_keluar.substr(0,2));
    int menit_masuk_int = stoi(jam_masuk.substr(3,2));
    int menit_keluar_int = stoi(jam_keluar.substr(3, 2));
    int jam_parkir = jam_keluar_int - jam_masuk_int;
    int d_menit = menit_keluar_int - menit_masuk_int;
    if(d_menit < 0) {
        jam_parkir--;
        d_menit = 60 + d_menit;
    }
    if (jam_parkir < 0) {
        jam_parkir = 24 + jam_parkir;
    }
    if (jam_parkir==0 && d_menit==0) {
        jam_parkir = 24;
    }
    else if (jam_parkir==0) {
        jam_parkir = 1;
    }
    
    return jam_parkir;
}

long ParkirApp::getPendapatan() {
    long pendapatan = 0;
    for(int i = 0; i < m_saved.size(); i++) {
        pendapatan += strJam2int(m_saved[i].jam_masuk,m_saved[i].jam_keluar)*500;
    }
    return pendapatan;
}
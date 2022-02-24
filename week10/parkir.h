#pragma once
#include <iostream>
#include <string>
#include <vector>
// #include <ctime>

using namespace std;
#define MAX_PARKIR 100
#define SAVED_PARKIR 500

typedef struct kendaraan{
    string plat;
    string jam_masuk;
    string jam_keluar;
}kendaraan_t;

class ParkirApp{
    private:
        string m_nama;
        vector<kendaraan_t> m_parkir;
        vector<kendaraan_t> m_saved;
        int strJam2int(string jam_masuk, string jam_keluar);
        string lower(string text);

    public:
        ParkirApp(string nama);
        ~ParkirApp();
        void menu();
        void masuk();
        void keluar();
        long getPendapatan();
        int getSisaParkir();
        void printParkir();
};
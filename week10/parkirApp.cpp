#include <iostream>
#include "parkir.h"

using namespace std;
void menu();

int main(){
    ParkirApp *parkir =  new ParkirApp("Nara");
    long pendapatan;
    while (true){
        menu();
        int pilihan;
        cout << "Masukkan pilihan anda: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan){
        case 1:
            parkir->masuk();
            break;
        case 2:
            parkir->keluar();
            break;
        case 3:
            pendapatan = parkir->getPendapatan();
            cout << "Pendapatan parkir: " << pendapatan << endl;
            break;
        case 4:
            parkir->printParkir();
            break;
        case 5:
            cout<< "exiting program ..."<< endl; 
            return 0;
        default:
            break;
        }
    }
    return 0;
}

void menu(){
    cout << "*******************************************" << endl;
    cout << "1. Masuk kendaraan" << endl;
    cout << "2. Keluar kendaraan" << endl;
    cout << "3. total pendapatan" << endl;
    cout << "4. Lihat Kendaraan" << endl;
    cout << "5. keluar" << endl;
}
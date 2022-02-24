#include<iostream>

using namespace std;

class kalkulator{
    private:
    long int angka1 = 0;
    long int angka2 = 0;
    float jumlah;
    int pilihanoperasi;

    public:
    void menupilihan(){
        cout<<"\n=== KALKULATOR BY.Rayhan ===";
        cout<<"\n1. (+) penjumlahan ";
        cout<<"\n2. (-) Pengurangan ";
        cout<<"\n3. (x) perkalian ";
        cout<<"\n4. (x/x) pembagian ";
        cout<<"\nMasukkan operasi matematika yg anda inginkan : ";
        cin>>pilihanoperasi;
        switch (pilihanoperasi)
        {
        case 1 :
            cout<<"Masukkan angka pertama : ";
            cin>>angka1;
            cout<<"Masukkan angka kedua : ";
            cin>>angka2;
            jumlah = angka1+angka2;
            cout<<" Hasil dari perhitungan anda adalah : "<<jumlah;
            break;
        case 2 :
            cout<<"Masukkan angka pertama : ";
            cin>>angka1;
            cout<<"Masukkan angka kedua : ";
            cin>>angka2;
            jumlah = angka1-angka2;
            cout<<"Hasil dari pengurangan adalah : "<<jumlah;
            break;
        case 3 :
            cout<<"masukkan angka pertama : ";
            cin>>angka1;
            cout<<"masukkan angka kedua : ";
            cin>>angka2;
            jumlah = angka1*angka2;
            cout<<"Hasil dari perkalian adalah : ";
            break;
        
        default:
            cout<<"operasi yang anda pilih tidak ada";
            break;
        }
    }
};

int main(){
    kalkulator orang1;
    orang1.menupilihan();

    return 0;
}
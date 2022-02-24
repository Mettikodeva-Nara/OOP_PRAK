#include <iostream>
#include <sstream>
using namespace std;

string to_string_with_precision(const float value, const int n = 2){
    std::ostringstream out;
    out.precision(n);
    out << fixed << value;
    return out.str();
}

class mhs{
    private:
    string nama;
    string nim;
    string prodi;
    float nilai = -1;

    public:
    mhs(string nama, string nim, string prodi){
        this->nama = nama;
        this->nim = nim;
        this->prodi = prodi;
        int pilihan;
        while(true){
            system("cls");
            menu();
            cin >> pilihan;
            switch (pilihan){
            case 1:
                lihat_nilai();
                break;
            case 2:
                record_nilai();
                break;
            case 3:
                ubah_nilai();
                break;
            default:
                cout<<"pilihan yang anda masukkan salah\n";
                break;
            }
            system("pause");

        }
    }
    void menu(){
        cout<<" === record data mhs === "<<endl;
        cout << "1. lihat nilai" << endl;
        cout << "2. record nilai" << endl;
        cout << "3. ubah nilai" << endl;
    }
    void record_nilai(){
        if(nilai == -1){
            cout<<"masukkan nilai : ";
            cin>>nilai; 
        }
        else{
            cout<<"nilai telah dimasukan \n\
gunakan ubah nilai untuk merubah nilai"<<endl;
        }
    }

    void lihat_nilai(){
        cout<<" nama : "<< nama<<endl;
        cout <<" nim : "<<nim<<endl;
        cout << " prodi : " <<prodi<< endl;
        cout << " nilai : " 
        << ((nilai >-1)? to_string_with_precision(nilai):"belum ada nilai") 
        << endl;
    }

    void ubah_nilai(){
        cout << "nilai awal : "<< to_string(nilai)<<endl;
        cout << "masukkan nilai baru : ";
        cin >> nilai;
    }
};

int main(){
    mhs mahasiswa1("Nara Atthama","162012233034","TRKB");
}
#include <iostream>
using namespace std;

class fashion{
    protected:
    int tahun, jumlah, harga;
    public:
    void setTahun(int tahun){
        this->tahun = tahun;
    }
    int getTahun(){
        return tahun;
    }
    void setJumlah(int jumlah){
        this->jumlah = jumlah;
    }
    int getJumlah(){
        return jumlah;
    }
    void setHarga(int harga){
        this->harga = harga;
    }
    int getHarga(){
        return harga;
    }
};

class sepatu : public fashion{
    string merk;
    float ukuran;
    public:
    void setMerk(string merk){
        this->merk = merk;
    }
    string getMerk(){
        return merk;
    }
    void setUkuran(float ukuran){
        this->ukuran = ukuran;
    }
    float getUkuran(){
        return ukuran;
    }
};
class pakaian : public fashion{
    string gender, model, warna;
    public:
    void setGen(string gender){
        this->gender = gender;
    }
    string getGen(){
        return gender;
    }
    void setModel(string model){
        this->model = model;
    }
    string getModel(){
        return model;
    }
    void setWarna(string warna){
        this->warna = warna;
    }
    string getWarna(){
        return warna;
    }
};
class aksesoris : public fashion{
    string jenis, bahan;
    public:
    void setJenis(string jenis){
        this->jenis = jenis;
    }
    string getJenis(){
        return jenis;
    }
    void setBahan(string bahan){
        this->bahan = bahan;
    }
    string getBahan(){
        return bahan;
    }
};
int main(){
    sepatu sepatu[2];
    sepatu[0].setTahun(2022);
    sepatu[0].setJumlah(10);
    sepatu[0].setHarga(1400000);
    sepatu[0].setMerk("Nike");
    sepatu[0].setUkuran(38);
    sepatu[1].setTahun(2017);
    sepatu[1].setJumlah(8);
    sepatu[1].setHarga(3000000);
    sepatu[1].setMerk("Adidas");
    sepatu[1].setUkuran(42);
    
    pakaian pakaian[4];
    pakaian[0].setTahun(2020);
    pakaian[0].setJumlah(123);
    pakaian[0].setHarga(120000);
    pakaian[0].setGen("L");  
    pakaian[0].setModel("Jaket");
    pakaian[0].setWarna("Hitam");
    pakaian[1].setTahun(2021);
    pakaian[1].setJumlah(330);
    pakaian[1].setGen("P");
    pakaian[1].setHarga(320000);
    pakaian[1].setModel("dress");
    pakaian[1].setWarna("Merah");
    pakaian[2].setTahun(2020);
    pakaian[2].setGen("L");
    pakaian[2].setJumlah(24);
    pakaian[2].setHarga(120000);
    pakaian[2].setModel("kemeja");
    pakaian[2].setWarna("Biru");
    pakaian[3].setTahun(2021);
    pakaian[3].setGen("L");
    pakaian[3].setJumlah(33);
    pakaian[3].setHarga(120000);
    pakaian[3].setModel("Kaos");
    pakaian[3].setWarna("Putih");

    aksesoris aksesoris[2];
    aksesoris[0].setTahun(2022);
    aksesoris[0].setJenis("Sabuk");
    aksesoris[0].setBahan("Kain");
    aksesoris[0].setJumlah(56);
    aksesoris[0].setHarga(120000);
    aksesoris[1].setTahun(2019);
    aksesoris[1].setJenis("Topi");
    aksesoris[1].setBahan("Kulit");
    aksesoris[1].setJumlah(34);
    aksesoris[1].setHarga(80000);

    for  (int i = 0; i<2; i++){
        cout << "tahun : "<< sepatu[i].getTahun() << endl;
        cout << "jumlah : "<< sepatu[i].getJumlah() << endl;
        cout << "harga : "<< sepatu[i].getHarga() << endl;
        cout << "merk : "<< sepatu[i].getMerk() << endl;
        cout << "ukuran : "<< sepatu[i].getUkuran() << endl;
        cout << "==================================================" << endl;
    }

    for (int i = 0 ; i< 4; i++){
        cout << "tahun : "<< pakaian[i].getTahun() << endl;
        cout << "jumlah : "<< pakaian[i].getJumlah() << endl;
        cout << "harga : "<< pakaian[i].getHarga() << endl;
        cout << "Model : " << pakaian[i].getModel() << endl;
        cout << "Warna : " << pakaian[i].getWarna() << endl;
        cout << "Gender : " << pakaian[i].getGen() << endl;
        cout << "==================================================" << endl;
    }

    for (int i=0; i<2;i++){
        cout << "tahun : " << aksesoris[i].getTahun() << endl;
        cout << "jumlah : " << aksesoris[i].getJumlah() << endl;
        cout << "harga : " << aksesoris[i].getHarga() << endl;
        cout << "Jenis : " << aksesoris[i].getJenis() << endl;
        cout << "Bahan : " << aksesoris[i].getBahan() << endl;
        cout << "==================================================" << endl;
    }
}
#include <iostream>
#include <string>

using namespace std;

class Gaji{
    protected:
        string m_nama;
        int m_gaji;
        string m_jabatan;
    public:
        Gaji(){
            m_gaji = 0;
        }

        virtual void setGaji(int a, int b){
            m_gaji = 0;
        }

        int getGaji(){
            return m_gaji;
        }
        string getNama(){
            return m_nama;
        }
        string getJabatan(){
            return m_jabatan;
        }
};

class GajiDirektur : public Gaji{
    public: 
    GajiDirektur(string nama){
        m_nama = nama;
        m_jabatan = "Direktur";
    }

    void setGaji(int hari_kerja, int jam_lembur) override {
        m_gaji = 5400000 + 120000 * hari_kerja + 50000 * hari_kerja + 50000 * jam_lembur;
    }
};

class GajiManager : public Gaji{
    public:
    GajiManager(string nama){
        m_nama = nama;
        m_jabatan = "Manager";
    }
    void setGaji(int hari_kerja, int jam_lembur) override {
        m_gaji = 4500000 + 100000 * hari_kerja + 30000 * hari_kerja + 40000 * jam_lembur;
    }
};
class GajiTeknisi : public Gaji{
    public:
    GajiTeknisi(string nama){
        m_nama = nama;
        m_jabatan = "Teknisi";
    }
    void setGaji (int hari_kerja, int jam_lembur) override{
        m_gaji = 3200000 + 60000 * hari_kerja + 20000 * hari_kerja + 15000 * jam_lembur;
    }
};

class GajiOperator : public Gaji{
    public:
    GajiOperator(string nama){
        m_nama = nama;
        m_jabatan = "Operator";
    }
    void setGaji(int hari_kerja, int jam_lembur) override {
        m_gaji = 2400000 + 60000 * hari_kerja + 20000 * hari_kerja + 10000 * jam_lembur;
    }
};

int main(){
    GajiDirektur* direktur1 = new GajiDirektur("Budi");
    GajiManager* manager1 = new GajiManager("Joko");
    GajiTeknisi* teknisi1 = new GajiTeknisi("Agus");
    GajiOperator* operator1 = new GajiOperator("Siti");

    Gaji *gaji1[4] = {direktur1, manager1, teknisi1, operator1};

    for(int i = 0; i < 4; i++){
        gaji1[i]->setGaji(24, 8);
    }

    for(int i = 0; i < 4; i++){
        cout << "===================================================" << endl;
        cout << "Nama\t: " << gaji1[i]->getNama() << endl;
        cout << "Jabatan\t: " << gaji1[i]->getJabatan() << endl;
        cout << "Gaji\t: " << gaji1[i]->getGaji() << endl;
        cout << "===================================================\n"<<endl;
    }   
    return 0;
}
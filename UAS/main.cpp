#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#define clearstream cin.ignore(100, '\n')

using namespace std;

template <typename T>
T inputException(T, T);
template <typename T>
T inputException();

enum menuName{MENU,MENUPENDAFTARAN,MENUFORM,MENUDATA};

typedef struct dataPendaftar{
    string nama = "";
    string NIK = "";
    string TTL = "";
    string alamat = "";
    string no_hp = "";
    string jabatan = "";
};

class FormPendaftaran{
    private:
    bool m_state = true;
    menuName m_currMenu=MENU;
    vector<dataPendaftar>* m_dataPendaftar = new vector<dataPendaftar>;
    dataPendaftar data_temp;
    void menuPendaftaran(){
        cout << "\x1b[2J";
        cout << "==============================================================" << endl;
        cout << "1. Isi Form Pendaftaran" << endl;
        cout << "2. Kembali Ke Menu" << endl;
        cout << " masukkan pilihan : ";
        int pilihan = inputException<int>(1,2);
        switch(pilihan){
            case 1:
                m_currMenu = MENUFORM;
                break;
            case 2:
                m_currMenu = MENU;
                break;
        }
    }
    bool isExist(){
        for(int i=0;i<m_dataPendaftar->size();i++){
            if(data_temp.nama == m_dataPendaftar->at(i).nama){
                return true;
            }
        }
        return false;
    }

    void form(){  
        cout << "\x1b[2J";
        cout << "==============================================================" << endl;
        cout << "Nama   : " << data_temp.nama<<endl;
        cout << "NIK    : " << data_temp.NIK<<endl;
        cout << "TTL    : " << data_temp.TTL<< endl;
        cout << "Alamat : " << data_temp.alamat << endl;
        cout << "No HP  : " << data_temp.no_hp << endl;
        cout << "Jabatan: " << data_temp.jabatan<< endl;
        cout << "==============================================================" << endl;
        cout << "1. Nama" << endl;
        cout << "2. NIK" << endl;
        cout << "3. TTL" << endl;
        cout << "4. Alamat" << endl;
        cout << "5. No HP" << endl;
        cout << "6. Jabatan" << endl;
        cout << "7. Simpan Form" << endl;
        cout << "8. Kembali Ke Menu Pendaftaran" << endl;
        cout << "9. Kembali ke menu utama" << endl;
        cout << " masukkan pilihan : ";
        int pilihan = inputException<int>(1,9);
        switch (pilihan){
        case 1:
            cout << "Nama : ";
            getline(cin,data_temp.nama);
            break;
        case 2:
            cout << "NIK : ";
            getline(cin,data_temp.NIK);
            break;
        case 3:
            cout << "TTL : ";
            getline(cin,data_temp.TTL);
            break;
        case 4:
            cout << "Alamat : ";
            getline(cin,data_temp.alamat);
            break;
        case 5:
            cout << "No HP : ";
            getline(cin,data_temp.no_hp);
            break;
        case 6:
            cout << "Jabatan : ";
            getline(cin,data_temp.jabatan);
            break;
        case 7:
            if(isExist()){
                cout << "Nama sudah ada" << endl;
                break;
            }                
            m_dataPendaftar->push_back(data_temp);
            data_temp.nama = "";
            data_temp.NIK = "";
            data_temp.TTL = "";
            data_temp.alamat = "";
            data_temp.no_hp = "";
            data_temp.jabatan = "";
            cout<<"berhasil menyimpan"<<endl;
            break;
        case 8: 
            m_currMenu = MENUPENDAFTARAN;
            break;
        case 9:
            m_currMenu = MENU;
            break;
        default:
            break;
        }
    }
    void rekapitulasi(){
        int manager = 0;
        int teknisi = 0;
        int operator_ = 0;
        int sales = 0;
        for (int i = 0; i < m_dataPendaftar->size(); i++)
        {
            transform(m_dataPendaftar->at(i).jabatan.begin(), m_dataPendaftar->at(i).jabatan.end(), m_dataPendaftar->at(i).jabatan.begin(), ::tolower);
            if (m_dataPendaftar->at(i).jabatan.compare("manager") == 0)
            {
                manager++;
            }
            else if (m_dataPendaftar->at(i).jabatan.compare("teknisi") == 0)
            {
                teknisi++;
            }
            else if (m_dataPendaftar->at(i).jabatan.compare("operator") == 0)
            {
                operator_++;
            }
            else if (m_dataPendaftar->at(i).jabatan.compare("sales") == 0)
            {
                sales++;
            }
        }
        cout << "\x1b[2J";
        cout << "==============================================================" << endl;
        cout << "Jumlah Pendaftar : " << m_dataPendaftar->size() << endl;
        cout << "Jumlah Manager : " << manager << endl;
        cout << "Jumlah Teknisi : " << teknisi << endl;
        cout << "Jumlah Operator : " << operator_ << endl;
        cout << "Jumlah Sales    : " << sales << endl;
        cout << "==============================================================" << endl;

    }
    void showData(){
        int temp;
        int jumlah = m_dataPendaftar->size();
        for(int i = 0 ; i < jumlah; i++){
            cout << i+1 << ". " << m_dataPendaftar->at(i).nama << endl;
        }
        cout << " Jumlah pendaftar : " << jumlah << endl;
        cout << " ===================================" << endl;
        cout << " 1. Lihat data pendaftar" << endl;
        cout << " 2. lihat rekapitulasi pendaftaran" << endl;
        cout << " 3. Kembali ke menu utama" << endl;
        int pilihan = inputException<int>(1,2);
        switch (pilihan)
        {
        case 1:
            cout << " masukkan indeks pendaftar : ";
            temp = inputException<int>(1,m_dataPendaftar->size());
            cout << "==============================================================" << endl;
            cout << "Nama   : " << m_dataPendaftar->at(temp-1).nama << endl;
            cout << "NIK    : " << m_dataPendaftar->at(temp-1).NIK << endl;
            cout << "TTL    : " << m_dataPendaftar->at(temp-1).TTL << endl;
            cout << "Alamat : " << m_dataPendaftar->at(temp-1).alamat << endl;
            cout << "No HP  : " << m_dataPendaftar->at(temp-1).no_hp << endl;
            cout << "Jabatan: " << m_dataPendaftar->at(temp-1).jabatan << endl;
            cout << "==============================================================" << endl;
            break;
        case 2:
            rekapitulasi();
        case 3:
            m_currMenu = MENU;
            break;
        default:
            break;
        }

    }
    public:
    FormPendaftaran(){
        cout << "\x1b[2J"<<endl;
        cout << "Program Form Pendaftaran Karyawan Baru PT Maju Raya Bersama" << endl;
        cout<<"=============================================================="<<endl;
    }

    ~FormPendaftaran(){
        delete m_dataPendaftar;
    }

    void menu(){
        cout<<"\x1b[2J";
        cout<<"=============================================================="<<endl;
        cout<<"1. Pendaftaran Karyawan Baru"<<endl;
        cout<<"2. Lihat Data Pendaftar"<<endl;
        cout<<"3. Keluar"<<endl;
        cout<<"masukkan pilihan : ";
        int pilihan = inputException<int>(1,3);
        switch (pilihan)
        {
        case 1:
            m_currMenu = MENUPENDAFTARAN;
            break;
        case 2:
            m_currMenu = MENUDATA;
            break;
        case 3:
            m_state = false;
            break;
        default:
            break;
        }
    }

    void update(){
        switch (m_currMenu){
        case MENU:
            menu();
            break;
        case MENUPENDAFTARAN:
            menuPendaftaran();
            break;
        case MENUFORM:
            form();
            break;
        case MENUDATA:
            showData();
            break;
        default:
            break;
        }
    }

    bool isActive(){
        return m_state;
    }
};


int main(){
    FormPendaftaran* form = new FormPendaftaran();
    for(;;){
        if(!form->isActive())
            break;
        form->update();
    }
    delete form;
    return 0;
}

template <typename T>
T inputException(T start, T end)
{
    T temp;
    try
    {
        cin >> temp;
        clearstream;
        if (cin.fail())
        {
            throw "Input tidak valid";
        }
        else if (temp < start || temp > end)
        {
            throw "Pilihan tidak ada  ";
        }
    }
    catch (const char *e)
    {
        cout << e << endl;
        cin.clear();
        clearstream;
        if (-1 < start)
            temp = -1;
        else
            temp = start - 1;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
        temp = -1;
    }

    return temp;
}

template <typename T>
T inputException()
{
    T temp;
    try
    {
        cin >> temp;
        clearstream;
        if (cin.fail())
        {
            throw "Input tidak valid";
        }
    }
    catch (const char *e)
    {
        cout << e << endl;
        cin.clear();
        clearstream;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
    return temp;
}
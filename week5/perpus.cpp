#include <iostream>
#include <string>
#include "linked_list.h"

using namespace std;

typedef struct statBuku{
    string id_member;
    string id_buku;
    string id_tanggal;
} SB;

typedef struct Leveling{
    string id_member;
    int level;
} LV;
typedef struct counter{
    int peminjaman=0;
    int pengembalian=0;
    int level=0;
}counter;
class perpus{
    private :
    LL m_buku;
    LL m_pegawai;
    LL m_member;    
    SB m_peminjaman[100];
    SB m_pengembalian[100];  
    LV level;
    counter cnt;
    public :
    perpus();
    void menu();
    void daftarMember();
    void daftarBuku();
    void daftarPegawai();
    void pinjamBuku();
    void pengembalian();
    void close();
    void insert(LL *, string, string);
};

perpus::perpus(){
    int pilihan;
    cout << " === Menu === " << endl;
    cout << "1. Pinjam Buku" << endl;
    cout << "2. Pengembalian Buku" << endl;
    cout << "3. mendaftar" << endl;
    cout << "4. tampilkan daftar buku" << endl;
    cout << "5. exit" << endl;
    cout << "Masukkan pilihan : " << endl;
    cin >> pilihan; 
    if(pilihan == 1){
        pinjamBuku();
    }
    else if(pilihan == 2){      
        pengembalian();
    }
    else if(pilihan == 3){
        cout << " === Menu Mendaftar=== " << endl;
        cout << "1. Daftar Buku" << endl;
        cout << "2. Daftar Member" << endl;
        cout << "3. Daftar Pegawai" << endl;
        cin >> pilihan;
        cin.ignore();
        string id="", nama="";
        if (pilihan == 1){
            cout << " masukkan id buku: ";
            getline(cin, id);
            cout << " masukkan judul buku : ";
            getline(cin, nama);
            if(!m_buku.length())
                m_buku.set_head(id,nama);
            if (!m_pegawai.find_id(id)){
                m_pegawai.insert(id, nama);
            }
            else{
                cout << " id buku sudah terdaftar" << endl;
            }
        }
        else if (pilihan == 2){
            cout << " masukkan id : ";
            getline(cin, id);
            cout << " masukkan nama : ";
            getline(cin, nama);
            if (!m_member.length())
                m_member.set_head(id, nama);
            if (!m_pegawai.find_id(id)){
                m_pegawai.insert(id, nama);
            }
            else{
                cout << " id member sudah terdaftar" << endl;
            }
        }
        else if (pilihan == 3){
            cout << " masukkan id : ";
            getline(cin, id);
            cout << " masukkan nama : ";
            getline(cin, nama);
            if (!m_pegawai.length())
                m_pegawai.set_head(id, nama);
            if(!m_pegawai.find_id(id)){
                m_pegawai.insert(id, nama);
            }
            else{
                cout<<" id pegawai sudah terdaftar"<<endl;
            }
        }
    }
    else if (pilihan == 4){
        cout << " === DAFTAR BUKU YANG TERSEDIA === "<<endl;
        m_buku.printList();
    }

    else if(pilihan == 5){
        close();
        exit(0);
    }
}

void perpus::pinjamBuku(){
    string id_buku,id_member,tanggal;
    cout << " masukkan id_buku yang ingin di pinjam : ";
    cin >> id_buku;
    if (!m_buku.find_id(id_buku)){
        cout << " id_buku tidak terdaftar!"<<endl;
        return;
    }
    cout << " masukkan id_member anda : ";
    cin >> id_member;
    if (!m_member.find_id(id_member))
    {
        cout << " id_member tidak terdaftar!" << endl;
        return;
    }
    cout << "masukkan tanggal peminjaman(dd:mm:yyyy)  :  "<<endl;
    cin>>tanggal;
    m_peminjaman->id_buku[cnt.peminjaman] = id_buku;
    m_peminjaman->id_member[cnt.peminjaman] = id_member;
    m_peminjaman->id_tanggal[cnt.peminjaman++] = tanggal;
}

void perpus::pengembalian(){

}

void perpus::close(){
    m_buku.destroy_list();
    m_pegawai.destroy_list();
    m_member.destroy_list();
}

int main(){
    perpus p;
}
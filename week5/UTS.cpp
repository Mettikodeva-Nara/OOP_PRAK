#include <iostream>
using namespace std;
class buku{
    private:
        int id;
        string judul;
        string pengarang;
        string tanggal_pinjam;
        string tanggal_pengembalian;
        bool bukuDipinjam;

    public:
        buku(int id, string judul, string pengarang){
            this->id = id;
            this->judul = judul;
            this->pengarang = pengarang;
        }
        void pinjamBuku(string tanggal_pinjam){
            this->tanggal_pinjam = tanggal_pinjam;
            this->bukuDipinjam = true;
        }

        void kembaliBuku(string tanggal_pengembalian){
            this->tanggal_pengembalian = tanggal_pengembalian;
            this->bukuDipinjam = false;
        }
        int getId(){
            return this->id;
        }
        string getJudul(){
            cout << "Judul Buku : " << this->judul << endl;
            return this->judul;
        }
        string getPengarang(){
            cout << "Pengarang Buku : " << this->pengarang << endl;
            return this->pengarang;
        }

        bool status(){
            if (this->bukuDipinjam == true){
                cout << "Buku Sedang Dipinjam" << endl;
                return false;
            }
            else{
                cout << "Buku Sedang Tersedia" << endl;
                return true;
            }
        }
};

class perpus{
    buku *rak_buku[100];
    int counter = 0;
    public:
    void tambahBuku(buku *buku){
        rak_buku[this->counter++] = buku;
        cout<< " buku berhasil ditambahkan"<< endl;
    }

    void pinjamBuku(int id, string tanggal_pinjam){
        for (int i = 0; i < 100; i++){
            if (rak_buku[i]->getId() == id){
                if(rak_buku[i]->status()){
                    rak_buku[i]->pinjamBuku(tanggal_pinjam);
                    cout<<"buku berhasil dipinjam"<<endl;
                }
                break;
            }
        }
    }
    void pengembalianBuku(int id, string tanggal_pengembalian){
        for (int i = 0; i < 100; i++){
            if (rak_buku[i]->getId() == id){
                if(!rak_buku[i]->status()){
                    rak_buku[i]->kembaliBuku(tanggal_pengembalian);
                    cout<<"buku berhasil dikembalikan"<<endl;
                }
                break;
            }
        }
    }
    void statusBuku(int id){
        for (int i = 0; i < 100; i++){
            if (rak_buku[i]->getId() == id){
                rak_buku[i]->status();
                break;
            }
        }
    }

};
int main(){
    buku buk1(1, "C++", "Abdul");
    buku buk2(2, "Java", "Abdul");
    perpus p;
    p.tambahBuku(&buk1);
    p.tambahBuku(&buk2);
    p.statusBuku(1);
    p.pinjamBuku(1, "12/12/12");
    p.statusBuku(1);
    p.pengembalianBuku(1, "12/12/12");
    p.statusBuku(1);

    return 0;
}
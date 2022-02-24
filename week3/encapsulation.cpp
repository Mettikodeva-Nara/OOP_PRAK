#include <iostream>
using namespace std;
class Tabungan{
  public:
    Tabungan(){
      m_saldo =0;
      int pilihan;
      while (true)
      {
        int pilihan;
        int uang;
        cout << " === Menu ===" << endl;
        cout << " 1. Lihat saldo" << endl;
        cout << " 2. Simpan Uang" << endl;
        cout << " 3. Ambil Uang" << endl;
        cout << " 4. Keluar\n" << endl;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
          getSaldo();
          break;
        case 2:
          cout << " === pilih mata uang ===" << endl;
          cout << " 1. YUAN" << endl;
          cout << " 2. $ USD" << endl;
          cout << " 3. RP. IDR" << endl;
          cout << " masukkan pilihan : " << endl;
          cin >> pilihan;
          cout << " masukkan jumlah yang mau di setor : " << endl;
          cin >> uang;
          switch (pilihan)
          {
          case 1:
            uang *= 3000;
            break;
          case 2:
            uang *= 15000;
            break;
          case 3:
            break;
          default:
            break;
          }
          simpanUang(uang);
          break;
        case 3:
          cout << " === pilih mata uang ===" << endl;
          cout << " 1. ¥ YUAN" << endl;
          cout << " 2. $ USD" << endl;
          cout << " 3. RP. IDR" << endl;
          cout << " masukkan pilihan : " << endl;
          cin >> pilihan;
          cout << " masukkan jumlah yang mau di tarik : " << endl;
          cin >> uang;
          switch (pilihan){
          case 1:
            uang *= 3000;
            break;
          case 2:
            uang *= 15000;
            break;
          case 3:
            break;
          default:
            break;
          }
          ambilUang(uang);
          break;
        case 4:
          cout << " exiting..."<<endl;
          exit(0);
        default:
          break;
        }
      }
    }

    long getSaldo(){
      cout << "  === SALDO ANDA ==="<<endl;
      cout << "  Rp." << m_saldo<<endl;
    }

    void simpanUang(long uang){
      m_saldo += uang;
    }
    void ambilUang(long uang){
      m_saldo -= uang;
    }

  private:
  long m_saldo;
};

int main(){
  Tabungan tabungan;
    
}
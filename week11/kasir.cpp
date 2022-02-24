#include <iostream>
#include <exception>
#include <vector>
#include <cstdlib>
#include <ctime>
#define clearstream cin.ignore(100, '\n')
using namespace std;

enum buah
{
   mangga,
   apel,
   nanas,
   anggur,
   semangka,
   salak,
   naga
};

void menu();
void printKeranjang(vector<double> &);
void daftar(vector<double> &);
void printStruk(vector<double> &);
template <typename T>
T inputException(T, T);
template <typename T>
T inputException();

string nama_buah[] = {"mangga", "apel ", "nanas ", "anggur", "semangka", "salak ", "naga "};
int harga[] = {15500, 34300, 12300, 43000, 20000, 26800, 21700};
int main()
{
   vector<double> *keranjang = new vector<double>;
   keranjang->assign(7, 0);
   int pilih;
   while (true)
   {
      // getKeranjang();

      printKeranjang(*keranjang);
      menu();
      pilih = inputException<int>(1, 4);
      if (pilih == 1)
      {
         daftar(*keranjang);
      }
      else if (pilih == 2)
      {
         cout << "pilih yang mau dihapus : ";
         int choice = inputException<int>(1, keranjang->size());
         keranjang->insert(keranjang->begin() - 1 + choice, 0);
         keranjang->erase(keranjang->begin() + choice);
      }
      else if (pilih == 3)
      {
         printStruk(*keranjang);
         cout << "bersihkan keranjang ?" << endl;
         cout << "1. ya" << endl;
         cout << "2. tidak" << endl;
         int pilih = inputException<int>();
         if (pilih == 1)
         {
            keranjang->assign(7, 0);
         }
      }
      else if (pilih == 4)
      {
         break;
      }
      cout << "--------------------------------" << endl
           << endl;
   }
   return 0;
}

void daftar(vector<double> &keranjang)
{
   int pilih;
   float banyak;
   cout << "1. Mangga      Rp. 15500" << endl;
   cout << "2. Apel        Rp. 34300" << endl;
   cout << "3. Nanas       Rp. 12300" << endl;
   cout << "4. Anggur      Rp. 43000" << endl;
   cout << "5. Semangka    Rp. 20000" << endl;
   cout << "6. Salak       Rp. 26800" << endl;
   cout << "7. Buah Naga   Rp. 21700" << endl;
   cout << " pilih barang : ";
   pilih = inputException<int>(1, 7);
   cout << "banyak (kg): ";
   banyak = inputException<float>(0, 100);
   keranjang.at(pilih - 1) += banyak;
   cout << nama_buah[pilih - 1] << " " << banyak << " kg"
        << " ditambahkan ke keranjang " << endl;
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

void menu()
{
   cout << " ==== MENU =====" << endl;
   cout << " 1. Input barang" << endl;
   cout << " 2. Hapus barang" << endl;
   cout << " 3. print struk" << endl;
   cout << " 4. Keluar" << endl;
}
void printKeranjang(vector<double> &keranjang)
{
   double total = 0;
   double temp;
   cout << " ==== Keranjang =====" << endl;
   for (int i = 0; i < keranjang.size(); i++)
   {
      temp = harga[i] * keranjang[i];
      total += temp;
      cout << i + 1 << ". " << nama_buah[i] << "\t" << keranjang[i] << " kg\t"
           << "Rp." << temp << endl;
   }
   cout << " ============= ===== =============" << endl;
   cout << " ==== Total ==== " << endl;
   cout << "Rp." << total << endl;
}

void printStruk(vector<double> &keranjang)
{
   time_t now = time(0);
   double total = 0;
   double temp;
   cout << " masukkan uang yang akan dibayar : ";
   double bayar = inputException<double>();
   cout << endl
        << endl;
   cout << "###################################################" << endl;
   cout << " = Terima Kasih Telah berbelanja = " << endl;
   cout << ctime(&now) << endl;
   cout << " ============= ===== =============" << endl;
   for (int i = 0; i < keranjang.size(); i++)
   {
      temp = harga[i] * keranjang[i];
      total += temp;
      cout << i + 1 << ". " << nama_buah[i] << "\t" << keranjang[i] << " kg\t"
           << "Rp." << temp << endl;
   }
   cout << " ============= ===== =============" << endl;
   cout << " ==== Total ==== " << endl;
   cout << "Rp." << total << endl;
   cout << " ==== Uang yang dibayar ==== " << endl;
   cout << "Rp." << bayar << endl;
   cout << " ==== Uang kembali ==== " << endl;
   cout << "Rp." << bayar - total << endl;
   cout << "###################################################" << endl
        << endl;
}
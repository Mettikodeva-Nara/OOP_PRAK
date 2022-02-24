#include<iostream>
#include<string.h>

using namespace std;

class restoRR
{
    public :
        string namapembeli;
        int menueat;
        int hargaeat;
        int menudrink;
        int hargadrink;
        int totharga;
        int kembalian;
        int duitmsk;

        int hitungtotalmakan()
        {
            if (menueat==1){
                hargaeat = 15000;
            }
            else if (menueat==2){
                hargaeat = 10000;
            }
            else if(menueat == 3){
                hargaeat = 20000;
            }
        }

        int hitungtotalminum()
        {
            if (menudrink == 1){
                hargadrink = 3000;
            }
            else if (menudrink == 2){
                hargadrink = 5000;
            }
            else if(menudrink == 3){
                hargadrink = 10000;
            }
        }

    void bayar(){
        totharga = hargaeat + hargadrink;
        kembalian = duitmsk - (hargaeat + hargadrink);
        cout<<"total harga : "<< totharga<<endl;
        cout<<"kembalian : "<<kembalian<<endl;
    }
        
};

int main()
{
    restoRR customer1;

    cout<<"=============== SELAMAT DATANG DI RESTO RR ===============\n\
    \n Daftar menu makanan\
    \n 1.Nasi Goreng Spesial\
    \n 2.Nasi Goreng tidak spesial\
    \n 3.Nasi Goreng spesial + telor ";
    cin>>customer1.menueat;



}
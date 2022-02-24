#include <iostream>

enum makanan{ NASGOR = 1, MIEGOR, BATAGOR, SIAOMAY, ESTEH, ESJERUK};

class app{
    private:
    std::string nama = "RM.Sederhana";
    int harga[7] = {0, 50000, 55000,30000,20000,10000,15000}; 
    int pesanan[6] = {0, 0, 0, 0, 0, 0};
    int jumlah[6] = {0, 0, 0, 0, 0, 0};
    int total;
    void hitung(){
        long total = 0;
        for (int i = 0; i < 6; i++){
            switch (this->pesanan[i]){
            case NASGOR:
                total += harga[NASGOR] * this->jumlah[i];
                break;
            case MIEGOR:
                total += harga[MIEGOR] * this->jumlah[i];
                break;
            case BATAGOR:
                total += harga[BATAGOR] * this->jumlah[i];
                break;
            case SIAOMAY:
                total += harga[SIAOMAY] * this->jumlah[i];
                break;
            case ESTEH:
                total += harga[ESTEH]  * this->jumlah[i];
                break;
            case ESJERUK:
                total += harga[ESJERUK] * this->jumlah[i];
                break;
            default:
                break;
            }
        }
        this->total = total;
    }

public:
    app(){
        this->input();
        this->hitung();
        this->bayar();
    } 
    void menu(){
        std::cout << " === Menu " << nama << " ===\n";
        std::cout << " 1. Nasi Goreng    = Rp.50.000\n";
        std::cout << " 2. Mie Goreng     = Rp.55.000\n";
        std::cout << " 3. Batagor        = Rp.30.000\n";
        std::cout << " 4. Sioamay        = Rp.20.000\n";
        std::cout << " 5. es teh         = Rp.10.000\n";
        std::cout << " 6. es jeruk       = Rp.15.000\n";
    }
    void input(){
        bool state = true;
        int counter = 0;
        char status;
        while(state){
            system("cls");
            this->menu();
            std::cout<<" masukan pesanan : ";
            std::cin >> pesanan[counter];
            std::cout << " berapa banyak : ";
            std::cin >> jumlah[counter];
            std::cout<< "pesan menu lain? (y/n)";
            std::cin>>status;
            if(status == 'n' || status == 'N'){ state = false;}
            counter++;
        }
    }
    void bayar(){
        long uang_bayar;
        while(true){
            std::cout<<" total harga Rp."<<std::to_string(total)<<std::endl;
            std::cout << " masukkan uang yang ingin dibayar Rp.";
            std::cin >> uang_bayar;
            if (uang_bayar - total<0){
                std::cout<<"UANGNYA KURANG MAS!\n";
                continue;
            }
            std::cout<<" uang kembalian Rp."<<std::to_string(uang_bayar-total);
            std::cout<< std::endl;
            break;
        }
    };
};

int main(){
    app RM;
}
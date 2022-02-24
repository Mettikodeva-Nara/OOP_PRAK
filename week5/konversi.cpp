#include <iostream>
#include <cmath>
using namespace std;

class Convert{
    public:
    Convert(){
        int pilihan;
        while (true){
            cin.ignore();
            cout<<" === PROGRAM KONVERSI ==="<<endl;
            cout<<" 1. konversi panjang "<<endl;
            cout<<" 2. konversi berat "<<endl;
            cout<<" 3. konversi kecepatan "<<endl;
            cout<<" 4. konversi titik koordinat"<<endl;
            cout<<" 5. exit " <<endl;
            cin >> pilihan;
            switch (pilihan)
            {
            case 1:
                convertPanjang();
                break;
            case 2:
                convertBerat();
                break;
            case 3:
                convertKecepatan();
                break;
            case 4: 
                convertTitik();
                break;
            case 5:
                exit(0);
            default:
                break;
            }
        
        }
    }
    void getSkalar(float x, float y){
        float hasil;
        hasil = sqrt((x-0)*(x-(0-0)) + (y-0)*(y-0));
        cout<< " skalar : "<< hasil<<endl;
    }

    void getSkalar(float x0, float y0, float x1, float y1){
        float hasil;
        hasil = sqrt((x0-x1)*(x0-x1) + (y0-y1)*(y0-y1));
        cout << " skalar : " << hasil << endl;
    }

    void convertTitik(){
        int pilihan;
        float titik[4];
        cout << " === PROGRAM KONVERSI titik ===" << endl;
        cout << " 1. konversi 2 titik" << endl;
        cout << " 2. konversi 4 titik" << endl;
        cout << " masukkan pilihan : ";
        cin >> pilihan;
        if(pilihan == 1){
            for(int i=0; i<2;i++){
                cout << "masukkan titik ke-"<<i+1<<" : "<<endl;
                cin>>titik[i];
            }
            getSkalar(titik[0],titik[1]);
        }
        else if (pilihan ==2){
            for (int i = 0; i < 4; i++)
            {
                cout << "masukkan titik ke-" << i + 1 << " : " << endl;
                cin >> titik[i];
            }
            getSkalar(titik[0], titik[1], titik[2],titik[3]);
        }
    }

    void convertPanjang(){
        int pilihan;
        float val;
        cout << " === PROGRAM KONVERSI Panjang ===" << endl;
        cout << " 1. konversi meter" << endl;
        cout << " 2. konversi Inch" << endl;
        cout << " 3. konversi Yard" << endl;
        cout << " masukkan pilihan : ";
        cin >> pilihan;
        cout << " =============================== "<<endl;
        cout<<" masukkan nilai : ";
        cin >> val;
        switch (pilihan){   
        case 1:
            cout << " meter : " << val <<" m"<< endl;
            cout << " Inch : " << val * 39.37008 << " Inch" << endl;
            cout << " Yard : " << val * 1.093613 << " Yard" << endl;
            break;
        case 2:
            cout << " Inch : " << val << " Inch" << endl;
            cout << " Meter : " << val / 39.37008 << " m" << endl;
            cout << " Yard : " << val * 0.02777 << " Yard" << endl;
            break;
        case 3:
            cout << " Yard : " << val << " Yard" << endl;
            cout << " Inch : " << val / 0.02777 << " Inch" << endl;
            cout << " meter : " << val / 1.093613 << " m" << endl;
            break;
        default:
            cout<< "pilihan salah "<<endl;
            break;
        }

    }

    void convertBerat(){
        int pilihan;
        float val;
        cout << " === PROGRAM KONVERSI Panjang ===" << endl;
        cout << " 1. konversi Kg" << endl;
        cout << " 2. konversi Pound" << endl;
        cout << " 3. konversi Oz" << endl;
        cout << " masukkan pilihan : ";
        cin >> pilihan;
        cout << " =============================== " << endl;
        cout << " masukkan nilai : ";
        cin >> val;
        switch (pilihan)
        {
        case 1:
            cout << " Kg : " << val << " Kg" << endl;
            cout << " Pound : " << val * 2.2046 << " Pound" << endl;
            cout << " Oz : " << val * 35.2739 << " Oz" << endl;
            break;
        case 2:
            cout << " Pound : " << val << " Pound" << endl;
            cout << " Kg : " << val / 2.2046 << " Kg" << endl;
            cout << " Oz : " << val * 16 << " Oz" << endl;
            break;
        case 3:
            cout << " Oz : " << val << " Oz" << endl;
            cout << " Pound : " << val / 16 << " Pound" << endl;
            cout << " Kg : " << val / 35.2739 << " Kg" << endl;
            break;
        default:
            cout << "pilihan salah " << endl;
            break;
        }
    }
    
    void convertKecepatan(){
        int pilihan;
        float val;
        cout << " === PROGRAM KONVERSI Panjang ===" << endl;
        cout << " 1. konversi Km/h" << endl;
        cout << " 2. konversi Inch" << endl;
        cout << " 3. konversi Yard" << endl;
        cout << " masukkan pilihan : ";
        cin >> pilihan;
        cout << " =============================== " << endl;
        cout << " masukkan nilai : ";
        cin >> val;
        switch (pilihan){
        case 1:
            cout << " Km/h : " << val << " Km/h" << endl;
            cout << " m/s : " << val / 0.36 << " m/s" << endl;
            cout << " knot : " << val * 0.5399 << " knot" << endl;
            break;
        case 2:
            cout << " m/s : " << val << " m/s" << endl;
            cout << " Km/h : " << val * 3.6 << " Km/h" << endl;
            cout << " knot : " << val * 1.9438 << " knot" << endl;
            break;
        case 3:
            cout << " knot : " << val << " knot" << endl;
            cout << " m/s : " << val / 1.9438 << " m/s" << endl;
            cout << " Km/h : " << val / 0.5399 << " Km/h" << endl;
            break;
        default:
            cout << "pilihan salah " << endl;
            break;
        }
    }
};

int main(){
    Convert c;
}
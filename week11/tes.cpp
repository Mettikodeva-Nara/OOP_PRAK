#include <iostream>
#include <vector>
#define clearstream cin.ignore(100, '\n')



using namespace std;

void print(vector<double> &keranjang){
    for (int i = 0; i < keranjang.size(); i++){
        cout << i+1 << ". " << keranjang[i] << endl;
    }
};
int main(){
    // vector<int> v;
    // clearstream;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i];
    // }
    // v.~vector();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i];
    // }
    vector<double> *keranjang = new vector<double>;
    print(*keranjang);
    cout << "end";
    // int temp;
    // while(1){
    //     cout<<"masukkan angka : ";
    //     cin >> temp;
    //     cout<< temp<<endl;
    //     cout << cin.peek()<<endl;
    //     if(cin.fail()){
    //         cin.clear();
    //         clearstream;
    //     }
    //     if(temp == 3){
    //         break;
    //     }
    // }


    return 0;
}
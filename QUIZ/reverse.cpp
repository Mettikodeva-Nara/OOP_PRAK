#include <iostream>
using namespace std;

class Reverse{
    private:
        string kata;
    public:
        Reverse(string kata){
            this->kata = kata;
        }
        string get_reversed(){
            string reversed = "";
            for(int i = kata.length()-1; i >= 0; i--){
                reversed += kata[i];
            }
            return reversed;
        }
};

int main(){
    string kata;
    cout << " masukkan kata : " << endl;
    getline(cin, kata);
    Reverse reverse(kata);
    cout << " kata terbalik : " << reverse.get_reversed() << endl;
    return 0;
}
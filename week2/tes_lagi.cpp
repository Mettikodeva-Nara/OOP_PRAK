#include <iostream>
#include <string>
using namespace std;
int main(){
    int *n = new int(5);
    for(int i = 0; i <20;i++){
        cin >> n[i];
        cout << "length: " << n.length() << endl;
    }
}
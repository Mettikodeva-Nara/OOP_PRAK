#include <iostream>
#define clearstream cin.ignore(100, '\n')
template <typename T>
T inputException(T, T);

using namespace std;
int main(){
    int temp;
    while(true){
        cout<<"masukkan angka : ";
        temp = inputException<float>(0, 100);
        if(0<=temp && temp<45){
            cout<< "nilai anda : E"<<endl;
        }
        else if (40 <= temp && temp < 55)
        {
            cout << "nilai anda : D"<<endl;
        }
        else if (55 <= temp && temp < 60)
        {
            cout << "nilai anda : C"<<endl;
        }
        else if (60 <= temp && temp < 65)
        {
            cout << "nilai anda : BC"<<endl;
        }
        else if (65 <= temp && temp < 70)
        {
            cout << "nilai anda : B"<<endl;
        }
        else if (70 <= temp && temp < 75)
        {
            cout << "nilai anda : AB"<<endl;
        }
        else if (75 <= temp && temp <= 100)
        {
            cout << "nilai anda : A"<<endl;
        }
        else{
            cout<<"input tidak valid"<<endl;
        }
    }
    
    return 0;
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
            throw "Pilihan tidak ada";
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
    }
    return temp;
}
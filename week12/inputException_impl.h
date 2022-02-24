
using namespace std;
template <class T>
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

template <class T>
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

// int main(){
//     cout << inputException<int>(1, 5) << endl;
// }
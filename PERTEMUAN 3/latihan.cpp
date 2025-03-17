#include <iostream>
using namespace std;
int main ()
{
    system("CLS");

    int nilai;
    cout << "masukkan nilai: ";
    cin >> nilai;
    if (nilai % 10 == 0)
    {
        cout << "nilai adalah kelipatan 10";
    }
    else if (nilai % 5 == 0)
    {
        cout << "nilai adalah kelipatan 5";
    }
    else
    {
        cout << "nilai bukan kelipatan dari keduanya";
    }
}
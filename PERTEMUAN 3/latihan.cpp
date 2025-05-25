#include <iostream>
using namespace std;
int main ()
{
    system("CLS"); // membersihkan terminal

    int nilai;
    cout << "masukkan nilai: ";
    cin >> nilai;
    // Memeriksa apakah 'nilai' adalah kelipatan 10
    if (nilai % 10 == 0)
    {
        cout << "nilai adalah kelipatan 10";
    }
 // Memeriksa apakah 'nilai' adalah kelipatan 5
    else if (nilai % 5 == 0)
    {
        cout << "nilai adalah kelipatan 5";
    }
    else
    {
        cout << "nilai bukan kelipatan dari keduanya"; // // Menampilkan pesan jika 'nilai' bukan kelipatan dari 5 atau 10
    }
}

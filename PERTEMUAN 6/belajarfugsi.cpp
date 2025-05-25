#include <iostream>
using namespace std;

void sapa(string nama) { // untuk menerima nama bertipe data string
    cout << "Halo " << nama << "! Selamat belajar C++!" << endl;
}

int main () {
    string namapengguna = "Alya"; // digunakan untuk mendeklarasikan sebuah variabel bertipe string

    sapa(namapengguna); // memanggil fungsi sapa

    return 0;
}

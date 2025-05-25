#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan
void tampilkanPesan() {
    cout << "=== SELAMAT DATANG DI AP 1 ===" << endl;
}


// Fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

// fungsi overload dua fungsi dengan nama yang sama tetapi memiliki nama yang berbeda atau tipe data berbeda
int kali(int a, int b) {
    return a * b;
}
double kali (double a, double b) {
    return a * b;
}

// fungsi rekursif : menghitung nilai faktorial
int faktorial(int n) {
    if (n==0 || n == 1) {
        return 1;
    } else {
        return n*faktorial(n-1);
    }
}

int main() {
    system ("CLS"); // untuk membersihkan terminal

    // menggunakan fungsi tanpa nilai balikan
    tampilkanPesan();

    int x = 5, y = 3;

    // menggunakan fungsi dengan nilai balikan
    int hasilTambah = tambah(x, y);
    cout << "hasil penjumlahan: " << hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilKaliInt = kali(x, y);
    double hasilKaliDouble = kali(5.5, 2.0);
    cout << "hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "hasil perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif yaitu memanggil dirinya sendiri
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;

}

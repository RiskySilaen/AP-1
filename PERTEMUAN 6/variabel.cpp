#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

void namaVariabel() {
    string namaLokal = "Komputer"; // ini adalah variabel lokal

    //coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

int main() {
    namaVariabel();

    // coba akses
    cout << namaGlobal << endl;

    //coba akses
    // cout << namaLokal << endl; // Gak bisa
}

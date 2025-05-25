#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa { // yang berisi data berupa nama, umur, ipk
    string nama; // variabel nama bertipe string
    int umur; // variabel umur bertipe integer
    float ipk; // variabel ipk bertipe float
};

int main () {
    Mahasiswa mhs1;

    mhs1.nama = "Risky";
    mhs1.umur = 20;
    mhs1.ipk = 3.5;

    // cout << "akses dengan . : "<< endl;
    // cout << "Nama : " << mhs1.nama << endl;
    // cout << "umur : " << mhs1.umur << endl;
    // cout << "IPK : " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1;
    cout << "Akses dengen -> " << endl;
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "umur : " << ptrMhs->umur << endl;
    cout << "IPK : " << ptrMhs->ipk << endl;

}
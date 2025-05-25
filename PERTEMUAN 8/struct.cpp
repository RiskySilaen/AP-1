#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat { // berfungsi untuk menyimpan alamat seperti data yaitu jalan, kota, kode pos
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa { // berfungsi untuk menyimpan data mahasiswa seperti nama, umur, ipk, alamat
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main () {
    system("CLS");
    Mahasiswa mhs1;

    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahasiwa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // biar bisa membaca spasi kalau memasukan string
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1); // yang menyimpan objek-objek dari kelas atau struktur yang bernama Mahasiswa
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[1].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }

}
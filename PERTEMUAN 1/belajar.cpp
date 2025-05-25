#include <iostream> // Header untuk input/output
#include <conio.h>  // Header untuk fungsi konsol (seperti getche dan getch)

using namespace std; // Menggunakan namespace std agar tidak perlu menulis std sebelum setiap fungsi

int main() {
    string nama;          // Variabel untuk menyimpan nama (tipe string)
    char kom, jeniskelamin; // Variabel untuk menyimpan komponen dan jenis kelamin (tipe char)
    int nim;              // Variabel untuk menyimpan Nomor Induk Mahasiswa (NIM) (tipe integer)
    float ip;             // Variabel untuk menyimpan Indeks Prestasi (IP) (tipe float)

    cout << "Hello world!"; // Menampilkan pesan "Hello world!" ke layar
    cout << "masukkan nama: "; // Meminta pengguna untuk memasukkan nama
    getline(cin, nama); // Mengambil input string untuk nama, termasuk spasi

    cout << "masukkan kom: "; // Meminta pengguna untuk memasukkan komponen
    cin >> kom; // Mengambil input karakter untuk komponen

    cout << "masukkan nim: "; // Meminta pengguna untuk memasukkan NIM
    cin >> nim; // Mengambil input integer untuk NIM

    cout << "masukkan ip: "; // Meminta pengguna untuk memasukkan IP
    cin >> ip; // Mengambil input float untuk IP

    cout << "masukkan jenis kelamin (L/P): "; // Meminta pengguna untuk memasukkan jenis kelamin
    jeniskelamin = getche(); // Mengambil input karakter untuk jenis kelamin dan langsung menampilkannya tanpa perlu menekan enter

    /* masukkan output */
    cout << "\n" << nama << endl; // Menampilkan nama yang dimasukkan
    cout << kom << endl; // Menampilkan komponen yang dimasukkan
    cout << nim << endl; // Menampilkan NIM yang dimasukkan
    cout << ip << endl; // Menampilkan IP yang dimasukkan
    putchar(jeniskelamin); // Menampilkan karakter jenis kelamin yang dimasukkan

    getch(); // Menunggu pengguna menekan tombol sebelum program berakhir (karakter yang diketik tidak ditampilkan)

    return 0; // Mengembalikan 0 untuk menandakan bahwa program selesai dengan sukses
}
#include <iostream> // header untuk cpp
#include <conio.h> //header untuk getche

using namespace std;

int main()
{
    string nama;
    char kom,jeniskelamin;
    int nim;
    float ip;


    //cout<<"Hello world!";
    cout<<"masukkan nama: ";
    getline(cin,nama); //agar karakter spasi bisa terbaca
    cout<<"masukkan kom: ";
    cin>>kom;
    cout<<"masukkan nim:" ;
    cin>>nim; 
    cout<<"masukkan ip: ";
    cin>>ip;
    cout<<"masukkan jenis kelamin (L/P): ";
    jeniskelamin= getche(); // agar karakter langsung tampil ga perlu tekan enter


    /* masukkan output*/
    cout<<"\n"<<nama<< endl;
    cout<<kom<<endl;
    cout<<nim<< endl;
    cout<<ip<< endl;
    putchar(jeniskelamin);// untuk menampilkan karakter jenis kelamin

    getch();// karakter yang diketik gak ditampilkan

}

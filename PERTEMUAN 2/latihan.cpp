#include <iostream> // Header untuk input/output 
using namespace std; // Menggunakan namespace std agar tidak perlu menulis std sebelum fungsi seperti cout dan cin

int main()
{
    system("CLS"); // Perintah untuk membersihkan terminal

    float luas, vol, r; // Deklarasi variabel luas, vol, dan r bertipe float 
    const float phi = 3.14; // Mendefinisikan konstanta phi dengan nilai 3.14 untuk nilai π

    cout << "r = "; // Meminta pengguna untuk memasukkan nilai jari-jari (r)
    cin >> r; // Membaca input nilai jari-jari dan menyimpannya dalam variabel r

    luas = 4 * phi * r * r; // Menghitung luas permukaan bola dengan rumus 4πr² dan menyimpannya di variabel luas
    vol = (float) 4/3 * phi * r * r * r; // Menghitung volume bola dengan rumus (4/3)πr³ dan menyimpannya di variabel vol

    cout << "luas permukaan: " << luas << endl; // Menampilkan hasil luas permukaan bola ke layar
    cout << "volume : " << vol; // Menampilkan hasil volume bola ke layar
}

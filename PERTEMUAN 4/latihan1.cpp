#include <iostream>
using namespace std;

int main(){
    string kalimat; // variabel kalimat bertipe string
    int i; // variabel i bertipe integer

    cout << "masukkan kalimat: ";
    getline(cin, kalimat); // biar bisa membaca spasi

    for(i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);
    }

    cout<< "kalimat dalam huruf kapital: " << kalimat << endl;

    return 0; 
}

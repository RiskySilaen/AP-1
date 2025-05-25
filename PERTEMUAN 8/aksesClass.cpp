#include <iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar; // hanya bisa diakses oleh anggota dalam class yang sama

    protected:
        int protectedVar; // bisa diakses oleh anggota dalam class yang sama dan dari class lainnya
    
    public:
        int publicVar; // dapat diakses dari anggota dari berbagai class lainnya
    
    // constructor
    ContohAkses () {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkansemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
        cout << protectedVar << endl;
        cout << publicVar << endl;
        // cout << privateVar << endl; // error
    }
};

int main () {
    ContohAkses obj;
    obj.tampilkansemua();

    cout << "\nAkses dari luar class : " << endl;
    // cout << privateVar << endl; // error hanya dapat diakses dari dalam kelas itu sendiri dan tidak dapat diakses dari luar kelas
    // cout << protectedVar << endl; // error
    cout << obj.publicVar << endl;

    cout <<"\n Akses dari kelas Turunan " << endl;
    Turunan tur;
    tur.aksesProtected();
}
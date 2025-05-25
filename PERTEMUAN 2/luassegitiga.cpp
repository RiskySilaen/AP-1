#include <iostream> 
using namespace std;

int main()
{
    system("CLS"); // untuk membersihkan terminal
    float luas, p, l; // variabel luas, p, l bertipe float

    cout << "masukkan panjang: ";
    cin >> p;

    cout << "masukkan lebar: ";
    cin >> l;

    luas  = p * l;

    cout<<"luas segiempat: " << luas;

    return 0;
}

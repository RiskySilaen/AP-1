#include <iostream>
using namespace std;

int main()
{
    system("CLS");
    float luas, p, l;

    cout << "masukkan panjang: ";
    cin >> p;

    cout << "masukkan lebar: ";
    cin >> l;

    luas  = p * l;

    cout<<"luas segiempat: " << luas;

    return 0;
}
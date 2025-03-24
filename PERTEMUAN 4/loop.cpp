#include <iostream>
using namespace std;

int main()
{
    // goto label
    // hello world, fasilkom-ti, ilmu komputer, iklc
    // hello world, iklc, ilmu komputer, fasilkom-ti

    // a: 
    //     cout << "hello world" << endl;
    //     goto d;
    // b: 
    //     cout << "fasilkom-ti"<< endl;
    //     return 0;
    // c: 
    //     cout << "ilmu komputer" << endl;
    //     goto b;
    // d: 
    //     cout << "iklc" << endl;
    //     goto c;

    //  menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if(i % 2 == 0)
    // { 
    //     cout << i << endl;
    // } i--;

    // if(i >= 2)
    // { 
    //     goto genap;
    // }

    //statment while
    // int i = 1;
    // while (i <= 10)
    // {
    //     if(i % 2 == 0)
    //     { 
    //         cout << i << " ";
    //     } i++;
    // }

    //statment do-while
    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    // } while (i <= 0);

    //statment for
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i+=2){
    //     cout << "hello world" << endl;
    // }

    // nested for
    // ***** 5 x 5
    // for (int i = 1; i <= 5; i++){
    //     for(int j = 1; j <= 5; j++){
    //         cout << "*";
    //     } 
    //     cout << endl;
    // }

    // segitiga siku-siku
    for (int i = 1; i <= 5; i++){
       for(int j = 1; j <= i; j++){
            cout << "*";
       } 
         cout << endl;
     }
    
    


}
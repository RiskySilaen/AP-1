#include <iostream>
using namespace std;
int main()
{
    int nilai;

    system("CLS");

    cout << "masukkan nilai: ";
    cin >> nilai;

    //if statment dapat digunakan untuk mengambil keputusan berdasarkan suatu kondisi
    // if(nilai <= 65)
    // {
    //     cout << "anda tidak lulus" << endl;
    // }

    //if else statment memiliki dua buah kondisi
    // if(nilai <= 65)
    //  {
    //     cout << "anda tidak lulus" << endl;
    //  }
    //  else 
    //  {
    //     cout << "anda lulus!" << endl;
    //  }
     
    // if else if statment digunakan untuk kondisi sebanyak 3 atau lebih
    // if (nilai == 100)
    // {
    //     cout << "anda kece!" << endl;
    // }
    // else if (nilai <= 65)
    // {
    //     cout << "anda tidak lulus" << endl;
    // }
    // else 
    // {
    //     cout << "anda lulus" << endl;
    // }

    //nested if adalah dimana ada kondisi di dalam kondisi
    // if (nilai <= 65)
    // {
    //     cout << "anda tidak lulus" << endl;
    // }
    // else
    // {
    //     if(nilai == 100)
    //     {
    //         cout <<"anda lulus dan anda kece" << endl;
    //     }
    //     else 
    //     {
    //         cout <<"anda lulus" << endl;
    //     }
    // }

    //switch case adalah pernyataan yang digunakan untuk menjalankan salah satu dari beberapa kemungkinan pernyataan
    // switch (nilai)
    // {
    //     case 1:
    //         cout <<"senin" << endl;
    //         break;
    //     case 2:
    //         cout <<"selasa" << endl;
    //         break;
    //     case 3:
    //         cout <<"rabu" << endl;
    //         break;
    //     case 4:
    //         cout <<"kamis" << endl;
    //         break;
    //     case 5:
    //         cout <<"jumat" << endl;
    //         break;
    //     case 6:
    //         cout <<"sabtu" << endl;
    //         break;
    //     case 7:
    //         cout <<"minggu" << endl;
    //         break;
    //     default:
    //         cout <<"inputan tidak valid";

    // }
    
    //switch range adalah yang memungkinkan Anda untuk menjalankan blok kode tertentu berdasarkan rentang nilai
    // switch (nilai)
    // {
    //     case 85 ... 100 : cout << "A" << endl; break;
    //     case 80 ... 84 : cout << "B+" << endl; break;
    //     case 75 ... 79 : cout << "B" << endl; break;
    //     case 70 ... 74 : cout << "C+" << endl; break;
    //     case 65 ... 69 : cout << "C" << endl; break;
    //     case 60 ... 64 : cout << "D" << endl; break;
    //     default : cout << "E" << endl; break;
        
    // }

    // ternary operator gabungan operasi kondisi dengan menggunakan operasi aritmatika
    // if (nilai % 2 == 0)
    // {
    //     cout <<"genap nih" << endl;
    // }
    // else
    // {
    //     cout << "ganjil sih" << endl;
    // }

    string checkNum = (nilai % 2 == 0) ? "genap" : "ganjil"; // versi sederhana dari statment operasi if else
    cout << nilai << " tuh bilangan" << checkNum << " sih" << endl;

}

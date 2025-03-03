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
#include<iostream>
using namespace std;

void penjumlahan(int a, int b){
    cout << a + b << endl;
}

void penjumlahanpointer (int *a, int *b){
     *a += *b;
    cout << *a << endl;
}

void doubleValue (int *a); {
    *a *= 2;
    cout << *a << endl;
}

int main(){
    system("cls"); // membersihkan terminal

    //Deklarasi pointer
    int number = 35; // variabel number bertipe integer
    int *pointer_number = &number;

    /*cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;*/

    // pointer Operation
    /* *pointer_number = 25;
    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;*/

    //Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num;
    /*cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[3] << endl;
    cout << "isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;*/

    /* *pointer_num += 5; // 6
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[3] << endl;
    cout << "isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;*/

    // Pointer in parameter
    /*int num1 = 5;
    int num2 = 7;
    penjumlahan (num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;
    penjumlahanpointer(&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;*/

    //Pointer in pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;

    // cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer score " << *ptr_pointer_score << " alamat memori ptr_score " << &pointer_score << endl;

    // dynamic pointer
    // int *ptr = new int;
    // *ptr = 30;
    // cout << "isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    // delete ptr; //deallocation
    // cout << "isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    //contoh
    int n;
    cout << "masukkan sebuah angka = ";
    cin >> n;

    doublevalue (&n);
    cout << "nilai angka setelah di kali 2 = " << n << endl;








}

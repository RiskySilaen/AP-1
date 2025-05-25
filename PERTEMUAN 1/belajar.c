#include <stdio.h>  // Header file untuk fungsi input/output standar
#include <conio.h>  // Header file untuk fungsi konsol (seperti getch)

int main() { 
    char nama[50];  // Array karakter untuk menyimpan nama (hanya 50 karakter)
    int nim;        // Variabel untuk menyimpan Nomor Induk Mahasiswa (NIM)
    char kom[1];    // Array karakter untuk menyimpan kom (hanya 1 karakter)
    float ip;       // Variabel untuk menyimpan Indeks Prestasi (IP)

    printf("hello world\n"); // Menampilkan pesan "hello world" ke layar

    printf("masukkan nama: "); // Meminta pengguna untuk memasukkan nama
    gets(nama); // Mengambil input string untuk nama

    printf("masukkan nim: "); // Meminta pengguna untuk memasukkan NIM
    scanf("%d", &nim); // Mengambil input integer untuk NIM

    getchar(); // Mengambil karakter newline yang tersisa setelah scanf

    printf("masukkan kom: "); // Meminta pengguna untuk memasukkan komponen
    gets(kom); // Mengambil input string untuk kom

    printf("masukkan ip: "); // Meminta pengguna untuk memasukkan IP
    scanf("%f", &ip); // Mengambil input float untuk IP

    /* untuk output */
    printf("nama: "); // Menampilkan untuk nama
    puts(nama); // Menampilkan nama yang dimasukkan
    printf("nim: %d\n", nim); // Menampilkan NIM yang dimasukkan
    printf("kom: "); // Menampilkan untuk kom
    puts(kom); // Menampilkan kom yang dimasukkan
    printf("ip: %f\n", ip); // Menampilkan IP yang dimasukkan

    printf("press any button to continue"); // Menampilkan pesan untuk melanjutkan

    return 0; // Mengembalikan 0 untuk menandakan bahwa program selesai dengan sukses
}

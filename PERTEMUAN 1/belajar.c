#include<stdio.h>//header untuk c
#include<conio.h>

int main()
{ 
    char nama[50];
    int nim;
    char kom[1];
    float ip;

    printf("hello world\n"); //fungsi keluaran pada c

    printf("masukkan nama: ");
    gets(nama); //gets string

    printf("masukkan nim: ");
    scanf("%d", &nim); //fungsi masukkan pada c

    getchar();

    printf("masukkan kom: ");
    gets(kom);
    printf("masukkan ip: ");
    scanf("%f", &ip);

    /* untuk output */
    printf("nama: ");
    puts(nama);
    printf("nim: %d\n", nim);
    printf("kom: ");
    puts(kom);
    printf("ip: %f\n", ip);

    printf("press any button to continue");

    

}
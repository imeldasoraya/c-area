#include <stdio.h>

int main () {
    //Deklarasi variabel
    int angka;

    //input
    printf("Masukkan angka: ");
    scanf ("%d",&angka);

    //proses
    angka = angka * 2;

    //output
    printf ("Hasil perkalian dengan 2: %d\n", angka);

    return 0;
}
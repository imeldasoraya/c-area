#include <stdio.h>
#define MAKS 256

int main() 
{
    int i, jumlah = 0;
    char teks[MAKS];
    puts("Masukkan suatu kalimat (maks 255 karakter)");
    puts("Komputer akan menghitung jumlah karakternya \n");
    fgets(teks, sizeof(teks), stdin);
    jumlah = 0;
    for (i = 0; teks[i]; i++) {
        jumlah++;
    }
    printf("\nJumlah karakter = %d\n", jumlah);
    return 0;
}
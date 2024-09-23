#include <stdio.h>
int main() 
{
    int n, angka, jumlah, total = 0;
    for (n = 1; n <= 5; ++n) {
        printf("Masukkan nilai dasar triangular-%d: ", n);
        scanf("%d", &angka);
        jumlah = 0;
        for (int i = 1; i <= angka; ++i) {
            jumlah = jumlah + i;
        }
        total = total + jumlah;
    }
    printf("Jumlah %d triangular adalah %d\n", n-1, total);
    return 0;
}
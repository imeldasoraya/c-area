#include <stdio.h>
int main() 
{
    char cobaLagi;
    do {
        int bilangan, digit, jumlah = 0;
        printf("Masukkan bilangan bulat positif = ");
        scanf("%d", &bilangan);
        printf("Jumlah angka dalam bilangan %d adalah ", bilangan);
        while (bilangan > 0) {
            digit = bilangan % 10;
            jumlah += digit;
            printf("%d", digit);
            if (bilangan >= 10) {
                printf("+");
            }
            bilangan /= 10;
        }
        printf(" = %d\n", jumlah);
        printf("Coba lagi? (y/n) ");
        scanf(" %c", &cobaLagi);
    } while (cobaLagi == 'y' || cobaLagi == 'Y');
    return 0;
}
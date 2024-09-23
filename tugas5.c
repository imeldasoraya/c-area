#include <stdio.h>
int main() 
{
    int banyakData, nilai, total = 0;
    printf("Masukkan banyaknya data nilai = ");
    scanf("%d", &banyakData);
    for (int i = 1; i <= banyakData; i++) {
        printf("Masukkan data nilai ke-%d = ", i);
        scanf("%d", &nilai);
        total += nilai;
    }
    double rataRata = (double)total / banyakData;
    printf("Jumlah seluruh nilai adalah = %d\n", total);
    printf("Nilai rata-rata nya adalah = %.0f\n", rataRata);
    return 0;
}
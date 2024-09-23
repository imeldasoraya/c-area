#include <stdio.h>
int main() 
{
    int jumlahData;
    printf("Masukkan jumlah data siswa: ");
    scanf("%d", &jumlahData);
    int nilai, minNilai, maxNilai, totalNilai = 0;
    for (int i = 1; i <= jumlahData; i++) {
        printf("Masukkan nilai siswa ke-%d: ", i);
        scanf("%d", &nilai);
        if (i == 1) {
            minNilai = maxNilai = nilai;
        } else {
            if (nilai < minNilai) {
                minNilai = nilai;
            }
            if (nilai > maxNilai) {
                maxNilai = nilai;
            }
        }
        totalNilai += nilai;
    }
    double rataRata = (double)totalNilai / jumlahData;
    printf("\nNilai minimal: %d\n", minNilai);
    printf("Nilai maksimal: %d\n", maxNilai);
    printf("Nilai rata-rata: %.0f\n", rataRata);
    return 0;
}
#include <stdio.h>
int main() 
{
    int jumlah, a;
    printf("Masukan jumlah siswa = ");
    scanf("%d", &jumlah);
    float bhs, mtk, digi, rata[jumlah];
    char string[jumlah][16]; 
    printf("\nNo.\tNama Mahasiswa\tBAHASA\tMATEMATIKA\tDIGITAL\n");
    for (a = 0; a < jumlah; a++) {
        printf("%2d\t", a + 1);
        scanf("%s%f%f%f", string[a], &bhs, &mtk, &digi);
        rata[a] = (bhs + mtk + digi) / 3;
    }
    printf("\nNo\tNama Mahasiswa\t\tRata rata\n");
    for (a = 0; a < jumlah; a++) {
        printf("%2d\t%s\t\t\t%.2f\n", a + 1, string[a], rata[a]);
    }
    return 0;
}
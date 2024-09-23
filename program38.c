#include <string.h>
#include <stdio.h>
int main() 
{
    char str1[50], str2[50], kar, *po;
    strcpy(str1, "0----------1----------2----------3");
    strcpy(str2, "-> KUCARI KAMU UNTUK KUTANGKAP");
    printf("Isi dari str1 = %s\n", str1);
    printf("Isi dari str2 = %s\n", str2);
    printf("\nPosisi huruf pada string dapat dicari ");
    printf("menggunakan rumus p = strchr(str2, kar)\n");
    kar = 'G';
    po = strchr(str2, kar);
    if (po != NULL) {
        int posisi = po - str2;
        printf("\nKarakter '%c' terletak pada kolom ke %d\n", kar, posisi);
    } else {
        printf("\nKarakter '%c' tidak ditemukan dalam string.\n", kar);
    }
    return 0;
}
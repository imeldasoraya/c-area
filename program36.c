#include <stdio.h>
#include <string.h>

int main() 
{
    char nama[50], jawab[15];
    static char salam[] = "\nPermisi...";
    static char tokoh_kartun[] = "Conan";
    puts("Masukkan nama anda: ");
    gets(nama);
    puts(" ");

    puts("\nSiapakah nama tokoh kartun yang merupakan detektif cilik? ");
    gets(jawab);
    puts(" ");

    if (strlen(salam) + strlen(nama) <= 50)
        strcat(nama, salam);
    puts(nama);
    if (strcmp(tokoh_kartun, jawab) == 0)
        puts("\nJawaban anda benar! Hebat!\n");
    else
        printf("\nJawaban anda salah!\nJawabannya adalah %s\n", tokoh_kartun);
    puts(" ");
    return 0;
}
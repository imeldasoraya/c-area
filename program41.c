#include <string.h>
#include <stdio.h>
#include <conio.h>
int main() 
{
    char kalimat[50];
    printf("Masukkan kata/kalimat: ");
    scanf("%s", kalimat);
    puts(" ");
    printf("\nKata/kalimat sebelum strrev(): \n");
    printf("%s\n\n", kalimat);
    strrev(kalimat);
    printf("\nKata/kalimat setelah strrev(): \n");
    printf("%s\n", kalimat);
    getch();
    return 0;
}
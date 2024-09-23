#include <stdio.h>
#include <string.h>
int main() 
{
    char a[50], b[50];
    int d, n, m;
    printf("Masukkan String sumber = ");
    gets(a);
    printf("Masukkan string yang akan disisipkan = ");
    gets(b);
    printf("Menyisipkan karakter setelah ke ");
    scanf("%d", &d);
    for (n = 0; n < strlen(a); n++) {
        printf("%c", a[n]);
        if (n == d - 1) {
            for (m = 0; m < strlen(b); m++) {
                printf("%c", b[m]);
            }
        }
    }
    printf("\n");
    return 0;
}
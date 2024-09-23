#include <windows.h>
#include <stdio.h>
void gotoxy(int x, int y);
int main() {
    int a, b, c, d;   
    printf("Masukkan jumlah tabel faktorial yang diinginkan (1-15) = ");
    scanf("%d", &d);
    printf("NO  Hasil Faktorial\n");
    for (a = 1; a <= d; a++) {
        c = 1;
        printf("%2d! = ", a);
        for (b = a; b > 0; b--) {
            printf("%d", b);
            c *= b;
            if (b != 1) {
                printf(" x ");
            }
        }
        printf(" = %d\n", c);
    }
    return 0;
}
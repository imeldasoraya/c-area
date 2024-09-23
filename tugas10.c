#include <stdio.h>
int main() 
{
    int n, i, a;
    printf("Menampilkan bilangan prima dari 1 sampai n. Masukkan nilai n: ");
    scanf("%d", &n);
    int p[n+1]; 
    for (i = 2; i <= n; i++) {
        p[i] = 1;
    }
    for (i = 2; i * i <= n; i++) {
        if (p[i]) {
            for (a = 2; a * i <= n; a++) {
                p[i * a] = 0;
            }
        }
    }
    printf("Bilangan prima antara 1 dan %d adalah:\n", n);
    for (i = 2; i <= n; i++) {
        if (p[i]) {
            printf("%d ", i);
        }
    } 
    printf("\n");
    return 0;
}
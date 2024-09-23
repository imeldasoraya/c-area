#include<stdio.h>
#include<string.h>
int main() 
{
    int a, b, c, d;
    char *pens = "Politeknik Negeri Banjarmasin";
    x,y = 56,10;
    d = strlen(pens) - 1;
    for (a = 0; a <= strlen(pens); a++) {
        for (b = d; b >= 1; b--) {
            printf(" ");
        }
        if (pens[a]) {
            for (c = 0; c <= a; c++) {
                printf("%c", pens[c]);
            }
        }
        printf("\n");
        d--;
    }
    return 0;
}
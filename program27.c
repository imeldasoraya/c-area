#include <stdio.h>
int main() 
{
    int n, jumlah;
    jumlah = 0;
    for (n = 1; n <= 200; n=n+1) 
    {
        jumlah = jumlah + 1;
    }
    printf("Jumlah 200 triangular adalah %d\n", jumlah);
    return 0;
}
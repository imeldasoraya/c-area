#include <stdio.h>
int main() 
{
    int data, a, b, z;
    printf("Masukkan jumlah data: ");
    scanf("%d", &data);
    int nilai[data];
    for (a = 0; a < data; a++) {
        printf("Data ke-%d: ", a + 1);
        scanf("%d", &nilai[a]);
    }
    for (a = 0; a < data - 1; a++) {
        for (b = 0; b < data - a - 1; b++) {
            if (nilai[b] < nilai[b + 1]) {
                z = nilai[b];
                nilai[b] = nilai[b + 1];
                nilai[b + 1] = z;
            }
        }
    }
    printf("Data setelah diurutkan (Ascending):\n");
    for (a = 0; a < data; a++) {
        printf("%d ", nilai[a]);
    }
    printf("\n");
    return 0;
}
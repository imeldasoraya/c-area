#include <stdio.h>
int main() 
{
    int n = 10; 
    printf("x\t");
    for (int i = 1; i <= n; i++) {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        printf("%d\t", i);
        for (int j = 1; j <= n; j++) {
            printf("%d\t", i * j); }
        printf("\n");
    }
    return 0;
}
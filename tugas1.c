#include <stdio.h>
int main() 
{
    int n = 5; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("1\t");
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }
    return 0;
}
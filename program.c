#include <stdio.h>

int main() {
    int a, b;
    float c = 0;

    printf("Enter the number of iterations: ");
    scanf("%d", &a);

    printf("\n\n|NO|Celcius|Farenheit|Reamur|Kelvin\n");

    for (b = 1; b <= a; b++) {
        printf("%2d", b);
        printf("|%-7.2f|", c);
        c = c * 9 / 5 + 32;
        printf("%-9.2f|", c);
        c = (c - 32) * 4 / 9;
        printf("%-6.2f|", c);
        c = c * 5 / 4 + 273;
        printf("%6.2f|\n", c);
        c -= 273;  // Corrected syntax
    }

    return 0;
}
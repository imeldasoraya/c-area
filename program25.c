#include <stdio.h>
float minimum(float x, float y)
{
    if (x < y)
        return x;
    else
        return y;
}

void main()
{
    float a, b;
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("\nBilangan terkecil antara %g dan %g adalah %g\n\n", a, b, minimum(a, b));
}
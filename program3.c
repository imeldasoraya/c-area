#include <stdio.h>
int main()
{
int x, y;

printf("Masukkan nilai x = ");
scanf("%d", &x);
printf("Masukkan nilai y = ");
scanf("%d", &y);

printf("\nNilai dari %d > %d adalah %d\n", x, y, x > y);
printf("\nNilai dari %d < %d adalah %d\n", x, y, x < y);
printf("\nNilai dari %d || %d adalah %d\n", x, y, x || y);
printf("\nNilai dari %d && %d adalah %d\n", x, y, x && y);
printf("\nNilai dari !0 adalah %d\n", !0);
printf("\nNilai dari !1 adalah %d\n", !1);
printf("\nNilai dari !%d adalah %d\n", x, !x);
printf("\nNilai dari !%d adalah %d\n", y, !y);
getch();
}

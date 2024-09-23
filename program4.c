#include <stdio.h>
int main()
{
int x, y, n, m;

printf("Masukkan nilai x = "); 
scanf("%d", &x);
printf("Masukkan nilai y = "); 
scanf("%d", &y);

n=(x < 10) && (y > 10);
m=(x > 10) || (y < 10);
printf("\n Nilai dari %d <10 && %d > 10 adalah = %d", x, y, n);
printf("\n Nilai dari %d >30 || %d < 70 adalah = %d", x, y, m);
getch();
}

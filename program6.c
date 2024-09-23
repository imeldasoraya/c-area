#include  <stdio.h>
int main()
{
int a, b, c, d;

printf("Masukkan nilai a = "); scanf("%d", &a);
printf("Masukkan nilai b = "); scanf("%d", &b);
printf("Masukkan nilai c = "); scanf("%d", &c);
printf("Masukkan nilai d = "); scanf("%d", &d );

printf("\n Nilai a dibanding b adalah a lebih");
printf("\n %s dari pada b", (a>b)?"BESAR":"kecil");
printf("\n Nilai c dibanding d adalah c lebih");
printf("\n %s dari pada d", (c<d)?"kecil":"BESAR");

getch();
}

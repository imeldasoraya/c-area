#include <stdio.h>
void main()
{
int fibo[100], i, jumlah;
fibo[0] = 0;
fibo[1] = 1;
printf("Masukkan jumlah deret fibonaci = ");
scanf("%d", &jumlah);
for(i=2; i<jumlah; i++){
fibo[i] = fibo[i-1] + fibo[i-2];
printf("%5d", fibo[i]);
}
printf("\n\n");
}

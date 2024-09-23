#include <stdio.h>

int main()
{
int minim,nilai1,nilai2;
printf ("Masukkan 2 buah nilai \n");
scanf ("%d %d",&nilai1, &nilai2);
if (nilai1 < nilai2) 
minim = nilai1;
else
minim = nilai2;
printf ("Nilai minimalnya adalah :%d\n",minim);

return 0;
}
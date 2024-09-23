#include <stdio.h>
void main()
{
static int nilai_nilai[10] = {0, 1, 4, 9, 16};
/* nilai biasanya diisi dengan nol dengan sendirinya */
int i;
for(i=0; i<10; i++){
printf("nilai_nilai[%d] = %d\n", i, nilai_nilai[i]);
}
}
#include<stdio.h>
main()
{
int i =0;
for(;;){
i++;
printf("\n Proses ke-%d sukses!\n", i);
if(i==10){
printf("\n Proses segera dihentikan harap maklum!");
break;
}
}
}

#include<stdio.h>
main()
{
    int i;
    for(i=1;i<10;i++){
        if(i==5){
            printf("\n\t Proses ke-%d dibatalkan\n",i);
            printf("\t Harap maklum!\n");
            continue;
        }
    }
}
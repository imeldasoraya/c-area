#include <stdio.h>
int fpb(int, int);
int main()
{
    int hasil;

    hasil = fpb(150, 35);
    printf("FPB dari 150 dan 35 adalah %d\n", hasil);
    hasil = fpb(1026, 405);
    printf("FPB dari 1026 dan 405 adalah %d\n", hasil);
    printf("FPB dari 83 dan 240 adalah %d\n", fpb(83, 240));

    return 0;  
}

int fpb(int u, int v)
{
    int temp;
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}
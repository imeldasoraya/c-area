#include <stdio.h>
void fpb(int, int);
int main()
{
    fpb(150, 35);
    fpb(1026, 405);
    fpb(83, 240);

    return 0;
}

void fpb(int u, int v)
{
    int temp;
    printf("FPB dari %d dan %d adalah ", u, v);
    
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("%d\n", u);
}
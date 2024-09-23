#include<stdio.h>
main()
{
int bil;
for(bil = 1; bil <= 15; bil += 3)
printf("%d\n", bil);
printf("\n");
bil = 1;
/*while (bil <= 15)
{
printf("%d\n", bil);
bil = bil + 3;
}
printf("\n");
bil = 1;
do {
printf("%d\n", bil);
bil = bil + 3;
} while (bil <= 15);
}
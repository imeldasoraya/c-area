#include <stdio.h>
void main()
{
float x[] = {5,3,7}, total = 0;
int i;
for (i=0;i<=2;i++)
total = total + x[i];
printf ("Total = %f\n",total);
}
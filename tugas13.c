#include <stdio.h>
#include <string.h>
int main() 
{
    char a[50], b[50];
    printf("Masukkan kalimat = ");
    gets(a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(b, a) == 0) {
        printf("Merupakan Palindrom\n");
    } else {
        printf("Merupakan bukan Palindrom\n");
    }
    return 0;
}
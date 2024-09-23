#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    char str1[30], str2[30], str3[30];
    char str4[30], str5[30], str6[30];
    strcpy(str1, "Dont dulu bekerja");
    strcpy(str2, "Dont dulu bekerja");
    strcpy(str3, "Dont dulu bekerja");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    printf("\nTekan Enter untuk melihat hasilnya!\n");
    getchar(); 
    strncpy(str4, str3, 4);
    str4[4] = '\0';
    strncpy(str5, str1 + 6, 5);
    str5[5] = '\0';
    strncpy(str6, str2, 5);
    str6[5] = '\0';
    strcat(str4, str5);
    strcat(str4, str6);
    strncpy(str6, str3 + 18, 3);
    str6[3] = '\0';
    strcat(str4, str6);
    printf("\n\nIsi dari str4 = %s\n", str4);
    getchar(); 
    return 0;
}
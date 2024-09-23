#include<stdio.h>
#include<string.h>
int alfabet(char c) 
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}
int hitung_huruf(char string[]) {
    int i, huruf_terhitung = 0;
    for (i = 0; string[i] != '\0'; ++i)
        if (alfabet(string[i]))
            ++huruf_terhitung;
    return huruf_terhitung;
}
int main() {
    int hitung;
    char teks1[50];
    printf("Masukkan kalimat: ");
    gets(teks1);
    printf("Kalimat: %s\n", teks1);  
    hitung = hitung_huruf(teks1);
    printf("Terhitung ada %d karakter huruf dan angka pada teks di atas!\n", hitung);
    return 0;
}
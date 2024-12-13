#include <stdio.h>
#include <ctype.h>

int main() {
    // Khai b�o chu?i
    char chuoi[] = "Hello my gmail is test123@gmail.com";
    
    // Kh?i t?o c�c bi?n �?m
    int so_chu_cai = 0, so_chu_so = 0, so_ky_tu_dac_biet = 0;

    // Duy?t qua t?ng k? t? trong chu?i
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) { // Ki?m tra n?u l� ch? c�i
            so_chu_cai++;
        } else if (isdigit(chuoi[i])) { // Ki?m tra n?u l� ch? s?
            so_chu_so++;
        } else if (!isspace(chuoi[i])) { // Ki?m tra n?u kh�ng ph?i kho?ng tr?ng
            so_ky_tu_dac_biet++;
        }
    }

    // In k?t qu?
    printf("So ky tu la chu cai: %d\n", so_chu_cai);
    printf("So ky tu la chu so: %d\n", so_chu_so);
    printf("So ky tu dac biet: %d\n", so_ky_tu_dac_biet);

    return 0;
}


#include <stdio.h>
#include <string.h>

void xoa_ky_tu(char *chuoi, char ky_tu) {
    int i, j = 0;
    int do_dai = strlen(chuoi);

    // Duy?t qua t?ng k? t? trong chu?i
    for (i = 0; i < do_dai; i++) {
        // Ch? gi? l?i k? t? kh�ng kh?p v?i k? t? c?n x�a
        if (chuoi[i] != ky_tu) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0'; // K?t th�c chu?i
}

int main() {
    char chuoi[100];
    char ky_tu;

    // Khai b�o chu?i
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // X�a k? t? xu?ng d?ng n?u c�
    chuoi[strcspn(chuoi, "\n")] = '\0';

    // Nh?p k? t? c?n x�a
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ky_tu);

    // G?i h�m x�a k? t?
    xoa_ky_tu(chuoi, ky_tu);

    // In k?t qu?
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ky_tu, chuoi);

    return 0;
}


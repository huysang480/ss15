#include <stdio.h>
#include <string.h>

void xoa_ky_tu(char *chuoi, char ky_tu) {
    int i, j = 0;
    int do_dai = strlen(chuoi);

    // Duy?t qua t?ng k? t? trong chu?i
    for (i = 0; i < do_dai; i++) {
        // Ch? gi? l?i k? t? không kh?p v?i k? t? c?n xóa
        if (chuoi[i] != ky_tu) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0'; // K?t thúc chu?i
}

int main() {
    char chuoi[100];
    char ky_tu;

    // Khai báo chu?i
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // Xóa k? t? xu?ng d?ng n?u có
    chuoi[strcspn(chuoi, "\n")] = '\0';

    // Nh?p k? t? c?n xóa
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ky_tu);

    // G?i hàm xóa k? t?
    xoa_ky_tu(chuoi, ky_tu);

    // In k?t qu?
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ky_tu, chuoi);

    return 0;
}


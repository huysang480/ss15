#include <stdio.h>
#include <ctype.h>

void viet_hoa_chu_cai_dau(char *chuoi) {
    int i = 0;
    int la_dau_tu = 1; // Bi?n �? ki?m tra v? tr� �?u t?

    // Duy?t qua t?ng k? t? trong chu?i
    while (chuoi[i] != '\0') {
        if (la_dau_tu && isalpha(chuoi[i])) { // Vi?t hoa ch? c�i �?u t?
            chuoi[i] = toupper(chuoi[i]);
            la_dau_tu = 0;
        } else if (isspace(chuoi[i])) { // G?p kho?ng tr?ng th? chuy?n sang �?u t? m?i
            la_dau_tu = 1;
        }
        i++;
    }
}

int main() {
    char chuoi[100];

    // Nh?p chu?i t? ng�?i d�ng
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // X�a k? t? xu?ng d?ng n?u c�
    chuoi[strcspn(chuoi, "\n")] = '\0';

    // G?i h�m �? vi?t hoa ch? c�i �?u
    viet_hoa_chu_cai_dau(chuoi);

    // In k?t qu?
    printf("Chuoi sau khi viet hoa: %s\n", chuoi);

    return 0;
}


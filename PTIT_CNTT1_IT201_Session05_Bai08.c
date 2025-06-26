#include <stdio.h>
#include <string.h>

int stringToInt(char *str, int i, int len, int *num) {
    if (i == len) return 1;

    if (str[i] < '0' || str[i] > '9') return 0;

    *num = *num * 10 + (str[i] - '0');
    return stringToInt(str, i + 1, len, num);
}

int main() {
    char str[100];
    printf("Nhap chuoi so: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int num = 0;
    if (stringToInt(str, 0, strlen(str), &num)) {
        printf("So: %d\n", num);
    } else {
        printf("Khong hop le\n");
    }

    return 0;
}

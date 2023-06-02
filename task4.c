#include <stdio.h>

void changeDigits(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '8') {
            str[i]++;
        } else if (str[i] == '9') {
            str[i] = '0';
        }
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    changeDigits(str);
    printf("%s\n", str);
    return 0;
}
#include <stdio.h>

int main() {
    int prev, curr, count = 0;
    scanf("%d", &prev);
    while (scanf("%d", &curr)) {
        if (curr == 0) break;
        if (curr > prev * 2) count++;
        prev = curr;
    }
    printf("%d\n", count);
    return 0;
}

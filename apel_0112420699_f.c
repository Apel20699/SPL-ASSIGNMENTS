
#include <stdio.h>

int main() {
    int N, remainder;
    int banknotes[7] = {100, 50, 20, 10, 5, 2, 1};
    int count[7] = {0};

    scanf("%d", &N);

    printf("%d\n", N);

    remainder = N;
    for (int i = 0; i < 7; i++) {
        count[i] = remainder / banknotes[i];
        remainder %= banknotes[i];
    }

    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", count[i], banknotes[i]);
    }

    return 0;
}

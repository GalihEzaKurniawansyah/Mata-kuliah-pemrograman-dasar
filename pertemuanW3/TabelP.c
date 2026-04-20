#include <stdio.h>

int main() {
    int n;
    printf("Ingin melihat tabel perkalian berapa? ");
    scanf("%d", &n);

    printf("\n--- Tabel Perkalian %d ---\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
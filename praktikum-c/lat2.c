#include <stdio.h>

int main() {
    float sisi, keliling;

    printf("=== Program Hitung Keliling Persegi ===\n");
    printf("Masukkan panjang sisi: ");
    scanf("%f", &sisi);

    // Rumus: Keliling = 4 * sisi
    keliling = 4 * sisi;

    printf("Keliling persegi dengan sisi %.2f adalah: %.2f\n", sisi, keliling);

    return 0;
}
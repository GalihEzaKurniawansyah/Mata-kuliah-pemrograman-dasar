#include <stdio.h>

int main() {
    float jari_jari, luas;
    const float PI = 3.14159;

    printf("=== Program Luas Lingkaran ===\n");
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    // Menghitung luas
    luas = PI * jari_jari * jari_jari;

    printf("Luas lingkaran adalah: %.2f\n", luas);

    return 0;
}
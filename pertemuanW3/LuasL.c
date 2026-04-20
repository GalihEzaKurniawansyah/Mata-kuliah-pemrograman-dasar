#include <stdio.h>

// Definisi fungsi hitungLuas
float hitungLuas(float r) {
    float pi = 3.14159;
    return pi * r * r;
}

int main() {
    float jariJari, luas;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memanggil fungsi
    luas = hitungLuas(jariJari);

    printf("Luas lingkaran dengan jari-jari %.2f adalah: %.2f\n", jariJari, luas);

    return 0;
}
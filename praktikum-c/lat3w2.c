#include <stdio.h>

int main() {
    float meter, cm;

    printf("=== Konversi Meter ke CM ===\n");
    printf("Masukkan jarak dalam meter: ");
    scanf("%f", &meter);

    // Proses konversi: m * 100
    cm = meter * 100;

    printf("%.2f meter sama dengan %.2f cm\n", meter, cm);

    return 0;
}
#include <stdio.h>

int main() {
    int angka[10];
    int terbesar;

    printf("Latihan 1: Mencari Angka Terbesar\n");
    printf("----------------------------------\n");

    // 1. Input 10 angka ke dalam array
    for (int i = 0; i < 10; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    // 2. Inisialisasi 'terbesar' dengan elemen pertama array
    terbesar = angka[0];

    // 3. Bandingkan dengan elemen lainnya
    for (int i = 1; i < 10; i++) {
        if (angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }

    // 4. Tampilkan hasil
    printf("\nAngka terbesar yang Anda masukkan adalah: %d\n", terbesar);

    return 0;
}
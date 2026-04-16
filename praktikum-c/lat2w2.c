#include <stdio.h>

int main() {
    int tahun_lahir, tahun_sekarang, umur;

    // Anda bisa mengganti tahun_sekarang secara manual atau input
    tahun_sekarang = 2026; 

    printf("=== Program Hitung Umur ===\n");
    printf("Masukkan tahun lahir Anda: ");
    scanf("%d", &tahun_lahir);

    umur = tahun_sekarang - tahun_lahir;

    printf("Umur Anda pada tahun %d adalah %d tahun.\n", tahun_sekarang, umur);

    return 0;
}
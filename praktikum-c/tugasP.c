#include <stdio.h>

int main() {
    char nama[50];
    int nilai;

    // 1. Meminta input nama mahasiswa
    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);

    // 2. Meminta input nilai
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    printf("\n--- Output ---\n");
    
    // 3. Menampilkan nilai tersebut
    printf("Nama : %s", nama);
    printf("Nilai : %d\n", nilai);

    return 0;
}
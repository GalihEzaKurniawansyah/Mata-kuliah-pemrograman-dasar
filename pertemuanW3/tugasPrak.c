#include <stdio.h>

// Fungsi untuk menentukan grade berdasarkan nilai
// Kriteria: A (>=85), B (>=75), C (>=60), D (>=45), E (<45)
char tentukanGrade(int nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 75) return 'B';
    else if (nilai >= 60) return 'C';
    else if (nilai >= 45) return 'D';
    else return 'E';
}

int main() {
    int jumlahMahasiswa, i, nilai;
    char grade;

    printf("=== Program Input Nilai Mahasiswa ===\n");
    
    // 4. Perulangan: Meminta jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    for (i = 1; i <= jumlahMahasiswa; i++) {
        printf("\nMahasiswa ke-%d\n", i);
        
        // 1. Input nilai
        printf("Masukkan nilai (0-100): ");
        scanf("%d", &nilai);

        // Validasi sederhana agar nilai tetap di range 0-100
        if (nilai < 0 || nilai > 100) {
            printf("Nilai tidak valid! Silakan masukkan antara 0-100.\n");
            i--; // Mengulang input untuk mahasiswa yang sama
            continue;
        }

        // 2 & 3. Tentukan grade menggunakan fungsi
        grade = tentukanGrade(nilai);

        printf("Hasil: Nilai %d mendapatkan Grade %c\n", nilai, grade);
    }

    printf("\nSelesai. Semua data telah diproses.\n");
    return 0;
}
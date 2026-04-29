#include <stdio.h>
#include <stdlib.h>

struct Karyawan {
    int id;
    char nama[50];
    char jabatan[30];
};

int main() {
    int n;

    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &n);

    // Gunakan malloc untuk alokasi struct
    struct Karyawan *listKaryawan = (struct Karyawan*) malloc(n * sizeof(struct Karyawan));

    if (listKaryawan == NULL) {
        printf("Memori tidak cukup!\n");
        return 1;
    }

    // Input data
    for(int i = 0; i < n; i++) {
        printf("\nData Karyawan ke-%d\n", i + 1);
        printf("ID      : ");
        scanf("%d", &listKaryawan[i].id);
        printf("Nama    : ");
        scanf(" %[^\n]s", listKaryawan[i].nama);
        printf("Jabatan : ");
        scanf(" %[^\n]s", listKaryawan[i].jabatan);
    }

    // Tampilkan semua data
    printf("\n--- DAFTAR KARYAWAN ---\n");
    printf("%-5s | %-20s | %-15s\n", "ID", "Nama", "Jabatan");
    printf("--------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("%-5d | %-20s | %-15s\n", 
               listKaryawan[i].id, 
               listKaryawan[i].nama, 
               listKaryawan[i].jabatan);
    }

    free(listKaryawan);
    return 0;
}
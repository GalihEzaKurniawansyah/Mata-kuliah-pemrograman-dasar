#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[50];
    float nilai;
};

int main() {
    int n;
    float total = 0;

    printf("Input banyak mahasiswa: ");
    scanf("%d", &n);

    // Alokasi memori menggunakan pointer dan malloc
    struct Mahasiswa *data = (struct Mahasiswa*) malloc(n * sizeof(struct Mahasiswa));

    for(int i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama : ");
        scanf(" %[^\n]s", (data + i)->nama); // Menggunakan pointer notation
        printf("Nilai: ");
        scanf("%f", &(data + i)->nilai);
        
        total += (data + i)->nilai;
    }

    printf("\n--- Hasil Data ---\n");
    printf("Rata-rata Nilai: %.2f\n", total / n);

    free(data); // Bebaskan memori
    return 0;
}
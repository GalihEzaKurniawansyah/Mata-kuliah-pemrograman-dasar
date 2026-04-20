#include <stdio.h>

int main() {
    int angka;
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &angka);

    if (angka % 2 == 0) {
        printf("%d adalah bilangan GENAP.\n", angka);
    } else {
        printf("%d adalah bilangan GANJIL.\n", angka);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game(int max_range) {
    int secret_number, guess, attempts = 0;
    int best_score = 9999;
    FILE *file;

    // Baca best score dari file
    file = fopen("best_score.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &best_score);
        fclose(file);
    }

    secret_number = (rand() % max_range) + 1;
    printf("\nTebak angka antara 1 sampai %d!\n", max_range);

    do {
        printf("Masukkan tebakan: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) printf("Terlalu besar!\n");
        else if (guess < secret_number) printf("Terlalu kecil!\n");
        else {
            printf("Selamat! Anda menebak dalam %d kali percobaan.\n", attempts);
            if (attempts < best_score) {
                printf("REKOR BARU!\n");
                file = fopen("best_score.txt", "w");
                fprintf(file, "%d", attempts);
                fclose(file);
            }
        }
    } while (guess != secret_number);
}

int main() {
    int choice;
    srand(time(0));

    printf("Pilih Level:\n1. Easy (1-10)\n2. Medium (1-100)\n3. Hard (1-1000)\nPilihan: ");
    scanf("%d", &choice);

    if (choice == 1) play_game(10);
    else if (choice == 2) play_game(100);
    else if (choice == 3) play_game(1000);
    else printf("Pilihan tidak valid.\n");

    return 0;
}

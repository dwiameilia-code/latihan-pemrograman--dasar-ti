// game_tebak_angka_upgrade.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 1, max, secret, guess;
    int attempts, max_attempts;
    char playAgain;

    srand(time(NULL));

    do {
        int level;

        printf("\n=== GAME TEBAK ANGKA ===\n");
        printf("Pilih level:\n");
        printf("1. Mudah (1-50, 10 percobaan)\n");
        printf("2. Sedang (1-100, 7 percobaan)\n");
        printf("3. Sulit (1-500, 5 percobaan)\n");
        printf("Pilihan: ");
        scanf("%d", &level);

        switch(level) {
            case 1:
                max = 50;
                max_attempts = 10;
                break;
            case 2:
                max = 100;
                max_attempts = 7;
                break;
            case 3:
                max = 500;
                max_attempts = 5;
                break;
            default:
                printf("Level tidak valid, otomatis Sedang.\n");
                max = 100;
                max_attempts = 7;
        }

        secret = rand() % max + 1;
        attempts = 0;

        printf("\nTebak angka antara %d - %d\n", min, max);

        while(attempts < max_attempts) {
            printf("Masukkan tebakan: ");
            scanf("%d", &guess);

            attempts++;

            if(guess == secret) {
                printf("Benar! Kamu menang dalam %d percobaan.\n", attempts);
                break;
            }

            if(guess < secret)
                printf("Terlalu kecil!\n");
            else
                printf("Terlalu besar!\n");

            // Petunjuk panas/dingin
            if(abs(guess - secret) <= 5)
                printf("Panas! Sudah dekat.\n");
            else
                printf("Dingin! Masih jauh.\n");

            printf("Sisa percobaan: %d\n", max_attempts - attempts);
        }

        if(guess != secret)
            printf("Game Over! Angka yang benar: %d\n", secret);

        printf("\nMain lagi? (y/n): ");
        scanf(" %c", &playAgain);

    } while(playAgain == 'y' || playAgain == 'Y');

    printf("Terima kasih sudah bermain!\n");

    return 0;
}
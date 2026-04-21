#include <stdio.h>

// Fungsi menentukan grade
char tentukanGrade(int nilai) {
    if (nilai >= 85)
        return 'A';
    else if (nilai >= 75)
        return 'B';
    else if (nilai >= 65)
        return 'C';
    else if (nilai >= 50)
        return 'D';
    else
        return 'E';
}

int main() {
    int jumlah, i, nilai;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);

    // Perulangan untuk banyak mahasiswa
    for(i = 1; i <= jumlah; i++) {
        printf("\nMahasiswa ke-%d\n", i);

        printf("Masukkan nilai: ");
        scanf("%d", &nilai);

        printf("Grade: %c\n", tentukanGrade(nilai));
    }

    return 0;
}
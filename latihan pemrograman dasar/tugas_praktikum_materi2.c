#include <stdio.h>

int main() {
    char nama[] = "Hasan";
    float nilai_tugas = 80;
    float nilai_uts = 90;
    float rata_rata;

    // Menghitung rata-rata
    rata_rata = (nilai_tugas + nilai_uts) / 2;

    // Output
    printf("Nama: %s\n", nama);
    printf("Rata-rata nilai: %.0f\n", rata_rata);

    return 0;
}
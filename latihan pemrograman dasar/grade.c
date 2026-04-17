#include <stdio.h>

int main() {
    int n;
    float tugas, uts, uas, nilai;
    float total = 0;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nMahasiswa %d\n", i+1);

        printf("Tugas UTS UAS: ");
        scanf("%f %f %f", &tugas, &uts, &uas);

        nilai = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);
        total += nilai;

        printf("Nilai akhir: %.2f\n", nilai);

        if (nilai >= 85)
            printf("Grade: A\n");
        else if (nilai >= 75)
            printf("Grade: B\n");
        else if (nilai >= 60)
            printf("Grade: C\n");
        else
            printf("Grade: D\n");
    }

    printf("\nRata-rata kelas: %.2f\n", total / n);

    return 0;
}
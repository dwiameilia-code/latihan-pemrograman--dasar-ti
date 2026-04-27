#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[50];
    float tugas, uts, rata;
};

int main() {
    int n, i;

    printf("Jumlah mahasiswa: ");
    scanf("%d", &n);

    struct Mahasiswa *mhs = malloc(n * sizeof(struct Mahasiswa));

    for(i = 0; i < n; i++) {
        printf("\nData ke-%d\n", i+1);

        printf("Nama: ");
        scanf("%s", mhs[i].nama);

        printf("Nilai tugas: ");
        scanf("%f", &mhs[i].tugas);

        printf("Nilai UTS: ");
        scanf("%f", &mhs[i].uts);

        mhs[i].rata = (mhs[i].tugas + mhs[i].uts) / 2;
    }

    printf("\nHasil:\n");
    for(i = 0; i < n; i++) {
        printf("%s - Rata-rata: %.2f\n", mhs[i].nama, mhs[i].rata);
    }

    free(mhs);
    return 0;
}
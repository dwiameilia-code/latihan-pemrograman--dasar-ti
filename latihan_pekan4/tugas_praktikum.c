#include <stdio.h>
#include <stdlib.h>

struct Karyawan {
    char nama[50];
    int umur;
    float gaji;
};

int main() {
    int n, i;

    printf("Jumlah karyawan: ");
    scanf("%d", &n);

    struct Karyawan *kar = malloc(n * sizeof(struct Karyawan));

    for(i = 0; i < n; i++) {
        printf("\nData ke-%d\n", i+1);

        printf("Nama: ");
        scanf("%s", kar[i].nama);

        printf("Umur: ");
        scanf("%d", &kar[i].umur);

        printf("Gaji: ");
        scanf("%f", &kar[i].gaji);
    }

    printf("\nData karyawan:\n");
    for(i = 0; i < n; i++) {
        printf("%s - Umur: %d - Gaji: %.2f\n",
               kar[i].nama, kar[i].umur, kar[i].gaji);
    }

    free(kar);
    return 0;
}
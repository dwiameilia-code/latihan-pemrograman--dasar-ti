#include <stdio.h>

int main() {
    int tahun_lahir, umur, tahun_sekarang = 2026;

    printf("Masukkan tahun lahir: ");
    scanf("%d", &tahun_lahir);

    umur = tahun_sekarang - tahun_lahir;

    printf("Umur anda = %d tahun\n", umur);

    return 0;
}
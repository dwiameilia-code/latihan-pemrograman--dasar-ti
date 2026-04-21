#include <stdio.h>

// Fungsi menghitung luas lingkaran
float luasLingkaran(float r) {
    return 3.14 * r * r;
}

int main() {
    float jariJari, luas;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    luas = luasLingkaran(jariJari);

    printf("Luas lingkaran = %.2f\n", luas);

    return 0;
}
#include <stdio.h>

int main()
{
    float r, luas;
    const float phi = 3.14;

    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    luas = phi * r * r;

    printf("Luas lingkaran = %.2f\n", luas);

    return 0;
}
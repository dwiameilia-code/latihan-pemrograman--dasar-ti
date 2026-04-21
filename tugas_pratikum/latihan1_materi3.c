#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("%d adalah bilangan Genap\n", bilangan);
    } else {
        printf("%d adalah bilangan Ganjil\n", bilangan);
    }

    return 0;
}
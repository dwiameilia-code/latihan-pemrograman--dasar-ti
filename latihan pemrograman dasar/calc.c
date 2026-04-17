#include <stdio.h>

int main() {
    char op;
    float a, b;
    int running = 1;

    printf("=== Kalkulator C ===\n");

    while (running) {
        printf("\nMasukkan operasi (+, -, *, /) atau q untuk keluar:\n");

        scanf(" %c", &op);

        if (op == 'q') {
            running = 0;
            break;
        }

        printf("Masukkan angka (format: a b): ");
        scanf("%f %f", &a, &b);

        switch (op) {
            case '+':
                printf("Hasil: %.2f\n", a + b);
                break;
            case '-':
                printf("Hasil: %.2f\n", a - b);
                break;
            case '*':
                printf("Hasil: %.2f\n", a * b);
                break;
            case '/':
                if (b != 0)
                    printf("Hasil: %.2f\n", a / b);
                else
                    printf("Error: pembagian 0\n");
                break;
            default:
                printf("Operator tidak valid\n");
        }
    }

    printf("Program selesai\n");
    return 0;
}
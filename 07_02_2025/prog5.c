#include <stdio.h>

int main() {
    int nota;

    printf("Digite uma nota de 0 a 10: ");
    scanf("%d", &nota);

    if (nota >= 9 && nota <= 10) {
        printf("Excelente!\n");
    } else if (nota >= 7 && nota <= 8) {
        printf("Bom!\n");
    } else if (nota >= 5 && nota <= 6) {
        printf("Regular.\n");
    } else if (nota >= 0 && nota <= 4) {
        printf("Insuficiente.\n");
    } else {
        printf("Erro: Nota fora da faixa valida!\n");
    }

    return 0;
}
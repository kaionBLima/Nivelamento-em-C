#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d e: %d\n", numero, fatorial);
    return 0;
}
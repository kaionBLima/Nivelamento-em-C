#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    do {
        printf("Digite um numero ou um numero negativo para sair: ");
        scanf("%d", &numero);
        if (numero >= 0) {
            soma += numero;
            contador++;
        }
    } while (numero >= 0);

    if (contador > 0) {
        printf("A media dos numeros e: %.2f\n", (float)soma / contador);
    } else {
        printf("Nenhum numero foi inserido.\n");
    }

    return 0;
}
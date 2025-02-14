#include <stdio.h>

int main() {
    float nota, soma = 0;
    int contador = 0;

    do {
        printf("Digite uma nota ou -1 para sair: ");
        scanf("%f", &nota);
        if (nota != -1) {
            soma += nota;
            contador++;
        }
    } while (nota != -1);

    if (contador > 0) {
        printf("A media das notas e: %.2f\n", soma / contador);
    } else {
        printf("Nenhuma nota foi inserida.\n");
    }

    return 0;
}
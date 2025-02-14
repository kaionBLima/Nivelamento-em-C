#include <stdio.h>

int main() {
    int i = 1, contador = 0;

    while (i <= 100) {
        if (i % 3 == 0) {
            contador++;
        }
        i++;
    }

    printf("Quantidade de numeros divisiveis por 3 entre 1 e 100: %d\n", contador);
    return 0;
}
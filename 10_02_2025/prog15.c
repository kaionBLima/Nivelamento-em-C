#include <stdio.h>

int main() {
    int numero, i = 2, primo = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    } else {
        do {
            if (numero % i == 0 && numero != i) {
                primo = 0;
                break;
            }
            i++;
        } while (i <= numero / 2);
    }

    if (primo) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}
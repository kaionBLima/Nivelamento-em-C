#include <stdio.h>

int main() {
    int numero, i = 1;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= 10);

    return 0;
}
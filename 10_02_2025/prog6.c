#include <stdio.h>

int main() {
    int N, a = 0, b = 1, proximo;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Primeiros %d numeros da sequencia de Fibonacci:\n", N);
    int i = 0;
    while (i < N) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = a + b;
            a = b;
            b = proximo;
        }
        printf("%d ", proximo);
        i++;
    }
    printf("\n");
    return 0;
}
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Número invalido. Insira um numero inteiro positivo.\n");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        sum += (2 * i + 1);
    }
    
    printf("A soma dos primeiros %d numeros impares e: %d\n", n, sum);
    
    return 0;
}

#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Número invalido. Insira um numero inteiro positivo.\n");
        return 1;
    }
    
    printf("Contagem regressiva:\n");
    while (num >= 0) {
        printf("%d\n", num);
        num--;
    }
    
    return 0;
}

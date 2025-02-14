#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("%d e o maior numero.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d e o maior numero.\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("%d e o maior numero.\n", num3);
    } else {
        printf("Dois ou mais numeros sao iguais.\n");
    }

    return 0;
}
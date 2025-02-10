#include <stdio.h>

int main () {

    int n, i = 0;
    double soma = 0, num;

    printf("Digite uma quantidade n: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Digite um numero: ");
        scanf("%lf", &num);
        soma += num;
        i++;
    }
    
    if (n > 0) {
        double media = soma / n;
        printf("Media dos numeros igual a: %.2lf", media); 
    } else {
        printf("Nenhuma media");
    }
    

    return 0;
}
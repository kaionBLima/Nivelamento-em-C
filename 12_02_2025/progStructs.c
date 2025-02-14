#include <stdio.h>
#include <stdlib.h>


struct ling {
    int qv;               
    int cod[99];          
};


void inicializar(struct ling *linguagem) {
    linguagem->qv = 0;    
    for (int i = 0; i < 99; i++) {
        linguagem->cod[i] = 0; 
    }
}


void exibirResultados(struct ling java, struct ling php, struct ling c) {
    printf("\n--- Resultados da Votação ---\n");

    
    printf("Java: %d votos\n", java.qv);
    printf("PHP: %d votos\n", php.qv);
    printf("C: %d votos\n", c.qv);

 
    if (java.qv > php.qv && java.qv > c.qv) {
        printf("Linguagem mais votada: Java\n");
    } else if (php.qv > java.qv && php.qv > c.qv) {
        printf("Linguagem mais votada: PHP\n");
    } else if (c.qv > java.qv && c.qv > php.qv) {
        printf("Linguagem mais votada: C\n");
    } else {
        printf("Houve um empate entre as linguagens.\n");
    }

 
    printf("\nCódigos dos votantes para Java:\n");
    for (int i = 0; i < java.qv; i++) {
        if (java.cod[i] != 0) {
            printf("%d ", java.cod[i]);
        }
    }

    printf("\n\nCódigos dos votantes para PHP:\n");
    for (int i = 0; i < php.qv; i++) {
        if (php.cod[i] != 0) {
            printf("%d ", php.cod[i]);
        }
    }

    printf("\n\nCódigos dos votantes para C:\n");
    for (int i = 0; i < c.qv; i++) {
        if (c.cod[i] != 0) {
            printf("%d \n", c.cod[i]);
        }
    }

    printf("\n\n");
}

int main() {

    struct ling java, php, c;

    inicializar(&java);
    inicializar(&php);
    inicializar(&c);

    int continuar = 1; 
    int escolha, codigo;

    printf("Bem-vindo ao sistema de votação!\n");

    while (continuar == 1) {
        printf("\nEscolha a linguagem de programação:\n");
        printf("1 - Java\n");
        printf("2 - PHP\n");
        printf("3 - C\n");
        printf("Digite o número correspondente: ");
        scanf("%d", &escolha);

        printf("Digite o código do votante: ");
        scanf("%d", &codigo);

        switch (escolha) {
            case 1:
                java.cod[java.qv] = codigo;
                java.qv++;
                break;
            case 2:
                php.cod[php.qv] = codigo;
                php.qv++;
                break;
            case 3:
                c.cod[c.qv] = codigo;
                c.qv++;
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                continue;
        }

         printf("Deseja continuar votando? (1 para continuar, 0 para sair): ");
        scanf("%d", &continuar);
    }

    exibirResultados(java, php, c);

    printf("Pressione qualquer tecla para encerrar...\n");
    getchar(); 
    getchar(); 

    return 0;
}
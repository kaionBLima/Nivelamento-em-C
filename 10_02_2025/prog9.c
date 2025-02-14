#include <stdio.h>

int main() {
    int num = 1;

    printf("Multiplos de 7 entre 1 e 100:\n");
    while (num <= 100) {
        if (num % 7 == 0) {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}
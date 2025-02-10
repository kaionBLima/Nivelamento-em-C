#include <stdio.h>

int main () {

    int num =2;

    do {
        printf("%d\n", num);
        num += 2;
    } while (num <= 20);

    return 0;
}
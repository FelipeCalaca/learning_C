#include <stdio.h>

main () {
    int A, B;

    printf("infrome um número \n");
    scanf("%d", &A);

    if (A%2 == 0) {
        printf("O número %d é par", A);
    }
    else {
        printf("O número %d é ímpar", A);
    }
}

#include <stdio.h>

main () {
    float n1, n2, div;

    printf("informe um número \n");
    scanf("%f", &n1);
    printf("informe outro número \n");
    scanf("%f", &n2);

    if (n2 == 0) {
        printf("o número não pode ser zero \n");
    }
    else {
        div = (n1 / n2);
    }

    printf("o resultado da divisão entre %.1f e %.1f é %.2f", n1, n2, div);
}

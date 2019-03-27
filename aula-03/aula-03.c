#include <stdio.h>

/*
main () {
    int idade;

    printf("informe sua idade \n");
    scanf("%d", &idade);

    if ((idade >= 18) && (idade <= 65) ) {
        printf("Apto a realizar o exame da CNH \n");
    }
     else {
        printf("Você não pode realizar o exame \n");

    }
}
*/

main () {
    int n1, n2;

    printf("informe dois números diferenstes \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 < n2) {
        printf("os números em ordem crescente são %d e %d", n1, n2);
    }
    else {
        printf("os números em ordem crescente são %d e %d", n2, n1);
    }
}

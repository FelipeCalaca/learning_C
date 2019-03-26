#include <stdio.h>

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

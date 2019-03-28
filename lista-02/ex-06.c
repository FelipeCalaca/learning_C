#include <stdio.h>

main () {
    int idade;
    char nome[20];

    printf("informe seu nome \n");
    scanf("%s", &nome);
    printf("informe sua idade \n");
    scanf("%d", &idade);
    if ((idade >= 18) && (idade <= 65) ) {
        printf("%s tem %d anos e é maior de idade \n", nome, idade);
    }
     else {
        printf("%s tem %d anos e não é maior de idade \n", nome, idade);
    }
}

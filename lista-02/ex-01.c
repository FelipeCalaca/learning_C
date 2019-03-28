#include <stdio.h>

main () {
    char resposta;

    printf("Você fez todo o dever de casa? \n");
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's') {
        printf("Você vai se sair bem na prova");
    }
    else {
        printf("Precisa estudar mais");
    }
}


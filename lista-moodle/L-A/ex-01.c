#include <stdio.h>

main () {
    int n1, n2, n3, concatenado, quadrado;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < 10 && n2 < 10 && n3 < 10) {
        concatenado = (n1*100)+(n2*10)+(n3);
        printf("%d \n", concatenado);
        quadrado = concatenado*concatenado;
        printf("%d \n", quadrado);
    }
    else {
        printf("DIGITO INVALIDO");
    }
}

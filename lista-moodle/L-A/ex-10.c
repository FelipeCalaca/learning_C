<<<<<<< HEAD
#include <stdio.h>

main () {
    int num, operacao, a, b, c;
    scanf("%d", &num);

    c = num % 10;
    num = num / 10;

    b = num % 10;
    num = num / 10;

    a = num;

    operacao = (a+(b*3)+(c*5))%7;

    printf("O NOVO NUMERO E = %d%d%d%d", a, b, c, operacao);
}

=======
#include <stdio.h>

main () {
    int numero, operacao, a, b, c;
    scanf("%d", &numero);

    a = numero/100;
    b = ((a*100)-numero)/10;
    b = -b;
    c = (a*100)+(b*10)-numero;
    c = -c;

    operacao = (a+(b*3)+(c*5))%7;
    printf("%d%d%d%d", a, b, c, operacao);
}
>>>>>>> a958466... l-a: Ex-11

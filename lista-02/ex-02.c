#include <stdio.h>

main () {
    int n1, n2;

    printf("infrome dois números \n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("O número %d é maior que %d", n1, n2);
    }
    else {
        printf("O número %d é maior que %d", n2, n1);
    }
}

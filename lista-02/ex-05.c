#include <stdio.h>

main () {
    int M, N;

    printf("infrome dois números \n");
    scanf("%d %d", &M, &N);

    if (M%N == 0) {
        printf("O número %d é divisível por %d", M, N);
    }
    else {
        printf("O número %d não é divisível por %d", M, N);
    }
}

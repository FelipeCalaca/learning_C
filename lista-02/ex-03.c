#include <stdio.h>

main () {
    int A, B, C;

    printf("infrome três números \n");
    scanf("%d %d %d", &A, &B, &C);

    if (A > B && A > C) {
        printf("O número %d é o maior", A);
    }
    if (B > A && B > C) {
        printf("O número %d é o maior", B);
    }
    if (C > A && C > B) {
        printf("O número %d é o maior", C);
    }
    if (A < B && A < C) {
        printf("O número %d é o menor", A);
    }
    if (B < A && B < C) {
        printf("O número %d é o menor", B);
    }
    if (C < A && C < B) {
        printf("O número %d é o menor", C);
    }
}

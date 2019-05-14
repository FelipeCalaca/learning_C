#include <stdio.h>

int main() {
    int num[10], j;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);

        for (int c = 0; c < 10; c++) {
            if (num[c] < num[i]) {
                j = num[i];
                num[i] = num[c];
                num[c] = j;
            }
        }
    }

    for (int p = 0; p < 10; p++) {
        printf("%d ", num[p]);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        if (N % 2 == 0) {
            printf("ALICE\n");
        } else {
            printf("BOB\n");
        }
    }

    return 0;
}
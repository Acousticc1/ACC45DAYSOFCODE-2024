#include <stdio.h>

int main() {
    int T;  // number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N, X;  // total cards and face-up cards
        scanf("%d %d", &N, &X);

        int min_flips = (X < N - X) ? X : N - X;
        printf("%d\n", min_flips);
    }

    return 0;
}